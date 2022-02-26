#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(12, 13);
    s.printData();
    return 0;
}

/*
-> It is important to distinguish between the default constructor A::A() and the default 
argument constructor A::A (int x = 0). The default argument constructor can be called 
with either one argument or no arguments. When called with no arguments, it becomes a 
default constructor. When both these forms are used in a class, it causes ambiguity for a 
statement
*/