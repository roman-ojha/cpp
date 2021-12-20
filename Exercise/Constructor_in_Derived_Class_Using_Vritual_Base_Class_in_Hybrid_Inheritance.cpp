/*
NOTE: this porgramm is not working right now
*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Machine
{
private:
    string name;
    float power;

public:
    Machine() {}
    Machine(string, float);
    void build();
};

Machine::Machine(string name, float power)
{
    this->name = name;
    (*this).power = power;
}

void Machine::build()
{
    cout << "Name: " << this->name << endl
         << "Power: " << this->power << endl;
}

class Laptop : virtual public Machine
{
private:
    string brand;
    int screenRes, batteryPower, memorySize, storageSize;

public:
    Laptop() {}
    Laptop(string, int, int, int, int);
    void build();
};

Laptop::Laptop(string brand, int screenRes, int batteryPower, int memorySize, int storageSize)
{
    this->brand = brand;
    this->screenRes = screenRes;
    this->batteryPower = batteryPower;
    this->memorySize = memorySize;
    this->storageSize = storageSize;
}

void Laptop::build()
{
    cout << "Building Laptop" << endl;
    cout << "Brand: " << this->brand << endl
         << "ScreenR Resolution: " << this->screenRes << endl
         << "Battery Power: " << this->batteryPower << endl
         << "MemorySize: " << memorySize << endl
         << "storageSize: " << storageSize << endl;
}

class PC : virtual public Machine
{
private:
    int memorySize, storageSize;

public:
    PC() {}
    PC(int, int);
    void build();
};

PC::PC(int memorySize, int storageSize)
{
    this->memorySize = memorySize;
    this->storageSize = storageSize;
}

void PC::build()
{
    cout << "Building PC" << endl;
    cout << "Memory Size: " << memorySize << endl
         << "Storage Size: " << storageSize << endl;
}

class Computer : public PC, public Laptop
{
private:
    int pcPrice, laptopPrice;
    string type;

public:
    Computer() {}
    Computer(int, int, string, int, int, int, int, string, float, int, int);
    void build();
};

Computer::Computer(int memorySize1, int storageSize1, string brand, int screenRes, int batteryPower, int memorySize2, int storageSize2, string name, float power, int laptopPrice, int pcPrice) : PC(memorySize1, storageSize1), Laptop(brand, screenRes, batteryPower, memorySize2, storageSize2), Machine(name, power)
{
    this->pcPrice = pcPrice;
    this->laptopPrice = laptopPrice;
}

void Computer::build()
{
    Machine::build();
    PC::build();
    cout << "Price: " << this->pcPrice << endl;
    Machine::build();
    Laptop::build();
    cout << "Prce: " << this->laptopPrice << endl;
}
int main()
{
    Computer c;
    c = Computer(32, 1, "Msi", 1080, 8000, 32, 1, "Laptop", 1800, 100000, 200000);
    c.build();
    return 0;
}