#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Complex
{
private:
    int x, y;

public:
    Complex() {}
    Complex(int, int);
    void printdata();
    Complex calculation(Complex);
};

Complex::Complex(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Complex::printdata()
{
    cout << "X: " << x << " Y: " << y << endl;
}

Complex Complex::calculation(Complex c)
{
    Complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}

int main()
{
    Complex c1(1, 2), c2(3, 4), c3;
    c3 = c1.calculation(c2);
    c3.printdata();
    getch();
    return 0;
}