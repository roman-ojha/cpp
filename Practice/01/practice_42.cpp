#include <iostream>
#include <string.h>
using namespace std;

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