#include <iostream>
using namespace std;

class number
{
    int a;

public:
    void setdata()
    {
        cin >> a;
    }
    void printdata()
    {
        cout << a << ",";
    }
};

int main()
{
    number n1[10];
    cout << "enter 10 number= " << endl;
    int i;
    for (i = 0; i < 10; i++)
    {
        n1[i].setdata();
    }

    cout << "the number that you type is= ";
    for (i = 0; i < 10; i++)
    {
        n1[i].printdata();
    }
    cout << endl;
    return 0;
}