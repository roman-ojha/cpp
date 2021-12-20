#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
protected:
    float x, y;
    char o;

public:
    SimpleCalculator() {}
    SimpleCalculator(float a, float b, char op)
    {
        x = a;
        y = b;
        o = op;
    }
    void printresult1()
    {
        switch (o)
        {
        case '+':
            cout << x << "+" << y << "=" << x + y << endl;
            break;
        case '-':
            cout << x << "+" << y << "=" << x + y << endl;
            break;
        case '*':
            cout << x << "+" << y << "=" << x + y << endl;
            break;
        case '/':
            cout << x << "+" << y << "=" << x + y << endl;
            break;
        case '%':
            cout << x << "+" << y << "=" << x + y << endl;
            break;
        default:
            cout << "Invalid Operator";
            break;
        }
    }
};

class ScientificCalculator
{
protected:
    float x;
    int y;

public:
    ScientificCalculator() {}
    ScientificCalculator(float a, int b)
    {
        x = a;
        y = b;
    }
    void printresult2()
    {

        switch (y)
        {
        case 1:
            cout << x << "^2=" << x * x << endl;
            break;
        case 2:
            cout << "log" << x << "=" << log(x) << endl;
            break;
        case 3:
            cout << "sin" << x << "=" << sin(x) << endl;
            break;
        case 4:
            cout << "Cos" << x << "=" << cos(x) << endl;
            break;
        case 5:
            cout << "tan" << x << "=" << tan(x) << endl;
            break;
        default:
            cout << "Invalid number";
            break;
        }
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
protected:
    int a;

public:
    HybridCalculator() {}
    HybridCalculator(float a, float b, char op) : SimpleCalculator(a, b, op)
    {
    }
    HybridCalculator(float a, int b) : ScientificCalculator(a, b)
    {
    }
    void setsimple()
    {
        cout << "Select the operator that you want to perform" << endl;
    }
    void Scientific()
    {
        cout << "Select the operator that you want to perform as per the number:" << endl;
        cout << "X^2=1" << endl
             << "log=2" << endl
             << "Sin=3" << endl
             << "Cos=4" << endl
             << "Tan=5" << endl;
    }
};

int main()
{
    HybridCalculator h1;
    cout << "Enter number as per you want to do operation:" << endl;
    cout << "Simple Operation=1" << endl
         << "Scientific Operation=2" << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
        float x, y;
        cout << "Enter the value of A=";
        cin >> x;
        cout << "Enter the value of B=";
        cin >> y;
        h1.setsimple();
        char o;
        cin >> o;
        h1 = HybridCalculator(x, y, o);
        h1.printresult1();
    }
    else if (op == 2)
    {
        float x;
        cout << "Enter the value of A=";
        cin >> x;
        int o;
        h1.Scientific();
        cin >> o;
        h1 = HybridCalculator(x, o);
        h1.printresult2();
    }
    else
    {
        cout << "Invalid number";
    }
    return 0;
}