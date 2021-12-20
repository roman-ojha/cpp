// type conversion from primitive to class type

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout << "the value if a= " << a << "and b= " << b << endl;
    }
    complex() {}
    complex(int x)
    {
        a = x;
        b = 0;
    }
};

int main()
{
    complex c1, c2;
    int x = 5;
    c1 = x;
    c1.printdata();
    return 0;
}