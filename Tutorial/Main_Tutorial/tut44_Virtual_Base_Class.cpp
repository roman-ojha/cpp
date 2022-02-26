#include <iostream>
using namespace std;

class A
{
public:
    int a;
};

class B : virtual public A
{
    // public:      // -> inherited form class "A"
    //     int a;
};

class C : public virtual A
{
    // public:      // -> inherited form class "A"
    //     int a;
};

class D : public B, public C // for this kind of situation with same variable and method of 'B' and 'C' but if we will use virtual when you are inherite form base class then the another derived class 'D' will only apply one variables and method
{
    // public:      // -> inherited form class "B" and class "C" but only have one copy
    //     int a;
};

int main()
{

    return 0;
}