#include <iostream>
using namespace std;

class A
{
    int a;

public:
    virtual ~A() {} //if we made a base class destructor virtual then we dont have to mention or make another virtual ~B(){} because derived class destructor will automatically make a vitrul destructor for the derived class
};

class B : public A
{
    int b;

public:
    ~B() {}
};

int fun();
int fun()
{
    A *p = new B;
    // when dynamically block ,variable or object will made then it will not automatically realese that block form the memory so we have to delete this memory by using delete Keyword
    delete p; // by doing this A class object will delete because pointer is of class A
    // when we do the "delete p" then A class destructor will call but not the B class dectructor thats why we have to use  virtual descructor to be able to destroy B class object as well
}

int main()
{
    fun();
    return 0;
}