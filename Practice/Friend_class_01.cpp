#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex
{
    int x, y;
    friend class calculator;

public:
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.x + o2.x);
}
int calculator::sumcompcomplex(complex o1, complex o2)
{
    return (o1.y + o2.y);
}
int main()
{
    complex c1, c2;
    c1.setdata(1, 2);
    c2.setdata(3, 4);
    calculator c3;
    int sum;
    sum = c3.sumrealcomplex(c1, c2);
    cout << "the sum of real number is= " << sum << endl;
    sum = c3.sumcompcomplex(c1, c2);
    cout << "the sum of complex number is= " << sum << endl;

    return 0;
}