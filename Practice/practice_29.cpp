#include <iostream>
using namespace std;

class number1
{
protected:
    int x;
};

class number2
{
protected:
    int y;
};

class number3 : public number1, public number2
{
public:
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void printdata()
    {
        cout << "the given number is= " << x << " and " << y << endl;
    }
};

int main()
{
    number3 n3;
    n3.setdata(3, 6);
    n3.printdata();
    return 0;
}