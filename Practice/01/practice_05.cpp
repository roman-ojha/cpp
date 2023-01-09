// type conversion from  class type to  primitive type

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
        cout << "the value of a= " << a << "and b= " << b << endl;
    }
    complex operator+(complex o)
    {
        complex temp;
        temp.a = a + o.a;
        temp.b = b + o.b;
        return temp;
    }
    operator int()
    {
        return a;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(7, 6);
    c1.printdata();
    c2.setdata(2, 4);
    c2.printdata();
    c3 = c1 + c2;
    int p, q;
    p = c3;
    cout << "the value of p= " << p << endl;
    return 0;
}