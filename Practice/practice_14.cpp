//friend function with two class

#include <iostream>
using namespace std;

class B;

class A
{
    int a;

public:
    void setdata1(int x)
    {
        a = x;
    }
    // friend class B;
    friend void sumdata(A, B);
};

class B
{
    int b;

public:
    // friend class A;
    void setdata2(int c)
    {
        b = c;
    }
    friend void sumdata(A, B);
};
void sumdata(A y, B z)
{
    cout << "the sum is= " << y.a + z.b << endl;
}

int main()
{
    A a1;
    B b1, b2;
    a1.setdata1(5);
    b1.setdata2(6);
    sumdata(a1, b1);
    return 0;
}