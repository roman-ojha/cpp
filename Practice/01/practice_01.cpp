#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void printdata()
    {
        cout << "The sum of the complex number is:" << a << "+" << b << "i" << endl;
    }
    void calculation(complex, complex);
};

void complex::calculation(complex c1, complex c2)
{
    a = c1.a + c2.a;
    b = c1.b + c2.b;
}

int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c2.setdata(3, 4);
    c3.calculation(c1, c2);
    c3.printdata();
    return 0;
}