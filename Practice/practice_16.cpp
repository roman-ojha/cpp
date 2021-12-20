#include <iostream>
#include <string>
using namespace std;

class employee
{
    string name;
    int employee_no;
    int salary;

public:
    void setdata(string x, int y, int z)
    {
        name = z;
        employee_no = y;
        salary = z;
    }

    void getdata()
    {

        cout << "enter the employee:" << endl;
        cout << "\nname= ";
        cin >> name;
        cout << "\nemployee no. from 1-1000 =";
        cin >> employee_no;
    }
    void checksalary()
    {
        if (employee_no < 101)
        {
            cout << "your salary is= 10000" << endl;
        }
        else if (employee_no<501 & employee_no> 100)
        {
            cout << "your salary is=50000" << endl;
        }
        else
        {
            cout << "your salary is=100000" << endl;
        }
    }
    void printdata()
    {
        cout << "you name is= " << name << "\nyour employee number is= " << employee_no << endl;
    }
};

int main()
{
    employee e[10], no[10], s[10];
    string n1;
    int no1, s1;
    int i;
    int maxe;
    cout << "enter the number that how many no. of employee imfomation you want= ";
    cin >> maxe;
    for (i = 0; i < maxe; i++)
    {
        e[i].getdata();
        e[i].setdata(n1, no1, s1);
    }
    for (i = 0; i < maxe; i++)
    {

        e[i].printdata();
        e[i].checksalary();
    }
    return 0;
}