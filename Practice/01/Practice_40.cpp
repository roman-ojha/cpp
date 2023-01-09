// #include <iostream>
// using namespace std;

// int main()
// {
//     int total = 100;
//     int &number = total;
//     cout << "Number: " << number << endl;
//     cout << "Total: " << total << endl;
//     number = 120;
//     cout << "Number: " << number << endl;
//     cout << "Total: " << total << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

class Complex
{
private:
    int x, y;

public:
    void setData(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Complex calculation(Complex, Complex);
    void printData();
};

Complex Complex::calculation(Complex c1, Complex c2)
{
    Complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return temp;
}

void Complex::printData()
{
    cout << "X: " << x << endl
         << "Y: " << y << endl;
}

int main()
{
    Complex c[3];
    c[0].setData(1, 2);
    c[1].setData(3, 4);
    c[3] = c[3].calculation(c[0], c[1]);
    c[3].printData();
    return 0;
}