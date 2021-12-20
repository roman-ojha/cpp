/*Create a class named point with arritbutes x co-ordinate, y-cordinates, create another class called Vector that has atributes point start and point End.
Wap to find distance between these two point using distance formula.*/

#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x, y;

public:
    int SetX()
    {
        return x;
    }
    int SetY()
    {
        return y;
    }
};

class Vector
{
    Point start, end;

public:
    Point SetStart()
    {
        return start;
    }
    Point SetEnd()
    {
        return end;
    }
    float distance(int x1, int y1, int x2, int y2)
    {
        float dis;
        dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        return dis;
    }
};

int main()
{
    Vector v;
    cout << "Enter X1";
    int x1, y1, x2, y2;
    float dist;
    x1 = v.SetStart().SetX();
    y1 = v.SetStart().SetX();
    y1 = v.SetEnd().SetY();
    y2 = v.SetEnd().SetY();
    cin >> x1;
    cout << "Enter Y1";
    cin >> y1;
    cout << "Enter X2";
    cin >> x2;
    cout << "Enter Y2";
    cin >> y2;
    dist = v.distance(x1, y1, x2, y2);
    cout << "The distance of the two point is:" << dist << endl;
    return 0;
}