//find the distance between two point
#include<iostream>
#include <math.h> 
using namespace std;
class distance1
{
    int x,y;
    float z;
    friend distance1 calculation(distance1 o1,distance1 o2);
    public:
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    void setdata2(float c)
    {
        z=c;
    }
    void display()
    {
        cout<<"the distance between two point is="<<z<<endl;
    }
    void displaypoint()
    {
        cout<<"the cordinate of the point is= ("<<x<<","<<y<<")"<<endl;
    }
};
distance1 calculation(distance1 o1,distance1 o2)
{
    distance1 o3;
    o3.setdata2(sqrt((o2.x-o1.x)*(o2.x-o1.x)+(o2.y-o1.y)*(o2.y-o1.y)));
    return o3;
}
int main()
{
    distance1 p1,p2,dis;
    p1.setdata(1,2);
    p1.displaypoint();
    p2.setdata(3,4);
    p2.displaypoint();
    dis=calculation(p1,p2);
    dis.display();
    return 0;
}
