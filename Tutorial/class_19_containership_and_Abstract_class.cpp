/* 
When a class contains object of another class as its member data, it is termed as containership. The class which contains the object is called container class. Containership is also termed as “class within class”.

class A 
{     
    ……     
    …… 
}; 
class B                 Here, class B contains object of class A. So B is the container class. 
{    
    …..    
    A obj1;    
    ….. 
}; 
 */

#include <iostream>
using namespace std;

class Manager
{
    char name[20];
    int age;

public:
    void getdata()
    {
        cin >> name >> age;
    }
    void putdata()
    {
        cout << name << endl
             << age << endl;
    }
};
class Employee // Employee is container class
{
    char department[20];
    Manager m; // Object of class Manager
public:
    void getdata()
    {
        m.getdata();
        cin >> department;
    }
    void putdata()
    {
        m.putdata();
        cout << department << endl;
    }
};
int main()
{
    Employee e;
    e.getdata();
    e.putdata();
    return 0;
}

// Abstract Class:
// An abstract class is one that is not used to create objects. An abstract class is designed only to act as a base class. It is a design concept in program development and provides a base upon which other classes may be built.