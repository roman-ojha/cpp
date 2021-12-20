/*
    Write a oop to create a class named "Time" With data objects and member functions to add two member functions to add two times and display to resultant time.
*/

#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    Time() {}
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void printTime()
    {
        cout << "Time:" << hour << "h:" << minute << "m:" << second << "s" << endl;
    }
    void TotalTime(Time t1, Time t2)
    {
        int s, m;
        hour = t1.hour + t2.hour;
        minute = t1.minute + t2.minute;
        second = t1.second + t2.second;
        s = second / 60;
        second = second % 60;
        minute = minute + s;
        m = minute / 60;
        minute = minute % 60;
        hour = hour + m;
    }
};

int main()
{
    Time t1, t2, t3;
    int h, m, s;
    cout << "Enter the Time for first input:" << endl;
    cout << "Hour:";
    cin >> h;
    cout << "Minute:";
    cin >> m;
    cout << "Second:";
    cin >> s;
    t1 = Time(h, m, s);
    cout << "Enter the Time for Second input:" << endl;
    cout << "Hour:";
    cin >> h;
    cout << "Minute:";
    cin >> m;
    cout << "Second:";
    cin >> s;
    t2 = Time(h, m, s);
    cout << "First ";
    t1.printTime();
    cout << "Seocnd ";
    t2.printTime();
    t3.TotalTime(t1, t2);
    cout << "Total ";
    t3.printTime();
    return 0;
}