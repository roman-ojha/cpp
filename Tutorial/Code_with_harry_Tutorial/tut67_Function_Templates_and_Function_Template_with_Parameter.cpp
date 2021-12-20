#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float aveg = (a + b) / 2;
//     return aveg;
// }

// float funcAverage2(int a, float b)
// {
//     float aveg = (a + b) / 2;
//     return aveg;
// }

// this is the way to make a funciton which do the same operation but have a different data type so which does not follow the DRY principle so,
// we can use the function template to make a single function and have a different data type operation

// Funciton Template

template <class T1, class T2>
T2 funcAverage2(T1 a, T2 b)
{
    T2 aveg = (a + b) / 2;
    return aveg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    a = funcAverage2(5, 2.5);
    cout << a << endl;
    // this is also the way we can do
    // now another method:
    a = funcAverage2<int, float>(6, 2.5);
    cout << a << endl;
    int x = a, y = 6;
    swapp(x, y);
    cout << "X=" << x << " Y=" << y << endl;
    return 0;
}