// #include <iostream>
// #include <stdio.h>
// #include <string>
// using namespace std;

// class Machine
// {
// private:
//     string name;
//     float power;

// public:
//     Machine() {}
//     Machine(string, float);
//     void build();
// };

// Machine::Machine(string name, float power)
// {
//     this->name = name;
//     (*this).power = power;
// }

// void Machine::build()
// {
//     cout << "Name: " << this->name << endl
//          << "Power: " << this->power << endl;
// }

// class Laptop : virtual public Machine
// {
// private:
//     string brand;
//     int screenRes, batteryPower, memorySize, storageSize;

// public:
//     Laptop() {}
//     Laptop(string, float, string, int, int, int, int);
//     void build();
// };

// Laptop::Laptop(string name, float power, string brand, int screenRes, int batteryPower, int memorySize, int storageSize) : Machine(name, power)
// {
//     this->brand = brand;
//     this->screenRes = screenRes;
//     this->batteryPower = batteryPower;
//     this->memorySize = memorySize;
//     this->storageSize = storageSize;
// }

// void Laptop::build()
// {
//     cout << "Building Laptop" << endl;
//     Machine::build();
//     cout << "Brand: " << this->brand << endl
//          << "ScreenR Resolution: " << this->screenRes << endl
//          << "Battery Power: " << this->batteryPower << endl
//          << "MemorySize: " << memorySize << endl
//          << "storageSize: " << storageSize << endl;
// }

// class PC : virtual public Machine
// {
// private:
//     int memorySize, storageSize;

// public:
//     PC() {}
//     PC(string, float, int, int);
//     void build();
// };

// PC::PC(string name, float power, int memorySize, int storageSize) : Machine(name, power)
// {
//     this->memorySize = memorySize;
//     this->storageSize = storageSize;
// }

// void PC::build()
// {
//     cout << "Building PC" << endl;
//     Machine::build();
//     cout << "Memory Size: " << memorySize << endl
//          << "Storage Size: " << storageSize << endl;
// }

// class Computer : public PC, public Laptop
// {
// private:
//     int pcPrice, laptopPrice;
//     string type;

// public:
//     Computer() {}
//     Computer(string, float, int, int, string, int, int, int, int, int, int);
//     void build();
// };

// Computer::Computer(string name, float power, int memorySize1, int storageSize1, string brand, int screenRes, int batteryPower, int memorySize2, int storageSize2, int laptopPrice, int pcPrice) : PC(name, power, memorySize1, storageSize1), Laptop(name, power, brand, screenRes, batteryPower, memorySize2, storageSize2)
// {
//     this->pcPrice = pcPrice;
//     this->type = type;
// }

// void Computer::build()
// {
//     PC::build();
//     cout << "Price: " << this->pcPrice << endl;
//     Laptop::build();
//     cout << "Prce: " << this->laptopPrice << endl;
// }
// int main()
// {
//     Computer c;
//     c = Computer("Laptop", 1800, 32, 1, "Msi", 1080, 8000, 32, 1, 100000, 200000);
//     c.build();
//     return 0;
// }

// #include <iostream>
// #include <stdio.h>
// using namespace std;

// class Number
// {
//     int x, y;

// public:
//     Number(){};
//     Number(int x, int y) : x(x), y(y) {}
//     void print()
//     {
//         cout << x << y << endl;
//     }
// };

// int main()
// {
//     Number n(1, 2);
//     n.print();
//     return 0;
// }

#include <iostream>
using namespace std;

class A
{
    int x, y;

public:
    A() {}
    A(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void printdata()
    {
        cout << "X: " << x << " Y: " << y << endl;
    }
    virtual void printClass()
    {
        cout << "This is the parent class" << endl;
    }
};

class B : public A
{
public:
    void printClass()
    {
        cout << "This is the base class" << endl;
    }
};

int main()
{
    B b;
    A *a;
    a = &b;
    a->printClass();
    return 0;
}
