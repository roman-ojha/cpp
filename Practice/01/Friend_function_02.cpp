#include<iostream>
using namespace std;
class Y;
class X
{
    int num1;
    friend void exchange(X &,Y &);
    public:
    void setdata(int n1)
    {
        num1=n1;
    }
    void display()
    {
        cout<<num1<<endl;
    }
};
class Y
{
    int num2;
    friend void exchange(X &,Y &);
    public:
    void setdata(int n2)
    {
        num2=n2;
    }
    void display()
    {
        cout<<num2<<endl;
    }
};
void exchange(X& o1,Y& o2)
{
    int temp;
    temp=o1.num1;
    o1.num1=o2.num2;
    o2.num2=temp;
}

int main()
{
    X x;
    x.setdata(50);
    Y y;
    y.setdata(100);
    exchange(x,y);

    cout<<"the value of X after exchange=";
    x.display();
    cout<<"the value of Y after exchange=";
    y.display();
    return 0;
}