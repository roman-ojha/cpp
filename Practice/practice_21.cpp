#include <iostream>
using namespace std;

class number
{
    int a, b, c;

public:
    int sum;
    number() {}
    number(int x, int y)
    {
        a = x;
        b = y;
    }
    number(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    int sumdata(number o1, number o2)
    {
        sum = o1.a + o1.b + o2.a + o2.b + o2.c;
        return sum;
    }
    void printdata()
    {
        cout << "the sum of the number is= " << sum << endl;
    }
};

int main()
{
    number n1, n2, n3;
    n1 = number(2, 3);
    n2 = number(3, 4, 5);
    n3.sumdata(n1, n2);
    n3.printdata();
    return 0;
}