// constructor overloading
#include <iostream>
using namespace std;

class point
{
    int x, y, z;

public:
    int d, s;
    point() {}
    point(int, int);
    point(int, int, int);
    void printdistance();
    void printsum();
    // point pointcalculation(point, point);
    point sumcalculation(point, point);
    // int sum(point p1)
    // {
    //     s = p1.x + p1.y + p1.z;
    // }
};

point::point(int a, int b)
{
    x = a;
    y = b;
}

point::point(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void point::printdistance()
{
    cout << "the distance between two point is" << d << endl;
}

void point::printsum()
{
    cout << "the sum =" << x << "," << y << "," << z << endl;
}

// point point::pointcalculation(point x1, point y1)
// {
// }

point point::sumcalculation(point sum1, point sum2)
{
    point temp;
    temp.x = sum1.x + sum2.x;
    temp.y = sum1.y + sum2.y;
    temp.z = sum1.z + sum2.z;
    return temp;
}

int main()
{
    point p1(1, 2), p2(1, 3), p3;
    point s1(1, 2, 3), s2(4, 5, 6), s3;
    // p3.pointcalculation(p1, p2);
    s3.sumcalculation(s1, s2);
    // s3.sum(s3);
    s3.printsum();
    return 0;
}