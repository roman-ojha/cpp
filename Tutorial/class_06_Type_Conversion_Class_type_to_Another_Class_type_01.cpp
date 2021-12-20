/*
 class type to another class type:
 - conversion through constructor
 - conversion througn casting operator

*/

// Type_Conversion_Class_type_to_Another_Class_type_using constructor

#include <iostream>
using namespace std;

class product
{
    int m, n;

public:
    void setdata(int x, int y)
    {
        m = x;
        n = y;
    }
    void printdata()
    {
        cout << "the value of product=" << endl;
        cout << "m=" << m << "\nb=" << n << endl;
    }
    int getM()
    {
        return m;
    }
    int getN()
    {
        return n;
    }
};

class item
{
    int a, b;

public:
    item() {}
    item(product p)
    {
        a = p.getM();
        b = p.getN();
    }
    void showdata()
    {
        cout << "the Value of item=" << endl;
        cout << "a=" << a << "\nb=" << b << endl;
    }
};

int main()
{
    product p1;
    item i1;
    p1.setdata(8, 9);
    p1.printdata();
    i1 = p1; // i1.item(p1)
    i1.showdata();
    return 0;
}
