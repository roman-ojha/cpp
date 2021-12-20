/*
-> Write a program to demonstrate class type to casic type conversion. Give proper inputs like hr,min for a time obnject and find the total duration in minutes. and also use the insertion and extration operation overloading
*/

#include <iostream>
using namespace std;

class Time
{
    int minute, hour;

public:
    Time() {}
    // Time(int minute, int hour) : minute(minute), hour(hour) {}
    operator int()
    {
        int m;
        m = hour * 60 + minute;
        return m;
    }
    friend istream &operator>>(istream &, Time &);
    friend ostream &operator<<(ostream &, Time);
};

istream &operator>>(istream &tin, Time &t)
{
    cout << "Enter minute and hour: ";
    tin >> t.hour >> t.minute;
    return cin;
}

ostream &operator<<(ostream &tout, Time t)
{
    cout << "Hour: " << t.hour << endl
         << "Minute: " << t.minute << endl;
    return tout;
}

int main()
{
    Time t;
    cin >> t;
    cout << t;
    int minute;
    minute = t;
    cout << "Total minute: " << minute << endl;
    return 0;
}