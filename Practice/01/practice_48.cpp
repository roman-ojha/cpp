// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int x, y;

// public:
//     Complex() {}
//     Complex(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     void display();
//     Complex operator+(Complex);
// };

// void Complex::display()
// {
//     {
//         cout << "X: " << this->x << endl
//              << "Y: " << this->y << endl;
//     }
// }

// Complex Complex::operator+(Complex c1)
// {
//     Complex temp;
//     temp.x = x + c1.x;
//     temp.y = y + c1.y;
//     return temp;
// }

// int main()
// {
//     Complex c1, c2, c3;
//     c1 = Complex(1, 2);
//     c2 = Complex(4, 5);
//     c3 = c1 + c2;
//     c3.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Number
// {
//     int x;

// public:
//     Number() {}
//     Number(int n) : x(n) {}
//     Number operator-()
//     {
//         Number n;
//         n.x = -x;
//         return n;
//     }
//     Number operator++(int)
//     {
//         Number n;
//         n.x = x++;
//         return n;
//     }
//     Number operator++()
//     {
//         Number n;
//         n.x = ++x;
//         return x;
//     }
//     void display()
//     {
//         cout << "X: " << x << endl;
//     }
// };

// int main()
// {
//     Number n1(4), n2;
//     n2 = -n1;
//     n2.display();
//     n2 = n1++;
//     n2.display();
//     n1.display();
//     n2 = ++n1;
//     n2.display();
//     n1.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Inherite
// {
//     int x, y;

// public:
//     Inherite() {}
//     Inherite(int x, int y) : x(x), y(y) {}
//     void display()
//     {
//         cout << "X: " << x << endl
//              << "Y: " << y << endl;
//     }
//     int getX()
//     {
//         return x;
//     }
//     int getY()
//     {
//         return y;
//     }
//     void setX(int x)
//     {
//         this->x = x;
//     }
//     void setY(int y)
//     {
//         this->y = y;
//     }
// };

// class Complex : public Inherite
// {
// public:
//     Complex() {}
//     Complex(int x, int y) : Inherite(x, y) {}
//     friend Complex operator+(Complex, Complex);
// };

// Complex operator+(Complex c1, Complex c2)
// {
//     Complex c;
//     int x, y;
//     x = c1.getX() + c2.getX();
//     c.setX(x);
//     y = c1.getY() + c2.getY();
//     c.setY(y);
//     return c;
// }

// int main()
// {
//     Complex c1, c2, c3;
//     c1 = Complex(1, 2);
//     c2 = Complex(3, 7);
//     c3 = c1 + c2;
//     c3.display();
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <string.h>
// using namespace std;

// class String1
// {
// private:
//     char s[10];

// public:
//     friend ostream &operator<<(ostream &, String1);
//     friend istream &operator>>(istream &, String1 &);
// };

// ostream &operator<<(ostream &dout, String1 x)
// {
//     dout << x.s << endl;
//     return cout;
// }

// istream &operator>>(istream &din, String1 &x)
// {
//     din >> x.s;
//     return cin;
// }

// int main()
// {
//     String1 s;
//     cin >> s;
//     cout << s;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Number
// {
// private:
//     int x;

// public:
//     Number() {}
//     Number(int y)
//     {
//         x = y;
//     }
//     operator int()
//     {
//         return x;
//     }
// };

// int main()
// {
//     int x;
//     Number n(10);
//     x = n;
//     cout << "X: " << x << endl;
//     return x;
// }

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void display()
//     {
//         cout << "A" << endl;
//     }
// };

// class B
// {
// public:
//     void display()
//     {
//         cout << "B" << endl;
//     }
// };

// class C : public A, public B
// {
// public:
//     void display()
//     {
//         A::display();
//         B::display();
//         cout << "C" << endl;
//     }
// };

// int main()
// {
//     C c;
//     c.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // int *a = new int[6];
//     // a[0] = 5;
//     // a[1] = 6;
//     // *(a + 2) = 7;
//     // cout << "A" << *(a) << " " << a[1] << a[2] << endl;
//     // delete[] a;
//     // int a = 5;
//     // int *ptr = &a;
//     // cout << *ptr;
//     return 0;
// }

#include <iostream>
using namespace std;

class Number
{
private:
    int x, y;

public:
    Number() {}
    Number(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Base" << endl;
    }
};

class Derived : public Number
{
public:
    Derived() : Number() {}
    Derived(int x, int y) : Number(x, y) {}
    void display()
    {
        cout << "Derived" << endl;
    }
};

int main()
{
    // Number *n = new Number[5];
    // n[0] = Number(1, 2);
    // n[1] = Number(3, 4);
    // n->display();
    // (*(n + 1)).display();
    Number n;
    Number *nptr;
    Derived d;
    Derived *dptr;
    nptr = &d;
    nptr->display();
    return 0;
}