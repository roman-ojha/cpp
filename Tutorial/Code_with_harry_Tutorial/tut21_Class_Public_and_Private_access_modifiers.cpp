#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int x,int y,int z);// Declaration
        void getdata(); //Declaration
};

void Employee::setdata(int x,int y,int z) //Defination
{
    a=x;
    b=y;
    c=z;
}

void Employee::getdata() //Defination
{
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
}

int main()
{
    Employee Roman;
    Roman.d=4,Roman.e=5;
    Roman.setdata(1,2,3);
    Roman.getdata();
    return 0;
}