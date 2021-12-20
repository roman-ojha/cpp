// Friend Function
// Member function of one class can become friend to another class

#include <iostream>
using namespace std;

class A
{

public:
    void function()
    {
        // to make this function a member of another class we have to declared this function in another class
    }

    void setdata()
    {
    }
};

class B
{

    friend void A::function();
    friend void A::setdata(); //by doing this you can make the function as a friend of another class
};

// but if you want to all the function as a member of another class then:

class X
{

public:
    void function()
    {
        // to make this function a member of another class we have to declared this function in another class
    }

    void setdata()
    {
    }
};

class Y
{

    friend class X; // by doing this you can make all the function that are define in class X as a member of class Y
};

int main()
{

    return 0;
}