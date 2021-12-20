/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

// solution:
#include <iostream>
#include <math.h>
using namespace std;

class simple_calculator
{
    int x, y;

public:
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void simple_calculation()
    {
        cout << x << " + " << y << "= " << x + y << endl;
        cout << x << " - " << y << "= " << x - y << endl;
        cout << x << " * " << y << "= " << x * y << endl;
        cout << x << " / " << y << "= " << float(x / y) << endl;
    }
};

class Scientific_Calculator : public simple_calculator
{
    int o, p;

public:
    void setdata1(int c, int d)
    {
        o = c;
        p = d;
        setdata(c, d);
    }
    void Scientific_calculation()
    {
        simple_calculation();
        cout << "square root of " << o << "= " << float(sqrt(o)) << " and " << p << "= " << float(sqrt(p)) << endl;
        cout << "square of " << o << "= " << o * o << " and " << p << "= " << p * p << endl;
        cout << "log of " << o << "= " << float(log(o)) << " and " << p << "= " << float(log(p)) << endl;
    }
};

class Hybrid_Calculator : public Scientific_Calculator
{
};

int main()
{
    Hybrid_Calculator h1;
    h1.setdata1(5, 6);
    h1.Scientific_calculation();
    return 0;
}