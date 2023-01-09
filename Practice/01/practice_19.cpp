#include <iostream>
using namespace std;

class complex
{
    int x, y;

public:
    complex() {}
    complex(int a, int b)
    {
        x = a;
        y = b;
    }
    complex(complex o1, complex o2)
    {
        complex temp;
        temp.x = o1.x + o2.x;
        temp.y = o1.y + o2.y;
        cout << "\nthe sum of the complex number is= (" << temp.x << "+" << temp.y << "i)" << endl;
    }
    void printdata()
    {
        cout << "the sum of the complex number is= (" << x << "+" << y << "i)" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    int c, i;
    cout << "enter the value of first complex no.= ";
    cin >> c >> i;
    c1 = complex(c, i);

    cout << "enter the value of second complex no.= ";
    cin >> c >> i;
    c2 = complex(c, i);
    c3 = complex(c1, c3);
    // cout << "the sum of the complex number is= " << c3 << endl;
    return 0;
}