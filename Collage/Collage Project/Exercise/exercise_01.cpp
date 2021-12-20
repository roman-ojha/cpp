#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string Name;
    int ID;

public:
    void getdata(string n, int i)
    {
        Name = n;
        ID = i;
    }
    void putdata()
    {
        cout << "The name of the employee is= " << Name << " and id is= " << ID << endl;
    }
};

class Manager : public Employee
{
protected:
    string Department;

public:
    void getdata(string d, string n, int i)
    {
        Department = d;
        Employee::getdata(n, i);
    }
    void putdata()
    {
        Employee::putdata();
        cout << "The Department of the Employee (manager) is= " << Department << endl;
    }
};

class Computer_Operator : public Employee
{
protected:
    int typing_speed;

public:
    void getdata(int t, string n, int i)
    {
        Employee::getdata(n, i);
        typing_speed = t;
    }
    void putdata()
    {
        Employee::putdata();
        cout << "The typing speed of the of the Employee (Computer_Operator)  is= " << typing_speed << endl;
    }
};

int main()
{
    Employee e;
    Manager m;
    Computer_Operator c;
    string name, Department;
    int ID, typing_speed, i;
    cout << "Are you a Manager or computer operator, Enter 1 for Manager or 2 for Computer operator= ";
    cin >> i;
    if (i == 1)
    {
        cout << "Enter the ID of the employee= ";
        cin >> ID;
        cout << "Enter the Name of the employee= ";
        cin >> name;
        cout << "Enter the department of the employee= ";
        cin >> Department;
        m.getdata(Department, name, ID);
        m.putdata();
    }
    else if (i == 2)
    {
        cout << "Enter the ID of the employee= ";
        cin >> ID;
        cout << "Enter the Name of the employee= ";
        cin >> name;
        cout << "Enter typing speed of the Computer operator= ";
        cin >> typing_speed;
        c.getdata(typing_speed, name, ID);
        c.putdata();
    }
    else
    {
        cout << "Invalid number plese enter 1 or 2";
    }
    return 0;
}