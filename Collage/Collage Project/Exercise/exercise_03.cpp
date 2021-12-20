/* 
An industry seals lorry and taxi. Create a class Automobile that stores production date and price. From this class derive another two classes: Lorry, which adds weight capacity in kilogram and Taxi, which adds seat-capacity in number. Each of these classes should have member functions to get data and set data. Use userdefined constructors to initialize these objects.  
*/

#include <iostream>
using namespace std;

class Automobile
{
protected:
    int year, month, days, price;

public:
    Automobile() {}
    Automobile(int y, int m, int d, int p)
    {
        year = y;
        month = m;
        days = d;
        price = p;
    }
    void setdata();
};

class Lorry : public Automobile
{
protected:
    int capacity;

public:
    Lorry(){};
    Lorry(int y, int m, int d, int p, int c) : Automobile(y, m, d, p)
    {
        capacity = c;
    }
    void setdata();
};

class Taxi : public Automobile
{
protected:
    int seat_capacity;

public:
    Taxi() {}
    Taxi(int y, int m, int d, int p, int s) : Automobile(y, m, d, p)
    {
        seat_capacity = s;
    }
    void setdata();
};

void Automobile::setdata()
{
    cout << "The production data of the product is= " << year << "/" << month << "/" << days << endl;
    cout << "The price of the product is= " << price << endl;
}
void Lorry::setdata()
{
    Automobile::setdata();
    cout << "The capacity of the lorry is= " << capacity << " kilogram" << endl;
}
void Taxi::setdata()
{
    Automobile::setdata();
    cout << "the seat capacity of the texi is= " << seat_capacity << endl;
}

int main()
{
    Lorry l(2012, 10, 15, 1500000, 1000);
    Taxi t(2015, 5, 23, 400000, 8);
    l.setdata();
    t.setdata();
    return 0;
}