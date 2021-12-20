//class type to primitive type can be implemented with casting operator:

// Syntex:
// operator type()
// {
// ..
// return(type-data);
// }

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a=" << a << "\nb=" << b << endl;
    }

    operator int()
    {
        return a;
    }
};

int main()
{
    Complex c1;
    c1.setdata(3, 4);
    c1.showdata();
    int x;
    x = c1; //x=c1.operator int()
    cout << "x=" << x << endl;
    return 0;
}