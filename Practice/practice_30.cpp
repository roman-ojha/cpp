#include <iostream>
using namespace std;

class employee
{
protected:
    int salary, ID;

public:
    void setdata(int i1, int s1)
    {
        salary = s1;
        ID = i1;
    }
    void printdata()
    {
        cout << "The salary of ID= " << ID << " Employee is= " << salary << endl;
    }
};

class programmer : public employee
{
protected:
    int emply;

public:
    void setemployee(int e)
    {

        emply = e;
    }
    void printdata()
    {
        if (emply == 1)
        {
            cout << "The salary of ID= " << ID << " Programmer is= " << salary << endl;
        }
        else if (emply == 0)
        {
            employee::printdata();
        }
        else
        {
            cout << "Invalid number, Enter Number from 0-1" << endl;
        }
    }
    void getemployee()
    {
        int emp;
        cout << "enter a number from 0-1, if you are employee of this compony then enter 0 ,if you are also a programmer then enter 1= " << endl;
        cin >> emp;
        setemployee(emp);
    }
};

int main()
{
    programmer p1;
    cout << "enter the id and the salary of the employee= ";
    int id, salary;
    cin >> id >> salary;
    p1.setdata(id, salary);
    p1.getemployee();
    p1.printdata();
    return 0;
}