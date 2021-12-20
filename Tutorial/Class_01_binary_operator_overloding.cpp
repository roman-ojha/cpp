#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "\na=" << a << "b=" << b << endl;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a = a + c.a; // -> in here a is a color object
        temp.b = b + c.b; // -> in here b is also a color object
        return temp;
    }
    complex operator+(complex c)
    {
        // here operator is a keyword because we are using (+)operator as a function name so we have to put operator in front of (+)
        complex temp1;
        temp1.a = a + c.a;
        temp1.b = b + c.b;
        return temp1;
    }
};
int main()
{
    complex c1, c2, c3, c4;
    c1.setdata(3, 4);
    c2.setdata(5, 6);
    // c = c1 + c2; ->this will not going to work
    // we can de is like:
    c3 = c1.add(c2);
    // c1 is a color object
    // but in alternativ way by using operator function
    // after using operator(+) as a function now we donot have to use add function
    // after that we can call function by:
    // c4 = c1.operator+(c3);
    // but we can remove . after using operator function if we want to remove . then we also have to remove (operator) after that we can call function like :
    c4 = c1 + c2;
    c3.showdata();
    c4.showdata();
    return 0;
}

/* 

Operrator overloding:
* when an operator is overloaded with multiple jobs,it is known as operator overrloding.
* it is a way to implement compile time polymorphism.

*/

/*

rules to Remember
* Any symbol can be use as a function name 
- if it id valid oerator in c language
- if it is precedent by operator keyword

* you can not overload (sizeof) and ?: operator 

*/