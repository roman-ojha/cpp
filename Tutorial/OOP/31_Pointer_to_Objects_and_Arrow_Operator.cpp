#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // c1.setdata(1,54);
    // c1.getdata();
    // (*ptr).setData(1, 54); //is exactly same as here, bracket is compolsorry because "."(dot) operator have higher precident  then the "*"(star) operator
    // (*ptr).getData(); //is as good as the previous one
    Complex *ptr = new Complex; // we can do this as well to make an object and pointer that object
    // (*ptr).setData(1, 54);
    // (*ptr).getData();
    ptr->setData(1, 54); // this is also the way to access
    ptr->getData();      // this is called as arraw operator

    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 4);
    ptr1->getData();
    (ptr1 + 1)->setData(3, 4);
    (ptr1 + 1)->getData();
    return 0;
}