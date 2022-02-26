/* 
constructors in derived classes:
1) we can use constructors in derived class in c++
2) if base class constructor does not have any arguments, there is no need of any constructot in derived class.
3) But if there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor
4) if both base and derived classes have constructors, base class constructor is executed first.
 */

/* 
Connstructors in multiple inheritance:
1) in multiple inheritance, base classes are constructed   in the order in which they appear in the class declaration
ex -> class C : public A , public B -> here class A constructor will called first
2) in multilevel inheritance, the constructors are executed in the order of inheritance

 */

/* 
Soecial Syntax
1) C++ supports an special syntax for passing arguments to multiple base classes
2) the constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes 
3) The bosy is called after all the constructors are finished executing

        Derived-(arg1,arg2,arg3,....): Base1-Constructor(arg1,arg2),Base2-Constructor(arg3,arg3)
        {
            ....
        } Base1-Constructor(arg1,arg2)

 */

/* 
Special case of virtual base class
1) the constructors for virtual base classes are invoked before an nonvirtual base class
2) if there are multiple virtual base classes,they are invoked in the order declared
3) Any non-virtal base class are then constructed before the derived class constructor is excuted

 */

#include <iostream>
using namespace std;

class A
{
    int o1, o2;

public:
    A() {}
    A(int a1, int a2)
    {
        o1 = a1;
        o2 = a2;
    }
    void printdata1()
    {
        cout << o1 << " , " << o2 << endl;
    }
};

class B : public A
{
    int p1, p2;

public:
    B() {}
    B(int b1, int b2, int a1, int a2) : A(b1, b2)
    {
        p1 = a1;
        p2 = a2;
    }
    void printdata2()
    {
        cout << p1 << " , " << p2 << endl;
    }
};
class C : public B
{
    int q1, q2;

public:
    C() {}
    C(int c1, int c2, int b1, int b2, int a1, int a2) : B(c1, c2, b1, b2)
    {
        q1 = a1;
        q2 = a2;
    }
    void printdata3()
    {
        cout << q1 << " , " << q2 << endl;
    }
};
int main()
{
    C c(1, 2, 3, 4, 5, 6);
    c.printdata1();
    c.printdata2();
    c.printdata3();
    return 0;
}
