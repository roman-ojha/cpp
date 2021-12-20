#include <iostream>
#include <stdio.h>
using namespace std;

template <class T1, class T2>
class Complex
{
    T1 x;
    T2 y;

public:
    Complex() {}
    Complex(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }
    void printSum()
    {
        cout << "The sum of the given number is: " << this->x + this->y << endl;
    }
};

int main()
{
    Complex<long, double> c(43, 12.1234);
    c.printSum();
    return 0;
}