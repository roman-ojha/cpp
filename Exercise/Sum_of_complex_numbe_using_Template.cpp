#include <iostream>
using namespace std;

template <class T1, class T2>
class complex
{

public:
    T1 a;
    T2 b;
    complex() {}
    complex(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "A=" << a << " B=" << b << endl;
    }
    void sum(complex<int, float> o1, complex<float, double> o2)
    {
        this->a = o1.a + o2.a;
        this->b = o1.b + o2.b;
    }
};

int main()
{
    complex<int, float> c1(1, 2.3);
    complex<float, double> c2(3.2, 4.3);
    complex<float, float> c3;
    c3.sum(c1, c2);
    c3.display();
    // NOTE:: we can also pass class in template like int,float etc..
    return 0;
}