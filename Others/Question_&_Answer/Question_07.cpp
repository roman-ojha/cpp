/*
->  Define a base class Shape having data member radius (int). Derive new classes 
called Circle and Sphere from this class. Write methods to compute the area of 
circle and sphere.
*/

#include <iostream>
using namespace std;
#define PI 3.14

class Shape
{
    int radius;

public:
    Shape() {}
    Shape(int radius) : radius(radius) {}
    virtual float area() = 0;
    int setRadius()
    {
        return radius;
    }
};

class Circle : public Shape
{
public:
    Circle() {}
    Circle(int radius) : Shape(radius) {}
    float area()
    {
        float a;
        a = PI * setRadius() * setRadius();
        return a;
    }
};

class Sphere : public Shape
{
public:
    Sphere(int radius) : Shape(radius) {}
    Sphere() {}
    float area()
    {
        float a;
        a = 4 * PI * setRadius() * setRadius();
        return a;
    }
};

int main()
{
    Circle c(5);
    Sphere s(10);
    float circleArea, sphereArea;
    circleArea = c.area();
    sphereArea = s.area();
    cout << "Area of Circle having Radius 5 is: " << circleArea << endl;
    cout << "Area of Sphere having Radius 10 is: " << sphereArea << endl;
    return 0;
}
