// unary Operator overloding as a friend function

#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout << "the value of complex after calculation= (" << a << "+" << b << "i)" << endl;
    }

    friend complex operator-(complex);
};

complex operator-(complex c)
{
    complex temp;
    temp.a = -c.a;
    temp.b = -c.b;
    return temp;
}

int main()
{
    complex c1, c2;
    c1.setdata(3, 4);
    c2 = -c1; //c2=operator-(c1)
    c1.printdata();
    c2.printdata();
    return 0;
}