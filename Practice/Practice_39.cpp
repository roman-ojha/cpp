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

// #include <iostream>
// #include <string>
// using namespace std;

// class UnaryOverload
// {
//     string name;

// public:
//     UnaryOverload() {}
//     UnaryOverload(string name) : name(name) {}
//     void displayData()
//     {
//         cout << "Name: " << this->name << endl;
//     }
//     UnaryOverload operator++()
//     {
//         UnaryOverload temp;
//         name = name + " Ojha";
//         return temp;
//     }
//     UnaryOverload operator++(int)
//     {
//         UnaryOverload temp;
//         temp.name = name + " Razz";
//         return temp;
//     }
// };

// int main()
// {
//     UnaryOverload u1, u2, u3;
//     u1 = UnaryOverload("Roman");
//     u2 = ++u1;
//     u2.displayData();
//     u1.displayData();
//     u3 = u1++;
//     u3.displayData();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class ObjType
// {
//     int x;

// public:
//     ObjType() {}
//     ObjType(int x) : x(x) {}
//     void display()
//     {
//         cout << "X: " << x << endl;
//     }
//     operator int()
//     {
//         return x;
//     }
// };

// int main()
// {
//     ObjType o1(15);
//     int value;
//     value = o1;
//     // o1.display();
//     cout << value << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// class ConvertToString
// {
//     int value;

// public:
//     ConvertToString() {}
//     ConvertToString(int value) : value(value) {}
// };

// class Type
// {
//     string name, language;
//     int id;

// public:
//     Type() {}
//     Type(string name, int id, string language) : name(name), id(id), language(language) {}
//     operator vector<string>()
//     {
//         vector<string> userData;
//         userData.push_back(name);
//         userData.push_back(to_string(id));
//         userData.push_back(language);
//         return userData;
//     }
// };

// int main()
// {
//     Type t1("Roman", 12, "Cpp");
//     vector<string> userData;
//     userData = t1;
//     cout << "Name: " << userData[0] << endl
//          << "Id: " << userData[1] << endl
//          << "Language: " << userData[2] << endl;
//     return 0;
// }

#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <class A1, class A2>
class A
{
    A1 var1;
    A2 var2;

public:
    A() {}
    A(A1 var1, A2 var2) : var1(var1), var2(var2){};
    A1 getVar1()
    {
        return var1;
    }
    A2 getVar2()
    {
        return var2;
    }
};

template <class B1, class B2>
class B
{
    B1 var1;
    B2 var2;

public:
    B() {}
    B(A<vector<string>, int> a)
    {
        this->var1 = a.getVar1();
        this->var2 = a.getVar2();
    }
    void display()
    {
        for (int i = 0; i < var1.size(); i++)
        {
            cout << var1[i] << endl;
        }
        cout << var2 << endl;
    }
};

int main()
{
    vector<string> user;
    user.push_back("Roman");
    user.push_back("Ojha");
    A<vector<string>, int> a(user, 12);
    B<vector<string>, int> b;
    b = a;
    b.display();
    return 0;
}