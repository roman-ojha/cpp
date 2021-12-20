#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display() // now this function become virtual function
    {
        cout << "1 Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 Dispalying Base class variable var_base " << var_base << endl;
        cout << "2 Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display(); // after giving vitual function in base class now we can access derived class function
    // and this decision is taken at the run time so, we called it a run time polymorphisum
    // if the function display() is not define or declare and function from derived class doesnot mach the same name of the base class then we can't call that derived class function through base class pointer
    return 0;
}