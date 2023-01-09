#include <iostream>
using namespace std;

class Y;

class X
{
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }
    friend void exchange(X &, Y &);
    void printdata()
    {
        cout << a;
    }
};

class Y
{
    int b;

public:
    void setdata(int y)
    {
        b = y;
    }
    friend void exchange(X &, Y &);
    void printdata()
    {
        cout << b;
    }
};

void exchange(X &o1, Y &o2)
{
    int temp;
    temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main()
{
    X x;
    x.setdata(5);
    Y y;
    y.setdata(8);
    exchange(x, y);
    cout << "the value of x after exchange is= ";
    x.printdata();
    cout << endl;
    cout << "the value of y after exchange is= ";
    y.printdata();
    cout << endl;
    return 0;
}