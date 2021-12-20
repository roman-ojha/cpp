#include <iostream>
using namespace std;

// if there are same function name of different base class and derived class is inherite those class then that derived class will going to have same function name then if we want to call that function which are same in derived class then there will come an error called ambuguity

// ambiguity 1
// -----------------------------------------------------------------------------------------------------------------------------------
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet(); // -> we are saying that greet function need to be apply from base2
    }
};
// --------------------------------------------------------------------------------------------------------------------------------------

// ambiguity 2
// -------------------------------------------------------------------------------------------------------------------------------------
class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

class D : public B
{
    int a;
    // D's new say() method will override base class's say() method
public:
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};
//-----------------------------------------------------------------------------------------------------------------------------------------

int main()
{
    // Ambiguity 1
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet();

    // Ambibuity 2
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}
