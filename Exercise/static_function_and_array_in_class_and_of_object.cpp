#include <iostream>
using namespace std;

class complex
{
    int num[2];
    static int count;
    int i = 0;

public:
    void setdata();
    void displaydata();
    static void countplus()
    {
        count++;
    }
    static void intcount()
    {
        count = 0;
    }
    void sumdata();
    void sumcomplex(complex, complex);
    void displaycomplex();
};
int complex::count = 0;

void complex::setdata()
{
    cout << "Enter the real part of the no." << count + 1 << " Complex number: ";
    cin >> num[i];
    cout << "Enter the imaginary part of the no." << count + 1 << " Complex number: ";
    i++;
    cin >> num[i];
}

void complex::displaydata()
{
    i = 0;
    cout << "The value of real part of no." << count + 1 << " Complex number is " << num[i] << endl;
    i++;
    cout << "The value of imaginary part of no." << count + 1 << " Complex number is " << num[i] << endl;
}

void complex ::sumcomplex(complex o1, complex o2)
{
    num[0] = o1.num[0] + o2.num[0];
    num[1] = o1.num[1] + o2.num[1];
}

void complex::displaycomplex()
{
    cout << "The value of complex number after adding is " << num[0] << "+" << num[1] << "i" << endl;
}

int main()
{
    complex c[3];
    c[0].setdata();
    complex::countplus();
    c[1].setdata();
    complex::intcount();
    for (int i = 0; i < 2; i++)
    {
        c[i].displaydata();
        complex::countplus();
    }
    c[3].sumcomplex(c[0], c[1]);
    c[3].displaycomplex();
    return 0;
}