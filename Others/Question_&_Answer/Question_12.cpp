/*
    -> Compare two string using Operator overloading of == operator
*/
#include <iostream>
// #include <string>
#include <string.h>
using namespace std;

class Compare
{
    char str[40];

public:
    Compare() {}
    Compare(char[]);
    int operator==(Compare s);
};

Compare::Compare(char str[])
{
    strcpy(this->str, str);
}
int Compare::operator==(Compare s)
{
    return ((strcmp(str, s.str) == 0) ? 1 : 0);
}

int main()
{
    char name1[40] = "Roman";
    char name2[40] = "Roman";
    Compare s1(name1), s2(name2);
    if (s1 == s2)
        cout << "Both string are same" << endl;
    else
        cout << "Both string are different" << endl;
    return 0;
}