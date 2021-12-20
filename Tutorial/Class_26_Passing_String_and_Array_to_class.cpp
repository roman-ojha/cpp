#include <iostream>
#include <cstring>
using namespace std;

class complex
{
    char name[6];
    int a[5];

public:
    void setdata(char n[], int x[])
    {
        for (int i = 0; i < 6; i++)
        {
            name[i] = n[i];
        }
        for (int i = 0; i < 5; i++)
        {
            a[i] = x[i];
        }
    }
    void printdata()
    {
        cout << "Name: " << name << endl;
        cout << "Number are" << endl
             << "|";
        for (int i = 0; i < 5; i++)
        {
            cout << a[i] << "|";
        }
    }
    void setstring(char n[], char *n1)
    {
        strcpy(name, n);
        cout << endl
             << "Name:" << name << endl;
        strcpy(name, n1);
        cout << "Name:" << name << endl;
        strcpy(name, n2);
        cout << "Name:" << name << endl;
    }
};

int main()
{
    complex c;
    int number[5] = {1, 2, 3, 4, 5};
    char name[6] = "Roman";
    c.setdata(name, number);
    c.printdata();
    // Another way to pass String to a class is
    complex c2;
    c2.setstring(name, name);
    return 0;
}