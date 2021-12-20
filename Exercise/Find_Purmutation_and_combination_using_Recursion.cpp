#include <iostream>
using namespace std;

float Combination(float n, float r)
{
    if (r == 0)
    {
        return 1;
    }
    else
    {
        return (n / r) * Combination(n - 1, r - 1);
    }
}

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}

int main()
{
    float n, r;
    cout << "Enter the value of n ";
    cin >> n;
    cout << "Enter the vlaue of r ";
    cin >> r;
    float per, com;
    per = fact(n) / fact(n - r);
    com = per / fact(r);
    cout << "The permutation of the given number is " << per << endl;
    cout << "The combination of the given number is " << com << endl;
    return 0;
}