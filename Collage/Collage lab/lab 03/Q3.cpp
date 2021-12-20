/*
Write a program which overloads the binary operators (+,-) using member functions for two objects of class TIME in formate (HH:MM:SS)
*/

#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void setdata(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void printdata()
    {
        if (hour < 0)
        {
            cout << "Time can not be in negetive" << endl;
        }
        else
        {
            cout << "Time after calculation:" << hour << "h:" << minute << "m:" << second << "s" << endl;
        }
    }
    Time operator-(Time t1)
    {
        Time t;
        t.hour = hour - t1.hour;
        t.minute = minute - t1.minute;
        t.second = second - t1.second;
        while (t.second < 0)
        {
            t.minute--;
            t.second = t.second + 60;
        }
        while (t.minute < 0)
        {
            t.hour--;
            t.minute = t.minute + 60;
        }
        return t;
    }
    Time operator+(Time t2)
    {
        Time t;
        t.hour = hour + t2.hour;
        t.minute = minute + t2.minute;
        t.second = second + t2.second;
        int mi, hr;
        mi = t.second / 60;
        t.second = t.second % 60;
        t.minute = t.minute + mi;
        hr = t.minute / 60;
        t.minute + t.minute % 60;
        t.hour = t.hour + hr;
        return t;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.setdata(10, 10, 40);
    t2.setdata(6, 100, 10);
    cout << "Time after using binary -" << endl;
    t3 = t1 - t2;
    t3.printdata();
    cout << "Time after using binary+" << endl;
    t3 = t1 + t2;
    t3.printdata();
    return 0;
}