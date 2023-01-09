#include <iostream>
#include <stdio.h>
using namespace std;

class Student
{
protected:
    char name[20];
    int roll_no;

public:
    void getStudent()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter roll no.: ";
        cin >> roll_no;
    }
    void displayStudent()
    {
        cout << "Name: " << name
             << "Roll No.: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    int math, physics;

public:
    void getTest()
    {
        cout << "Enter Marks:" << endl
             << "Math: ";
        cin >> math;
        cout << "Physics: ";
        cin >> physics;
    }
    void displayTest()
    {
        cout << "Math: " << math
             << "Physics: " << physics << endl;
    }
};

class Sport : virtual public Student
{
protected:
    int score;

public:
    void getSport()
    {
        cout << "Enter Sport score";
        cin >> score;
    }
    void displaySport()
    {
        cout << "Sport Score: " << score << endl;
    }
};

class Result : public Test, public Sport
{
    int total;

public:
    void displayResult()
    {
        cout << "Total: " << math + physics + score << endl;
    }
};

int main()
{
    Result r;
    r.getStudent();
    r.getTest();
    r.getSport();
    r.displayStudent();
    r.displayTest();
    r.displaySport();
    r.displayResult();
    return 0;
}