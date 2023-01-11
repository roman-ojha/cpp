/*
    *) auto
        -> rather then initializing the variable using int, float, char etc..
        -> c++ can automatically initialized the data type as per the value that we assign into the variable
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string getName()
{
    // function that return string
    return "roman";
}

class Device
{
};

class DeviceManager
{
private:
    std::unordered_map<std::string, std::vector<Device *>> m_Devices;

public:
    const std::unordered_map<std::string, std::vector<Device *>> &GetDEvices()
    {
        return m_Devices;
    }
};

auto fun()
{
    // return the auto type that will automatically detect string type and return string type
    return "";
}

// return int type
auto returnInt() -> int
{
    return 3;
}

// return string type
auto returnString() -> char *
{
    return "roman";
}

// return char type
auto returnChar() -> char
{
    return 'a';
}

// return string type
auto returnString2() -> string
{
    return "roman";
}

int main()
{
    // int type variable
    int a = 5;

    // int type variable automatically handle by c++
    auto b = a;

    // Assigning the float variable
    auto c = 5.5f;

    // long double
    auto d = 5.5l;

    // string type
    auto e = "Roman";

    cout << fun() << endl;

    // EX:
    // 'name' store the string type variable
    string name = getName();
    // or we can use auto keyword which will automatically detect the return type and create that type of variable
    auto name2 = getName();
    // std::string name2

    // Use case where we might use 'auto' keyword
    // EX1:
    // When you have to long/huge type that is not easy to write in that case use can use auto
    vector<string> fruits;
    fruits.push_back("Apple");
    fruits.push_back("Orange");

    // creating a iterator to print 'fruits' without using 'auto'
    for (std::vector<std::string>::iterator it = fruits.begin(); it != fruits.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Creating iterator to print 'fruits' using 'auto'
    for (auto it = fruits.begin(); it != fruits.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // EX2:
    DeviceManager dm;
    // assigning the this 'std::unordered_map<std::string, std::vector<Device *>>' huge type
    const std::unordered_map<std::string, std::vector<Device *>> &devices = dm.GetDEvices();

    // rather use 'using' keyword
    using DeviceMap = std::unordered_map<std::string, std::vector<Device *>>;
    const DeviceMap &devices2 = dm.GetDEvices();

    // Or use 'typedef' keyword
    typedef std::unordered_map<std::string, std::vector<Device *>> DeviceMap2;
    const DeviceMap2 &devices3 = dm.GetDEvices();

    // Or use 'auto' keyword
    // and we are not making copy rather we are referencing
    const auto &devices4 = dm.GetDEvices();

    // Another case when you don't know what type the function will return in that case also you can use 'auto' keyword
    // Like in some template libraries where we don't know the return type in that case we can use 'auto'
    // NOTE: But if you know the return type and it is quite short to write/easier to write in that case it is recommended to write the actual type
    // Because if you will specify the type of the variable it is more readable to the developer and more understandable while creating the project

    return 0;
}
