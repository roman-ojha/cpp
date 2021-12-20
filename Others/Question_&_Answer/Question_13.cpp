/*
-> Write a program to overload + operator to concatenate two strings.
*/

#include <iostream>
#include <cstring>
using namespace std;

class Concatenate
{
    char str[20];

public:
    void getString(char str[])
    {
        strcpy(this->str, str);
    }
    friend Concatenate operator+(Concatenate s1, Concatenate s2)
    {
        strncat(s1.str, s2.str, sizeof(s2.str));
        return s1;
    }
    void displayString()
    {
        cout << "String: " << str << endl;
    }
};

int main()
{
    char name1[20] = "Roman";
    char name2[20] = " Ojha";
    Concatenate *s = new Concatenate[3];
    s[0].getString(name1);
    (s + 1)->getString(name2);
    *(s + 2) = (*s) + s[1];
    (*(s + 2)).displayString();
    return 0;
}