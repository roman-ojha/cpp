#include <iostream>
using namespace std;

class complex1
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    int setA()
    {
        return a;
    }
    int setB()
    {
        return b;
    }
    void printdata()
    {
        cout << "the sum of the a= " << a << " b= " << b << endl;
    }
    complex1 operator+(complex1 o)
    {
        complex1 temp;
        temp.a = a + o.a;
        temp.b = b + o.b;
        return temp;
    }
};

class complex2
{
    int c, d;

public:
    void setdata(int p, int q)
    {
        c = p;
        d = q;
    }
    void displaydata()
    {
        cout << "the value after assign c= " << c << " d= " << d << endl;
    }
    complex2() {}
    complex2(complex1 e)
    {
        c = e.setA();
        d = e.setB();
    }
};

int main()
{
    complex1 c1, c2, c3;
    complex2 c4;
    c1.setdata(4, 5);
    c2.setdata(7, 8);
    c3 = c1 + c2;
    c3.printdata();
    c4 = c3;
    c4.displaydata();
    return 0;
}