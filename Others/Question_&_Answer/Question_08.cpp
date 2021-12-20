/*
-> Write a program to convert kilogram into gram using user define to user define data conversion.
*/

#include <iostream>
using namespace std;

// class Kilogram;

class Gram
{
public:
    int value;
    Gram() {}
    // Gram(Kilogram);
    void showData()
    {
        cout << "Gram: " << value << endl;
    }
};

class Kilogram
{
public:
    int value;
    void setData(int value)
    {
        this->value = value;
    }
    operator Gram()
    {
        Gram g;
        g.value = value * 1000;
        return g;
    }
};

// Gram::Gram(Kilogram k)
// {
//     value = k.value * 1000;
// }

int main()
{
    Gram g;
    Kilogram k;
    k.setData(21);
    g = k;
    g.showData();
    return 0;
}