/*
Base:
    Employee
    Name
    ID
    getdata()
    putdata()

Derived1: Base
        Manager
        Department
        getdata()
        putdata()

Derived2: Base
        ComputerOperator
        Typing_Speed
        getdata()
        putdata()
*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{

protected:
        string name;
        int id, salary;
        string depertment;

public:
        virtual void getdata(string, string, int, int) = 0;
        virtual void putdata() = 0;
};

class Manager : public Employee
{
public:
        void getdata(string name, string depertment, int id, int salary)
        {
                this->name = name;
                this->depertment = depertment;
                this->id = id;
                this->salary = salary;
        }
        void putdata()
        {
                cout << "Detail are: " << endl
                     << "Name: " << name << endl
                     << "ID: " << id << endl
                     << "Depertment: " << depertment << endl
                     << "Salary: " << salary << endl;
        }
};

class ComputerOperator : public Employee
{
public:
        void getdata(string name, string depertment, int id, int salary)
        {
                this->name = name;
                this->depertment = depertment;
                this->id = id;
                this->salary = salary;
        }
        void putdata()
        {
                cout << "Detail are: " << endl
                     << "Name: " << name << endl
                     << "ID: " << id << endl
                     << "Typing Speed: " << depertment << endl
                     << "Salary: " << salary << endl;
        }
};

int main()
{
        Employee *m = new Manager();
        (*m).getdata("Roman", "IT", 543, 4932134);
        m->putdata();
        cout << endl;
        Employee *e;
        ComputerOperator c;
        e = &c;
        e->getdata("Ojha", "AI", 547, 432123);
        e->putdata();
        return 0;
}