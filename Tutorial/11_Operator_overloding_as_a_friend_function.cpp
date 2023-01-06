// binary Operator overloding as a friend function

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
    void printdata()
    {
        cout << "a= " << a << "b= " << b << endl;
    }
    friend complex operator+(complex, complex);
};

complex operator+(complex o1, complex o2)
{
    // here we know that friend function is not member of Class so we don't have a concept of 'Color object'
    // so because of that we can't call friend function with object meand we have to pass both object as an argument
    complex temp;
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}

int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 4);
    c2.setdata(5, 6);
    c3 = c1 + c2; //c3=operator+(c1,c2)
    // if we want to use a operator overloading as a friend function then we have to
    // put one more argument compare to the binary operator overloading
    c3.printdata();
    return 0;
}