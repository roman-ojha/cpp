/*
->  Define a class to hold rectangular co-ordinates, i.e. x and y co-ordinates. Let P1 
and P2 be the objects of this class where P1 is initialized to (20, 30). Facilitate the 
operation P2 = P1++ in such a way that the value in P2 is (21, 31) afterward

-> Doing is using template
*/

#include <iostream>
using namespace std;

template <class T1, class T2>
class Co_ordinate
{
    T1 x;
    T2 y;

public:
    Co_ordinate() {}
    Co_ordinate(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout << "X: " << x << endl
             << "Y: " << y << endl;
    }
    friend Co_ordinate<int, int> operator++(Co_ordinate<int, int>, int);
    friend Co_ordinate<float, int> operator++(Co_ordinate<float, int>, int);
};

Co_ordinate<int, int> operator++(Co_ordinate<int, int> c, int)
{
    Co_ordinate<int, int> temp;
    temp.x = c.x + 1;
    temp.y = c.y + 1;
    return temp;
}

Co_ordinate<float, int> operator++(Co_ordinate<float, int> c, int)
{
    Co_ordinate<float, int> temp;
    temp.x = c.x + 1;
    temp.y = c.y + 1;
    return temp;
}

int main()
{
    Co_ordinate<int, int> P1(20, 30), P2;
    P2 = P1++;
    P2.display();
    Co_ordinate<float, int> P3(50.5, 32), P4;
    P4 = P3++;
    P4.display();
    return 0;
}