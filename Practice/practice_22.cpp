#include <iostream>
using namespace std;

class number;

class sum
{
public:
    int sumdata(number);
};

class number
{
private:
    int a, b, c;

public:
    void setdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    friend int sum::sumdata(number);
    // friend class sum;
};

int sum::sumdata(number n)
{
    int s;
    s = n.a + n.b + n.c;
    return s;
}

int main()
{
    number n1;
    n1.setdata(1, 2, 3);
    sum s1;
    int res = s1.sumdata(n1);
    cout << "the sum of the number is= " << res << endl;
    return 0;
}