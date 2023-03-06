#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class
    // but when we call function through pointer then derived class function will not call here base class function will call because pointer is of base class it is called late binding
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // but this  Will throw an error we can't excess derived class thorugh base class pointer like this
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448; // but we can access base class thorugh derived class pointer
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    // in this kind of situtation function will called at the run time and take the decision at the run time that which display function need to call because there are two display() function in base as well as in derived so, function will called and take the decision that derived class function need to call in this situation and this is called as run time polymorphisum
    return 0;
}