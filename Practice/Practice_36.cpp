// #include <iostream>
// #include <stdio.h>
// using namespace std;

// class Number
// {
// private:
//     int x, y, z;

// public:
//     int a;
//     static int count;
//     Number() {}
//     Number(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     void sum()
//     {
//         z = x + y;
//     }
//     void printdata();
//     static void increment()
//     {
//         count++;
//     }
// };

// void Number::printdata()
// {
//     sum();
//     cout << "The sum of the given number is: " << z << endl;
// }

// int Number::count = 10;

// int main()
// {
//     Number n(1, 2), n1, n2, n3, n4, n5;
//     n.printdata();
//     n.increment();
//     cout << n.count << endl;
//     n2.increment();
//     cout << n1.count << endl;
//     Number::increment();
//     cout << Number::count << endl;

//     return 0;
// }

// #include <iostream>
// #include <stdio.h>
// #include <string.h>
// using namespace std;

// class Complex
// {
//     int x, y;

// public:
//     Complex() {}
//     Complex(int, int);
//     friend Complex calculation(Complex, Complex);
//     friend void printdata(Complex);
// };

// Complex::Complex(int x, int y)
// {
//     this->x = x;
//     this->y = y;
// }

// Complex calculation(Complex c1, Complex c2)
// {
//     Complex temp(c1.x + c2.x, c1.y + c2.y);
//     return temp;
// }

// void printdata(Complex c)
// {
//     cout << "X: " << c.x << " Y: " << c.y << endl;
// }

// int main()
// {
//     Complex c[3];
//     c[0] = Complex(1, 2);
//     c[1] = Complex(3, 4);
//     c[2] = calculation(c[0], c[1]);
//     printdata(c[2]);
//     return 0;
// }

// #include <iostream>

// class Parent
// {
//     int x, y, z;

// public:
//     Parent() {}
//     Parent(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     void sum()
//     {
//         z = x + y;
//     }
//     void print()
//     {
//         sum();
//         std::cout << this->z << std::endl;
//     }
// };

// class Child : public Parent
// {
// public:
//     Child() {}
//     Child(int x, int y) : Parent(x, y) {}
// };

// int main()
// {
//     Child c;
//     c = Child(1, 2);
//     c.print();
// }

// #include <iostream>
// using namespace std;

// class A
// {
//     int a;

// public:
//     A() {}
//     A(int a)
//     {
//         this->a = a;
//     }
//     int setA()
//     {
//         return a;
//     }
// };

// class B
// {
//     int b;

// public:
//     B() {}
//     B(int b)
//     {
//         (*this).b = b;
//     }
//     int setB()
//     {
//         return b;
//     }
// };

// class Sum : public A, public B
// {
//     int z;

// public:
//     Sum() {}
//     friend void printData(Sum);
//     Sum(int x, int y) : A(x), B(y)
//     {
//     }
//     void sumNumber();
// };

// void printData(Sum s)
// {
//     cout << "Sum: " << s.z << endl;
// }

// void Sum::sumNumber()
// {
//     Sum s;
//     z = setA() + setB();
//     s.z = z;
//     // return z;
//     printData(s);
// }

// int main()
// {
//     Sum s(1, 2);
//     // cout << "Sum: " << s.sumNumber() << endl;
//     s.sumNumber();
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Car
// {
//     string name;
//     float mileage;

// public:
//     Car()
//     {
//         name = "";
//         mileage = 0;
//     }
//     Car(string n, float m)
//     {
//         name = n;
//         this->mileage = m;
//     }
//     void printDetail()
//     {
//         cout << "Name: " << name << endl
//              << "Mileage: " << mileage << endl;
//     }
// };

// class ElectircCar : public Car
// {
//     float speed;
//     string color;

// public:
//     ElectircCar()
//     {
//         speed = 0;
//         color = "";
//     }
//     ElectircCar(string name, float mileage, float speed, string color) : Car(name, mileage)
//     {
//         (*this).speed = speed;
//         this->color = color;
//     }
//     void printDetail()
//     {
//         Car::printDetail();
//         cout << "speed: " << (*this).speed << endl
//              << "Color: " << this->color << endl;
//     }
// };

// class Tesla : public ElectircCar
// {
//     string model;

// public:
//     Tesla()
//     {
//         model = "";
//     }
//     Tesla(string name, float mileage, float speed, string color, string model) : ElectircCar(name, mileage, speed, color)
//     {
//         this->model = model;
//     }
//     void printDetail()
//     {
//         ElectircCar::printDetail();
//         cout << "Model: " << (*this).model << endl;
//     }
// };

// int main()
// {
//     Tesla t("tesla", 12, 100, "Red", "Model S");
//     t.printDetail();
//     return 0;
// }

#include <iostream>
#include <stdio.h>
#include <functional>
using namespace std;

void function2();

void function1()
{
    function2();
    printf("This is function1\n");
}
void function2()
{
    printf("This is function2\n");
}
int main()
{
    function1();
    return 0;
}