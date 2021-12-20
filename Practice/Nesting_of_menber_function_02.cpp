#include<iostream>
using namespace std;
class square
{
    int x,y;
    public:
    int solution;
    void setdata(int a,int b);
    void displaydata();
    int calculation();
    void before();
};
void square::setdata(int a,int b)
{
    x=a;
    y=b;
}
int square::calculation()
{
    before();
    solution=(x+y)*(x+y);
    return solution;
}
void square::displaydata()
{
    cout<<"the solution of (x+y)^2 is= "<<solution<<endl;
}
void square::before()
{
    cout<<"the number of X and Y before calculation is= "<<x<<" and "<<y<<endl;
}
int main()
{
    square s1;
    s1.setdata(4,5);
    s1.calculation();
    s1.displaydata();
    return 0;
}