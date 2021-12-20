/*
-> Write a conversion routine in c++ that can convert user-defined data distance to 
basic data float. Assume that the class distance contains two data members (feet 
(integer type) and inch (floating point type). NOTE 1-meter = 3.33 feet and 1 feet 
= 12 inches)

*/

#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inch;

public:
    Distance(int feet, float inch)
    {
        this->feet = feet;
        this->inch = inch;
    }
    operator float()
    {
        float meter;
        meter = (feet * 3.33) + ((inch / 12) * 3.33);
        return meter;
    }
};

int main()
{
    Distance d(10, 24);
    float meter = d;
    cout << "Distance: " << meter << endl;
    return 0;
}