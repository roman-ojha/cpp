// unary Operator overloding as a friend function

#include <iostream>
using namespace std;

class unary
{
private:
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }
    void printdata()
    {
        cout << "the value after overloading= " << a << endl;
    }
    friend unary operator++(unary, int);
};

unary operator++(unary b, int)
{
    unary temp;
    temp.a = b.a + 1;
    return temp;
}

int main()
{
    unary u1, u2;
    u1.setdata(4);
    u2 = u1++;
    u2.printdata();
    return 0;
}