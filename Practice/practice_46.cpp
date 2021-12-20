// #include <iostream>
// using namespace std;

// void passByValue(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout << "A: " << a << endl
//          << "B: " << b << endl;
// }

// void passByReference(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     passByValue(a, b);
//     passByReference(a, b);
//     cout << "A: " << a << endl
//          << "B: " << b << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Complex;

// class Calculation
// {
// public:
//     Complex sumComplex(Complex, Complex);
//     void displayComplex(Complex);
// };

// class Complex
// {
//     int r, i;

// public:
//     Complex() {}
//     Complex(int r, int i)
//     {
//         this->r = r;
//         this->i = i;
//     }
//     // friend Complex Calculation::sumComplex(Complex, Complex);
//     // friend void Calculation::displayComplex(Complex);
//     friend class Calculation;
// };

// Complex Calculation::sumComplex(Complex c1, Complex c2)
// {
//     Complex temp;
//     temp.r = c1.r + c2.r;
//     temp.i = c1.i + c2.i;
//     return temp;
// }

// void Calculation::displayComplex(Complex c)
// {
//     cout << "Real: " << c.r << endl
//          << "Imaginary: " << c.i << endl;
// }

// int main()
// {
//     Complex c[3];
//     Calculation cl;
//     c[0] = Complex(4, 5);
//     c[1] = Complex(6, 8);
//     c[2] = cl.sumComplex(c[0], c[1]);
//     cl.displayComplex(c[2]);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Number
// {
//     static int count;
//     int data;

// public:
//     static void incCount()
//     {
//         count++;
//     }
//     static void decCount()
//     {
//         count--;
//     }
//     Number()
//     {
//     }
//     Number(int data)
//     {
//         this->data = data;
//         this->incCount();
//         cout << "Constructor " << data << " Invoke" << endl;
//     }
//     ~Number()
//     {
//         this->decCount();
//         cout << "Destructor " << data << "Invoke" << endl;
//     }
// };

// int Number::count = 0;

// int main()
// {
//     Number n1(1), n2(2), n3(3);
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int b = 0;
//     int c;
//     string s = "Deivision by zero is not possible";
//     try
//     {
//         if (b == 0)
//         {
//             throw s;
//         }
//         else
//         {
//             c = a / b;
//             cout << c << endl;
//         }
//     }
//     catch (string err)
//     {
//         cout << err << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// class Number
// {
//     int a;

// public:
//     void setdata(int x)
//     {
//         a = x;
//     }
//     void display()
//     {
//         cout << "A: " << a << endl;
//     }
//     // void operator+=(Number n)
//     // {

//     // }
//     void operator+=(Number n)
//     {
//         a += n.a;
//     }
// };

// int main()
// {
//     Number n1, n2;
//     n1.setdata(11);
//     n2.setdata(13);
//     n2 += n1;
//     n2.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Number2;
// class Number1
// {
//     int a;

// public:
//     Number1() {}
//     Number1(int a)
//     {
//         this->a = a;
//     }
//     operator Number2();
// };

// class Number2
// {
// public:
//     int b;
//     Number2() {}
//     Number2(int b)
//     {
//         this->b = b;
//     }
//     void display()
//     {
//         cout << "B: " << b << endl;
//     }
// }

// Number1::operator Number2()
// {
//     Number2 temp;
//     temp.b = a;
//     return temp;
// }

// int main()
// {
//     Number1 a;
//     Number2 b;
//     b = a;
//     b.display();
//     return 0;
// }