#include <iostream>
using namespace std;

class complex
{
    int x, y;

public:
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
    friend istream &operator>>(istream &, complex &);
    friend ostream &operator<<(ostream &, complex);
};

istream &operator>>(istream &x, complex &c1)
{
    x >> c1.x >> c1.y;
    return cin;
}

ostream &operator<<(ostream &y, complex c2)
{
    y << "the number is = " << c2.x << "+" << c2.y << endl;
    return cout;
}

int main()
{
    complex c1, c2;
    cin >> c1;
    cout << c1;
    return 0;
}