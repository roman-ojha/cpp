
#include <iostream>
using namespace std;

// Return by Reference
int &returnReference(int &a)
{
    // Note: it should not return the address of the local variable
    // because the address of local variable will get disposed after the function ends

    // here we will take the reference of 'a' then we will return that reference again
    return a;
}

int main()
{

    int a = 3;
    // here it return the reference of 'a' variable
    int aReturn = returnReference(a);
    cout << "aReturn: " << aReturn << endl; // 3
    // because 'returnReference' function return reference of the variable we can assign to that reference variable a new value
    // so it means that 'returnReference(a)' become 'a'
    returnReference(a) = 30;
    cout << "A after changed: " << a << endl; // 30

    // because 'returnReference(a)' function return the reference of the variable we can store that reference into new reference variable
    int &d = returnReference(a);
    // now 'd' also reference to the same address that is reference by 'a'
    // changing the value of 'd' which will change the value of 'a' as well
    d = 10;
    cout << "A after changed: " << a << endl; // 10
    return 0;
}