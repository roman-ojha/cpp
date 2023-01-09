// constructor

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // complex() {}
    complex()
    {
        a = 5;
        b = 4;
    }
    void printnumber()
    {
        cout << "the value of a= " << a << " b= " << b << endl;
    }
};

int main()
{
    complex c1, c2;
    c1.printnumber();
    return 0;
}