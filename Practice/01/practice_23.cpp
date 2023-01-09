#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    // friend int calculation::sumdata(complex, complex);
    friend class calculation;
};

class calculation
{
public:
    int sumdata(complex o1, complex o2)
    {
        return o1.a + o2.a;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 4);
    c2.setdata(4, 5);
    calculation s1;
    int rec = s1.sumdata(c1, c2);
    cout << rec;
    return 0;
}