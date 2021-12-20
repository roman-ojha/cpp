#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex() {}
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(complex &o1)
    {
        a = o1.a + 1;
        b = o1.b + 1;
    }
    friend ostream &operator<<(ostream &, complex);
};

ostream &operator<<(ostream &dout, complex X)
{
    cout << "A=" << X.a << " B=" << X.b << endl;
    return cout;
}

int main()
{
    complex c1;
    c1.setdata(3, 4);
    cout << c1;
    complex c2(c1);
    cout << c2;
    return 0;
}