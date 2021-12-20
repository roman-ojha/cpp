#include <iostream>
#define PI 3.14
using namespace std;

class shape
{
public:
    int radius, length, breadth, height, a, b;
    virtual void setCircle(int r) {}
    virtual void setrectangle(int, int) {}
    virtual void setTrapezoid(int, int, int) {}
    virtual float area() { return 0; }
    virtual void display(int a) = 0;
};

class circle : public shape
{
public:
    void setCircle(int r)
    {
        radius = r;
    }
    float area()
    {
        float a;
        a = PI * radius * radius;
        return a;
    }
    void display(int a)
    {
        cout << "The area of the circle is " << a << endl;
    }
};

class Rectangle : public shape
{
public:
    void setrectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        float a;
        a = length * breadth;
        return a;
    }
    void display(int a)
    {
        cout << "The area of the rectangle is " << a << endl;
    }
};

class trapezoid : public shape
{
public:
    void setTrapezoid(int h, int x, int y)
    {
        height = h;
        a = x;
        b = y;
    }
    float area()
    {
        float a;
        a = 0.5 * height * (a + b);
        return a;
    }
    void display(int a)
    {
        cout << "The area of the trapezoid is " << a << endl;
    }
};
int main()
{
    shape *ptr;
    circle c;
    float a;
    ptr = &c;
    ptr->setCircle(4);
    a = ptr->area();
    ptr->display(a);
    Rectangle r;
    ptr = &r;
    ptr->setrectangle(1, 4);
    a = ptr->area();
    ptr->display(a);
    trapezoid t;
    ptr = &t;
    ptr->setTrapezoid(7, 4, 5);
    a = ptr->area();
    ptr->display(a);
    return 0;
}