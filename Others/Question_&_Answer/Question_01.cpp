/*
-> Write a program to overload += operator. (You can overload this operator using 
Distance class as d1 += d2)
*/

#include <iostream>
using namespace std;

class Distance
{
    int meter, centemeter;

public:
    Distance(int m, int c)
    {
        meter = m;
        centemeter = c;
    }
    void display()
    {
        cout << "Meter: " << meter << endl
             << "Centemeter: " << centemeter << endl;
    }
    void operator+=(Distance d)
    {
        meter += d.meter;
        centemeter += d.centemeter;
        meter = meter + (centemeter / 100);
        centemeter = centemeter % 100;
    }
};

int main()
{
    Distance d1(10, 345), d2(4, 567);
    d1 += d2;
    d1.display();
    return 0;
}