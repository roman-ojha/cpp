// copy constructor

#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {}
    number(int x)
    {
        a = x;
    }
    void printdata()
    {
        cout << "the number= " << a << endl;
    }
    void getdata()
    {
        cout << "enter the number= ";
        cin >> a;
    }
    number(number &n)
    {
        a = n.a;
    }
};

int main()
{
    number n1(5), n2;
    n1.printdata();
    n2.getdata();
    n2.printdata();
    number n3(n2);
    n3.printdata();
    number n4 = n2;
    n4.printdata();
    return 0;
}