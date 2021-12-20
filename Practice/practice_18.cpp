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
    friend void calculation(X, Y);
};

class Y
{
    int b;

public:
    void setdata(int y)
    {
        b = y;
    }
    friend void calculation(X, Y);
};

void calculation(X o1, Y o2)
{
    cout << "the sum of the two number is= " << o1.a + o2.b << endl;
}

int main()
{
    X n1;
    Y n2;
    n1.setdata(3);
    n2.setdata(4);
    calculation(n1, n2);
    return 0;
}