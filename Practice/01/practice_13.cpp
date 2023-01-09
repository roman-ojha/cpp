// friend function

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex() {}
    complex(int, int);
    void printdata();
    friend complex calculation(complex, complex);
};

complex::complex(int x, int y)
{
    a = x;
    b = y;
}

void complex::printdata()
{
    cout << "the sum of the complex number is= (" << a << "+" << b << ")" << endl;
}

complex calculation(complex o1, complex o2)
{
    complex temp;
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}
int main()
{
    complex c1, c2, c3;
    int p, q;
    cout << "enter the value of complex number for c1= ";
    cin >> p >> q;
    c1 = complex(p, q);
    cout << "enter the value of the complex number for c2= ";
    cin >> p >> q;
    c2 = complex(p, q);
    c3 = calculation(c1, c2);
    c3.printdata();
    return 0;
}