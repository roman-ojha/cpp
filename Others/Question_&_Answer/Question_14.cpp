/*
-> Write a program to demonstrate basic type to class type conversion take input in minutes and convert it into HH:MM formate of a TIME class.
*/

#include <iostream>
using namespace std;

class Time
{
    int minute, hour;

public:
    Time() {}
    Time(int m)
    {
        hour = m / 60;
        minute = m % 60;
    }
    void display()
    {
        cout << "Hour: " << hour << endl
             << "Minute: " << minute << endl;
    }
};

int main()
{
    Time t;
    int minute;
    cout << "Enter Time in minute: ";
    cin >> minute;
    t = minute;
    t.display();
    return 0;
}