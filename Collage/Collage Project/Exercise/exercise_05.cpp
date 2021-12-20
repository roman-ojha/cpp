/* 
Define a base class Shape having data member radius (int). Derive new classes called Circle and Sphere from this class. Write methods to compute the area of circle and sphere.
 */

#include <iostream>
#define PI 3.14
using namespace std;

class Shape
{
protected:
    int radius;

public:
    void setdata(int r)
    {
        radius = r;
    }
};

class Circle : public Shape
{
protected:
public:
    void printarea()
    {
        cout << "The area of the circle is=" << PI * radius * radius << endl;
    }
};

class Sphare : public Shape
{
protected:
public:
    void printarea()
    {
        cout << "the area of the sphere is= " << 4 * PI * radius * radius << endl;
    }
};

int main()
{
    Circle c;
    Sphare s;
    int radius = 5;
    c.setdata(radius);
    s.setdata(radius);
    c.printarea();
    s.printarea();
    return 0;
}