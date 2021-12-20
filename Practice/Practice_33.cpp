#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;
    static int c;

public:
    void setA(int a)
    {
        this->a = a;
    }
    void setB(int b)
    {
        this->b = b;
    }
    void setdata(int, int);
    friend Complex sumOfComplex(Complex, Complex);
    static int count()
    {
        return ++c;
    }
    void sumOfComplex1(Complex c1, Complex c2)
    {
        a = c1.a + c2.a + 3;
        b = c2.b + c2.b + 2;
    }
    void printComplexsum()
    {
        cout << "The sum of the complex number is" << a << "+" << b << endl;
    }
};
int Complex::c = 5;

void Complex::setdata(int a, int b)
{
    this->a = a;
    this->b = b;
}

Complex sumOfComplex(Complex c1, Complex c2)
{
    Complex c;
    c.a = c1.a + c2.a;
    c.b = c2.b + c2.b;
    return c;
}

class Number : public Complex
{

public:
    Number();
    Number(int a, int b)
    {
        setA(a);
        setB(b);
    }
};

int main()
{
    Complex c[3];
    c[0].setdata(3, 4);
    c[1].setdata(4, 5);
    c[2] = sumOfComplex(c[0], c[1]);
    c[2].printComplexsum();
    cout << "Incrementing value: " << Complex::count() << endl;
    cout << "Incrementing value: " << Complex::count() << endl;
    cout << "Incrementing value: " << Complex::count() << endl;
    c[2].sumOfComplex1(c[0], c[1]);
    c[2].printComplexsum();
    Number n3;
    Number n1 = Number(1, 2);
    Number n2 = Number(3, 4);
    n3.sumOfComplex1(n1, n2);
    n3.printComplexsum();
    return 0;
}