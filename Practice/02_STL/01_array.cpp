#include <iostream>
#include <array>
#include <string>
using namespace std;

std::array<string, 5> *get_array(std::array<string, 5> *names)
{
    (*names)[0] = "Harry";
    for (string name : (*names))
    {
        cout << name << " ";
    }
    cout << endl;

    return names;
}

int main()
{
    std::array<std::string, 5> names = {"Roman", "Razz", "Jack"};
    std::array<std::string, 5> *names2 = get_array(&names);
    (*names2)[0] = "Ram";
    for (string name : names)
    {
        cout << name << " ";
    }
    cout << endl;

    for (std::array<std::string, 5>::iterator it = (*names2).begin(); it != (*names2).end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    for (int i = 0; i < (int)(*names2).size(); i++)
    {

        cout << (*names2)[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < (int)(*names2).size(); i++)
    {

        cout << (*names2).at(i) << " ";
    }
    cout << endl;

    auto names3 = (*names2);

    cout << names3.front() << endl;

    // auto names4 = names3.data();

    cout << names3.max_size() << endl;
    return 0;
}