#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    friend complex sumcomplex(complex o1,complex o2);
    void printdata()
    {
        cout<<"your number is="<<x<<"+"<<y<<"i"<<endl;
    }
    void printsum()
    {
        cout<<"the sum of complex number is="<<x<<"+"<<y<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setdata(o1.x+o2.x,o1.y+o2.y);
    return o3;
}
int main()
{
    complex c1,c2,sum;
    c1.setdata(1,2);
    c1.printdata();
    c2.setdata(3,4);
    c2.printdata();
    sum = sumcomplex(c1,c2);
    sum.printsum();
    return 0;
}