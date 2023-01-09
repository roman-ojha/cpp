// #include <iostream>
// #include <string.h>
// using namespace std;

// class Car
// {
// protected:
//     char name[20], model[20];

// public:
//     Car() {}
//     Car(char name[], char *model)
//     {
//         strcpy(this->name, name);
//         strcpy(this->model, model);
//     }
//     virtual void drive() = 0;
//     virtual void carBreak() = 0;
// };

// class Tesla : public Car
// {
// private:
//     int batteryPower;

// public:
//     Tesla(char name[], char *model, int b) : Car(name, model), batteryPower(b) {}
//     void drive()
//     {
//         cout << "Tesla Driving" << endl
//              << "Battery Power " << batteryPower << endl;
//     }
//     void carBreak()
//     {
//         cout << "Tesla Break" << endl;
//     }
// };

// class BMW : public Car
// {
// private:
//     int milage;

// public:
//     BMW(char name[], char *model, int mil) : Car(name, model), milage(mil) {}
//     void drive()
//     {
//         cout << "BMW Driveing" << endl
//              << "Milage " << milage << endl;
//     }
//     void carBreak()
//     {
//         cout << "BMW break" << endl;
//     }
// };

// int main()
// {
//     char name1[20] = "Tesla";
//     char name2[20] = "BMW";
//     char model1[20] = "S";
//     char model2[20] = "2021";
//     Car *c[2];
//     c[0] = new Tesla(name1, model1, 250000);
//     c[1] = new BMW(name2, model2, 20);
//     c[0]->drive();
//     c[1]->drive();
//     return 0;
// }

// #include <iostream>
// #include <stdio.h>
// using namespace std;

// class MyClass
// {
//     int num;

// public:
//     MyClass() {}
//     MyClass(int n) : num(n) {}
//     MyClass &returnObj()
//     {
//         return *this;
//     }
//     int SetNum()
//     {
//         return num;
//     }
// };

// int main()
// {
//     MyClass *ptr = new MyClass(20);
//     MyClass *obj = new MyClass;
//     *obj = ptr->returnObj();
//     cout << "Number: " << obj->SetNum() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int b = 3;
//     float c = (float)a / (float)b;
//     cout << c << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Number
// {
//     int a, b;
//     float x, y;

// public:
//     Number()
//     {
//         a = 0;
//         b = 0;
//         x = 0;
//         y = 0;
//     }
//     Number(int a, int b)
//     {
//         this->a = a;
//         this->b = b;
//         x = 0;
//         y = 0;
//     }
//     Number(float x, float y, int a)
//     {
//         this->x = x;
//         this->y = y;
//         this->a = a;
//         b = 0;
//     }
//     void printdata()
//     {
//         cout << "A: " << a << endl
//              << "B: " << b << endl
//              << "X: " << x << endl
//              << "Y: " << this->y << endl;
//     }
// };

// int main()
// {
//     Number n[2];
//     n[1] = Number(3, 4);
//     n[2] = Number(6.45, 8.98, 6);
//     n[1].printdata();
//     n[2].printdata();
// }

#include <iostream>
using namespace std;

int compare(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
    return 0;
}

int main()
{
    int a = 10;
    int b = 13;
    int c = 24;
    int greatest = compare(a, b, c);
    cout << "The greatest value among A, B and C is: " << greatest << endl;
    return 0;
}