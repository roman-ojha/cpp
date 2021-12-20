/*
Write a protram to demonstrate basic type to class type conversion take input in minutes and convert it into HH:MM format of a TIME class.
*/
#include <iostream>
using namespace std;

class Time
{
    int hour, minute;

public:
    Time() {}
    Time(int m)
    {
        hour = m / 60;
        minute = m % 60;
    }
    void printdata()
    {
        cout << "Time: " << hour << "h:" << minute << "m" << endl;
    }
};

int main()
{
    Time t;
    int x;
    cout << "Enter time in terms of minute";
    cin >> x;
    t = x;
    t.printdata();
    return 0;
}