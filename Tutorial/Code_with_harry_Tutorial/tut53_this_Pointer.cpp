#include <iostream>
using namespace std;
class A
{
    int a; // this is the instance member variable

public:
    // this is a local object pointer in every instance member function containing address of the caller object.
    // A & setData(int a){
    // instace member function are those function which are define in the class
    // this is used to refer caller object in member function
    void setData(int a) //-> these are the instance member function if you use static in function then that function will not called as instance mamber function
    {
        this->a = a; // if you want to set the variable of same name then you can do this
        // this is the pointer
        // return *this;
    }
    A &returndata(int a)
    {
        this->a = a;
        return *this; // this will going to return this pointer
        // returndata function is returning an object which is pointing by this pointer
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(4); // a is a caller object because a is calling setdata function
    a.getData();
    a.returndata(6).getData(); //-> now we can do this as well
    return 0;
}