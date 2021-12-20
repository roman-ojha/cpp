// Primitive type
// * int,char,float and double are primitive types
// * class type is any class you define

//primitive type to class type can be implemented through constructor

#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex() {} //default constructor
    complex(int k)
    {
        a = k;
        b = 0;
    }
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a=" << a << "\nb=" << b << endl;
    }
};

int main()
{
    complex c1;
    int x = 5;
    c1 = x; //c1.complex(x)
    // to solve the problem of this conversion we have to use constructor
    c1.showdata();
    return 0;
}
