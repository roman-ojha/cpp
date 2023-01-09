#include <iostream>
using namespace std;

class number
{
    int a, b, c;
    static int count;

public:
    number() {}
    number(int x, int y = 5, int z = 6)
    {
        a = x;
        b = y;
        c = z;
    }

    void printdata()
    {
        cout << "the value n" << count << " is= " << a << "," << b << "," << c << endl;
        count++;
    }
};

int number::count = 1;

int main()
{
    number n1, n2, n3(1, 2, 4);
    n1 = number(5);
    n2 = number(n1);
    n1.printdata();
    n2.printdata();
    n3.printdata();
    return 0;
}