// #include <iostream>
// using namespace std;

// class Number
// {
//     int a;

// public:
//     Number() {}
//     Number(int a)
//     {
//         this->a = a;
//     }
//     Number operator-()
//     {
//         Number temp;
//         temp.a = -a;
//         return temp;
//     }
//     void display();
// };

// void Number::display()
// {
//     cout << "The number is: " << this->a << endl;
// }

// int main()
// {
//     Number n1(5);
//     n1 = -n1;
//     n1.display();
//     return 0;
// }

// #include <iostream>
// #include <stdio.h>
// using namespace std;

// class Complex
// {
// private:
//     int r, i;

// public:
//     Complex() {}
//     Complex(int, int);
//     Complex operator+(Complex);
//     void display();
// };

// Complex::Complex(int r, int i)
// {
//     this->r = r;
//     this->i = i;
// }

// Complex Complex::operator+(Complex c)
// {
//     Complex temp;
//     temp.r = r + c.r;
//     temp.i = i + c.i;
//     return temp;
// }

// void Complex::display()
// {
//     cout << "A: " << r << endl
//          << "B: " << i << endl;
// }

// int main()
// {
//     Complex C[3];
//     C[1] = Complex(1, 2);
//     C[2] = Complex(3, 4);
//     C[3] = C[1] + C[2];
//     C[3].display();
//     return 0;
// }

// #include <iostream>
// #include <stdio.h>
// #include <string>
// using namespace std;

// int main()
// {
//     int a = 1;
//     float b = 2.1;
//     float(a) = b;
//     cout << a << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Result
// {
//     float math, physic, chemistary, biology, english, total, percentage;
//     friend float calculatePercentage(Result r);

// public:
//     Result() {}
//     Result(float m, float ph, float ch, float bi, float en)
//     {
//         math = m;
//         physic = ph;
//         chemistary = ch;
//         biology = bi;
//         english = en;
//         total = m + ph + ch + bi + en;
//     }
//     void display()
//     {
//         cout << math << endl
//              << physic << endl
//              << chemistary << endl
//              << biology << endl
//              << english << endl
//              << total << endl;
//     }
// };

// float calculatePercentage(Result r)
// {
//     float per;
//     per = (r.total / 500) * 100;
//     return per;
// }

// int main()
// {
//     float percentage;
//     Result r(100, 80, 70, 90, 61);
//     calculatePercentage(r);
//     percentage = calculatePercentage(r);
//     r.display();
//     cout << percentage << " %" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Base
// {
//     int baseNum;

// public:
//     Base() {}
//     Base(int num)
//     {
//         baseNum = num;
//         cout << "Base Constructor " << baseNum << endl;
//     }
//     ~Base()
//     {
//         cout << "Base destructor" << endl;
//     }
// };

// class Derived1 : public virtual Base
// {
//     int derived1Num;

// public:
//     Derived1() {}
//     Derived1(int num)
//     {
//         derived1Num = num;
//         cout << "Derived1 Constructor " << derived1Num << endl;
//     }
//     ~Derived1()
//     {
//         cout << "Derived1 Destructor" << endl;
//     }
// };

// class Derived2 : virtual public Base
// {
//     int derived2Num;

// public:
//     Derived2() {}
//     Derived2(int num)
//     {
//         derived2Num = num;
//         cout << "Derived2 Constructor " << derived2Num << endl;
//     }
//     ~Derived2()
//     {
//         cout << "Derived2 Destructor" << endl;
//     }
// };

// class Derived3 : public Derived1, public Derived2
// {
//     int derived3Num;

// public:
//     Derived3() {}
//     Derived3(int b, int d1, int d2, int d3) : Base(b), Derived1(d1), Derived2(d2)
//     {
//         derived3Num = d3;
//         cout << "Derived3 Constructor " << derived3Num << endl;
//     }
//     ~Derived3()
//     {
//         cout << "Derived3 Destructor" << endl;
//     }
// };

// int main()
// {
//     Derived3 d3(1, 2, 3, 4);
//     return 0;
// }

#include <iostream>
#include <stdio.h>
using namespace std;

class Base1
{
public:
    virtual void display() = 0;
};

class Base2
{
public:
    virtual void display() = 0;
};

class Derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "Derived" << endl;
    }
};

int main()
{
    Base1 *ptr1;
    Base2 *ptr2;
    Derived d1, d2;
    ptr1 = &d1;
    ptr2 = &d2;
    ptr1->display();
    ptr2->display();
    return 0;
}