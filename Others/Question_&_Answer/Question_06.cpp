/*
->  Imagine a college hires some lecturers. Some lecturers are paid in period basis, 
while others are paid in month basis. Create a class called lecturer that stores the 
ID, and the name of lecturers. From this class derive two classes: PartTime, 
which adds payperhr (type float); and FullTime, which adds paypermonth (type 
float). Each of these three classes should have a readdata() function to get its 
data from the user, and a printdata() function to display its data.
Write a main() program to test the FullTime and PartTime classes by 
creating instances of them, asking the user to fill in their data with readdata(), 
and then displaying the data with printdata().
*/

#include <iostream>
using namespace std;

class Lecturer
{
    int id;
    char name[30];

public:
    void readdata()
    {
        cout << "Enter Detail: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
    }
    void printdata()
    {
        cout << "Entered Detail: " << endl
             << "Name: " << name << endl
             << "ID: " << id << endl;
    }
};

class PartTime : public Lecturer
{
    float payperhr;

public:
    void readdata()
    {
        cout << "PayPerHour Lacturer" << endl;
        Lecturer::readdata();
        cout << "PayPerHour: ";
        cin >> payperhr;
    }
    void printdata()
    {
        cout << "PayPerHour Lacturer" << endl;
        Lecturer::printdata();
        cout << "PayPerHour: " << payperhr << endl;
    }
};

class FullTime : public Lecturer
{
    float paypermonth;

public:
    void readdata()
    {
        cout << "PayPerMonth Lacturer" << endl;
        Lecturer::readdata();
        cout << "PayPerMonth: ";
        cin >> paypermonth;
    }
    void printdata()
    {
        cout << "PayPerMonth Lacturer" << endl;
        Lecturer::printdata();
        cout << "PayPerMonth: " << paypermonth << endl;
    }
};

int main()
{
    PartTime l1;
    FullTime l2;
    l1.readdata();
    l2.readdata();
    l1.printdata();
    l2.printdata();
    return 0;
}