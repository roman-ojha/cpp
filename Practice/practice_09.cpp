// parameterized constructors

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex() {}
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata();
};

void complex::printdata()
{
    cout << "the value of a= " << a << " b= " << b << endl;
}

int main()
{
    complex c1(1, 2);
    c1.printdata();
    complex c2 = complex(5, 7);
    c2.printdata();
    return 0;
}