// dynamic initialization of objext using constructors

#include <iostream>
using namespace std;

class complex
{
    int x, y;

public:
    complex() {}
    complex(int a, int b = 5)
    {
        x = a;
        y = b;
    }
    void getdata()
    {
        cout << "enter the value of x= ";
        cin >> x;
    }
    void printsum()
    {
        cout << "the sum of the complex number is= (" << x << "+" << y << "i)" << endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
};

int main()
{
    complex c1(1), c2(1), c3;
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2;
    c3.printsum();
    return 0;
}