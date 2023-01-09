#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;
    static int count;

public:
    complex() {}
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    friend complex arraysum(complex, complex);
    void printdata();
    complex sum(complex o3, complex o4)
    {
        complex temp;
        temp.a = o3.a + o4.a + count;
        count++;
        temp.b = o3.b + o4.b + count;
        return temp;
    }
    static void inctement()
    {
        count++;
    }
};

complex arraysum(complex o1, complex o2)
{
    complex temp;
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}

void complex::printdata()
{
    cout << "the sum of the complex number is= (" << a << "+" << b << ")"
         << " count= " << count << endl;
    // inctement();
}

int complex::count = 1;

int main()
{
    complex c1[2], c2, c3, c4;
    c1[0].setdata(7, 5);
    c1[1].setdata(5, 3);
    c3 = arraysum(c1[0], c1[1]);
    c3.printdata();
    complex::inctement();
    c2.setdata(5, 3);
    c4.sum(c3, c2);
    c4.printdata();
    return 0;
}