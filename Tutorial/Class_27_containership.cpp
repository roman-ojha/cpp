#include <iostream>
#include <string.h>
using namespace std;

/*
When a class contains object of another class as its member data, it is termed as 
containership. The class which contains the object is called container class. Containership 
is also termed as “class within class”
*/

/*
In some situations, inheritance and containership relationship serves similar purpose. 
Containership is useful with classes that act like a data type. The object of these classes 
can be used almost like other variables in the class.
Inheritance from a base class via different paths
Here, class B contains object of class A. So 
B is the container class.
Source: www.csitnepal.com (By:Tej Bahadur Shahi) Page 79
In inheritance, if a class B is derived from a class A, then “B is a kind of A”. This is 
because B has all the characteristics of A, and in addition some of its own. So, 
inheritance is often called a “kind of” relationship
*/
class manager
{
    char name[20], gender[5];
    int age, salary;

public:
    manager() {}
    manager(char *n, char g[], int age, int salary)
    {
        strcpy(name, n);
        strcpy(gender, g);
        this->age = age;
        this->salary = salary;
    }
    void display()
    {
        cout << "Name: " << name << endl
             << "Gender: " << gender << endl
             << "Age: " << age << endl
             << "Salary: " << salary << endl;
    }
};

class employee
{
    char depertment[20];
    manager emp;

public:
    employee() {}
    employee(char *n, char g[], int age, int salary, char d[])
    {
        emp = manager(n, g, age, salary);
        strcpy(depertment, d);
    }
    void display()
    {
        emp.display();
        cout << "Deperment: " << depertment << endl;
    }
};

int main()
{
    char name[20] = "roman";
    char gender[5] = "male";
    char depertment[20] = "game";
    int age = 40;
    int salary = 100000;
    employee e(name, gender, age, salary, depertment);
    e.display();
    return 0;
}