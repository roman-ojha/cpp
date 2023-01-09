#include <iostream>
#include <string.h>
using namespace std;

class Vehicle
{
    string name;
    int mileage;
    float price;
    public:
    string setName()
    {
        return name;
    }
    Vehicle(){}
    Vehicle(string n,int m,float p)
    {
        name =n;
        mileage =m;
        price =p;
    }
    void printdata()
    {
        cout<<"The name of the vehicle is "<<name<<endl
            <<"The mileage of the vehicle is "<<mileage<<endl
            <<"The price of the vehicle is "<<price<<endl; 
    }
};

class Bus : virtual public Vehicle
{
    int capacity;
    public:
    Bus(){}
    Bus(int  c)
    {
        capacity=c;
    }
    void printdata()
    {
        cout<<"the capacity of the "<<setName()<<" is "<<capacity<<endl;
    }
};

class truck : virtual public Vehicle
{
    string color;
    public:
    truck(){}
    truck(string col)
    {
        color=col;
    }
    void printdata()
    {
        cout<<"The color of the "<<setName()<<" is "<<color<<endl;
    }
};

class tire :public Bus ,public truck
{
    int no_of_tire;
    public:
    tire(){}
    tire(int  c,string col,string n,int m,float p,int t):Bus(c),truck(col),Vehicle(n,m,p)
    {
        no_of_tire=t;
    }
    void printdata()
    {
        Vehicle::printdata();
        Bus::printdata();
        truck::printdata();
        cout<<"The number of tire of"<<setName()<<" is "<<no_of_tire<<endl;
    }
};

int main()
{
    tire t(40,"Red","Maruti",20,2000000,6);
    t.printdata();
    return 0;
}