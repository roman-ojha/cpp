#include <iostream>
using namespace std;

class compare
{
    int feet;
    float inch;

public:
    compare()
    {
    }
    compare(int f, float i)
    {
        feet = f;
        inch = i;
    }
    void display()
    {
        cout << feet << inch;
    }
    int operator==(compare);
};
int compare::operator==(compare e)
{
    if (feet == e.feet && inch == e.inch)
        return 1;
    else
        return 0;
}
main()
{
    compare e1(6, 4.4);
    compare e2(6, 4.2);
    if (e1 == e2)
        cout << "Both are of same length";
    else
        cout << "Not same";
    return 0;
}