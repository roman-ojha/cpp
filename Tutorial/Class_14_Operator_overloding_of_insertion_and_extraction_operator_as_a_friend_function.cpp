// Operator_overloding_of_insertion_and_extraction_operator_as_a_friend_function.cpp

// >> = extraction operator
// << = insertion operator

// cout and cin are the object of iostream class

// for cin>>c1; we can also write cin.operator>>(c1);

// to get">>" or to print"<<" an object we cant do directly because this is non primutive type that's why we need to do operator overloading

// we don't have a choise to make member function in class to overlode insertion and extraction so , we must have to make a friend function of that class and overlode insertion and extraciton operator

#include <iostream>
using namespace std;

// NOTE: if we wan't to oveload operator in side the member function of class then the color object has to be of the same class
// but in here to overload insertion and extraction operator these two are not the color object of that member function class
// so, it means that we can't overload insertion and extration operator using member function
// we have to overload it using the friend function

class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout << "the value of complex after calculation= (" << a << "+" << b << "i)" << endl;
    }
    friend ostream &operator<<(ostream &, complex); // -> we can't make an object of ostream and istream that's why we make reference'&' of that

    friend istream &operator>>(istream &, complex &); // -> we also have to make a reference of complex type in here because we have to change in actual argumment
};

ostream &operator<<(ostream &O, complex C)
{
    O << "a= " << C.a << " b= " << C.b << endl;
    // cout << "a= " << C.a << "b= " << C.b << endl;
    // these two are same
    return cout;
    // return O;
}

istream &operator>>(istream &I, complex &C)
{
    I >> C.a >> C.b;
    return cin;
    // return I;
}

int main()
{
    complex c1, c2;
    cout << "enter the complex number";
    cin >> c1;
    cout << "you entered";
    cout << c1; //operator<<(cout,c1);
    return 0;
}