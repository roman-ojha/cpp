/*
    *) Interface:
        -> Interface is the class that only contain the unimplemented methods
        -> or class that only contain pure virtual function
        -> can't create object of that class
*/

#include <iostream>

class Interface
{
public:
    virtual void hello() = 0;
    virtual void world() = 0;
};

class Derived : public Interface
{
public:
    // Function override
    void hello() override
    {
        std::cout << "Hello" << std::endl;
    }

    void world() override
    {
        std::cout << "World" << std::endl;
    }
};

void print(Interface *inf)
{
    // Here we are getting the 'Interface' type of variable
    // But we will pass the 'Derived' type of variable
    // Because Interface type have the function that we define inside the 'Derived' class we can call those function
    // But if we have not defined the pure virtual function inside the 'Derived' class in that case we can't pass the 'Derived' type of object here

    inf->hello();
    inf->world();
}

int main()
{
    Derived d;
    print(&d);

    return 0;
}