#include <iostream>
using namespace std;

template <class T>
class Roman
{
public:
    T data;
    Roman(T a)
    {
        data = a;
    }
    void display();
};

// after using template in a class normally we can't put definition of member function outside the class
// so, to solve the problem of the we have to make member function template
template <class T>
void Roman<T>::display()
{
    cout << data << endl;
}

// Same function with and without template
//---------------------------------------------------
// here have the same function but while calling , it call the highest priority function
void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}
//-----------------------------------------------------

template <class T>
void func1(T a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    Roman<float> r(3.6);
    r.display();
    func(4); // Exact match takes the highest priority it means "I am first func()" will call
    func1(4);
    return 0;
}