#include <iostream>
using namespace std;

class math
{
    int a;

public:
    void setdata(int x);
    void printdata();
    math operator++(int);
};

void math::setdata(int x)
{
    a = x;
}

void math::printdata()
{
    cout << "value after clculation= " << a << endl;
}

math math::operator++(int)
{
    math temp;
    temp.a = a++;
    return temp;
}

int main()
{
    math m1, m2;
    m1.setdata(5);
    m2 = m1++;
    m2.printdata();
    m1.printdata();
    return 0;
}