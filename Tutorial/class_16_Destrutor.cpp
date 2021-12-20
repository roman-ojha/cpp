// * Destructor is a instance member function of a class
// * Thr name of the destructor is same as the name of a class but preceded by tilde (~) symbol
// * Destructors can never be static
// * Destructor has no return type
// * Destructor take no argument (NO overloding is pissible)

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    ~complex() { cout << "\ndistructor" }
    void fun()
    {
        complex obj;
    }
};

int main()
{
    // fun();
    return 0;
}