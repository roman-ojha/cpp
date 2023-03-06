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
    void showdata()
    {
        cout << "\na=" << a << "b=" << b << endl;
    }
    complex operator-()
    {
        complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 4);
    // for calculation of a complex number in unary operator cant do like:
    // c2=-c1;
    // but we can do calculation of  unary operator by :
    // c2 = c1.operator-();
    // but if we wantto remove . then we also have to remove (opreator) and after that
    c3 = -c1;
    c2.showdata();
    c3.showdata();
    return 0;
}