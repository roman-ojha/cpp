#include <iostream>
#include <variant>
#include <string>
#include <map>
using namespace std;

namespace roman
{
    class object
    {
    private:
        // different type that we want to store as value
        using obj_type = std::variant<int, std::string, bool, double>;

        // this store the key->value, value of 'obj_type'
        std::map<string, obj_type> obj;

    public:
        // structure that will return string type by getting variant type
        struct make_string_functor
        {
            std::string operator()(const std::string &x) const { return x; }
            std::string operator()(int x) const { return std::to_string(x); }
            std::string operator()(bool x) const { return std::to_string(x); }
            std::string operator()(double x) const { return std::to_string(x); }
        };
        // Operator overloading [] to set and get the key->value
        obj_type &operator[](string key) { return this->obj[key]; }

        // return value after converting it to string
        string getV(obj_type v)
        {

            return std::visit(make_string_functor(), v);
        }
    };
}
