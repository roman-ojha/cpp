// #include <iostream>
// using namespace std;

// class Binary
// {
//     int x, y;

// public:
//     Binary() {}
//     Binary(int, int);
//     Binary operator+(Binary);
//     void displayData();
// };

// Binary::Binary(int x, int y)
// {
//     this->x = x;
//     this->y = y;
// }

// Binary Binary::operator+(Binary b)
// {
//     Binary temp;
//     temp.x = x + b.x;
//     temp.y = y + b.y;
//     return temp;
// }

// void Binary::displayData()
// {
//     cout << "X: " << x << endl
//          << "Y: " << y << endl;
// }

// int main()
// {
//     Binary b1, b2, b3;
//     b1 = Binary(1, 2);
//     b2 = Binary(3, 65);
//     b3 = b1 + b2;
//     b3.displayData();
// }

// #include <iostream>
// using namespace std;

// class Unary
// {
//     int x;

// public:
//     Unary() {}
//     Unary(int);
//     Unary operator-();
//     void printData();
// };

// Unary::Unary(int a) : x(a) {}
// Unary Unary::operator-()
// {
//     Unary temp;
//     temp.x = -x;
//     return temp;
// }
// void Unary::printData()
// {
//     cout << "X: " << x << endl;
// }

// int main()
// {
//     Unary u1, u2;
//     u1 = Unary(5);
//     // u1.printData();
//     u2 = -u1;
//     u2.printData();
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class UnaryOverload
{
    string name;

public:
    UnaryOverload() {}
    UnaryOverload(string name) : name(name) {}
    void displayData()
    {
        cout << "Name: " << this->name << endl;
    }
    UnaryOverload operator++()
    {
        UnaryOverload temp;
        name = name + " Ojha";
        return temp;
    }
};

int main()
{
    UnaryOverload u1, u2, u3;
    u1 = UnaryOverload("Roman");
    u2 = ++u1;
    u2.displayData();
    return 0;
}