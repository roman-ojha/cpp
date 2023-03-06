#include <iostream>
using namespace std;

// The call by reference method of passing arguments to a function copies the reference of an argument into the formal parameter. Inside the function, the reference is used to access the actual argument used in the call. This means that changes made to the parameter affect the passed argument.

void swapNum(int &a, int &b)
{
    // here we will take the arguments by reference
    // also called as pass by reference
    // if we will manipulate 'a' & 'b' variable it will get reflected to the value which is being reference by these variable
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    // call by reference
    cout << "A: " << a << endl; // 10
    cout << "B: " << b << endl; // 20

    // call by reference:
    swapNum(a, b);
    cout << "A: " << a << endl; // 20
    cout << "B: " << b << endl; // 10
    return 0;
}