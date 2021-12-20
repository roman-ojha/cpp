/*
->  Write a program to overload ++ operator using friend function.
*/

#include <iostream>
using namespace std;

class Complex
{
    int r, i;

public:
    Complex() {}
    Complex(int r, int i)
    {
        this->r = r;
        this->i = i;
    }
    void showData()
    {
        cout << "Real: " << r << endl
             << "Imaginary: " << i << endl;
    }
    friend Complex operator++(Complex);
};

Complex operator++(Complex c)
{
    Complex temp;
    temp.r = ++c.r;
    temp.i = ++c.i;
    return temp;
}

int main()
{
    Complex c1(4, 5), c2;
    c2 = ++c1;
    c2.showData();
    return 0;
}