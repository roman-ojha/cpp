//  Static Member variable

#include <iostream>
using namespace std;

class account
{
private:
    int balance;      // instance member variable
    static float roi; // static member variable (class variable)
                      // in c++ if you declare static member variable then -
                      // it does not get memory
public:
    void setbalance(int b)
    {
        balance = b;
    }
};

float account ::roi = 3.5f; // if you write this line and declare it only after that -
                            // static member variable will get memory
                            // this variable memory does not depend object
                            // default value is zero

int main()
{
    account a1; // in this a1 variable named by balance variable will exist but
                // roi named variable doesnot exist
    return 0;
}