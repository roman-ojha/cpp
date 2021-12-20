#include <iostream>
using namespace std;

int add(int x, int y)
{
    return (x + y);
}

float add(float x, float y)
{
    return (x + y);
}

float add(int x, float y, int z)
{
    return (x + y + z);
}

int main()
{
    int a;
    float b, c, sum;
    a = add(5, 6);
    b = add(4.5, 6);
    c = add(5, 6.5, 7);
    cout << "the sum of all number is= " << a + b + c << endl;
    return 0;
}