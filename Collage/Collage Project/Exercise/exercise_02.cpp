/* 
Imagine a college hires some lecturers. Some lecturers are paid in period basis, while others are paid in month basis. Create a class called lecturer that stores the ID, and the name of lecturers. From this class derive two classes: PartTime, which adds payperhr (type float); and FullTime, which adds paypermonth (type float). Each of these three classes should have a readdata() function to get its data from the user, and a printdata() function to display its data.
 */

#include <iostream>
#include <string>
using namespace std;

class lecturers
{
protected:
    int ID;
    string name;

public:
    void readdata()
    {
        // ID = i;
        // name = n;
        cout << "Enter the id of the lecturer= ";
        cin >> ID;
        cout << "Enter the name of the lecturer= ";
        cin >> name;
    }
    void printdata()
    {
        cout << "The name of the lacturers is= " << name
             << " and the id of the lacturers is= " << ID << endl;
    }
};

class PartTime : public lecturers
{
protected:
    float salary_per_h;

public:
    void readdata()
    {
        lecturers::readdata();
        cout << "Enter the salary of the lecturer per hours= ";
        cin >> salary_per_h;
    }
    void printdata()
    {
        lecturers::printdata();
        cout << "The salary of the part time lecturer is= " << salary_per_h << endl;
    }
};

class FullTime : public lecturers
{
protected:
    float salary_per_m;

public:
    void readdata()
    {
        lecturers::readdata();
        cout << "Enter the salary of the lecturer per month= ";
        cin >> salary_per_m;
    }
    void printdata()
    {
        lecturers::printdata();
        cout << "The salary of the full time lecturer is= " << salary_per_m << endl;
    }
};

int main()
{
    PartTime p;
    FullTime f;
    int i;
    cout << "Enter 1 if you are a part time lecturer or Enter 2 if you are a full time lecturer=";
    cin >> i;
    if (i == 1)
    {
        p.readdata();
        p.printdata();
    }
    else if (i == 2)
    {
        f.readdata();
        f.printdata();
    }
    else
    {
        cout << "Invalid number please enter 1 or 2" << endl;
    }
    return 0;
}