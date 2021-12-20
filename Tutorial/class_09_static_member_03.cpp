//  Static member function (class function)

#include <iostream>
using namespace std;

class account
{
private:
    int balance;
    static float roi;

public:
    void setbalance(int b)
    {
        balance = b;
    }
    void setroi1(float r) // instant member function
    {
        roi = r; //now  we can access roi variable in main function
                 //  but this function will only can be call by object
                 // instant menber function can excess instant members as well as static members
    }

    //so if you want to call satic variable in main function then you can do this

    static void setroi(float a) // static member function can only excess static members because this function can be able to call without object
    {
        roi = a;
    }
};
int main()
{
    account a1;
    a1.setroi1(4.5f); //-> you can do this to set value of static member variable but if we want to call without object then we have to do this:
    account::setroi(4.5f);
    return 0;
}