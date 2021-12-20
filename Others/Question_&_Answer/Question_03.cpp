/*
->  Create a class called Length that has data members meter and centimeter. Overload + operator to add two objects of class Length. (For example L3 = L1 + L2). Also facilitate the operations like L4 = L1 + 5 and L5 = 5 + L4 where L1, L2, L3, L4 and L5 are objects of class Length. Use constructors and member functions to initialize and display values
*/

#include <iostream>
using namespace std;

class Length
{
    int meter, centimeter;

public:
    Length() {}
    Length(int meter, int centimeter)
    {
        this->meter = meter;
        this->centimeter = centimeter;
    }
    void displayLenght()
    {
        cout << "Meter: " << meter << endl
             << "Centimeter: " << centimeter << endl;
    }
    Length operator+(Length);
    Length operator+(int);
    friend Length operator+(int, Length);
};

Length Length::operator+(Length l)
{
    Length temp;
    temp.meter = meter + l.meter;
    temp.centimeter = centimeter + l.centimeter;
    temp.meter = temp.meter + (temp.centimeter / 100);
    temp.centimeter = temp.centimeter % 100;
    return temp;
}

Length Length::operator+(int n)
{
    Length temp;
    temp.meter = meter + n;
    temp.centimeter = centimeter;
    return temp;
}

Length operator+(int n, Length l)
{
    Length temp;
    temp.meter = l.meter + n;
    temp.centimeter = l.centimeter;
    return temp;
}

int main()
{
    Length L1(10, 30), L2(3, 86), L3, L4, L5;
    L3 = L1 + L2;
    L3.displayLenght();
    L4 = L1 + 5;
    L4.displayLenght();
    L5 = 5 + L4;
    L5.displayLenght();
    return 0;
}