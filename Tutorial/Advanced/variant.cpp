#include <iostream>
#include <variant>
#include <string>
#include <map>
#include <functional>
using namespace std;

// different type that we want to store as value
using obj_type = std::variant<int, std::string, bool, double>;

// structure that will return string type by getting variant type
struct make_string_functor
{
    std::string operator()(const std::string &x) const { return x; }
    std::string operator()(int x) const { return std::to_string(x); }
    std::string operator()(bool x) const { return std::to_string(x); }
    std::string operator()(double x) const { return std::to_string(x); }
};

// return value after converting it to string
string getV(obj_type v)
{

    return std::visit(make_string_functor(), v);
}

int main()
{
    std::map<string, obj_type> obj;
    obj["name"] = "roman";
    obj["id"] = 3;
    obj["male"] = true;
    obj["mark"] = 33.3;

    //  to get the variable value
    cout << "name: " << std::get<string>(obj["name"]) << endl;
    // std::get<'variable_return_type'>(std::variant)

    int id = std::get<int>(obj["id"]);

    // Or we can use the function that we create
    cout << "id: " << getV(obj["id"]) << endl;
    cout << "male: " << getV(obj["male"]) << endl;
    cout << "mark: " << getV(obj["mark"]) << endl;

    return 0;
}