#include <iostream>
using namespace std;

/*
    *) Pointers:
        -> A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before you can use it to store any variable address.
        int *ip;    //pointer to an integer
        double *dp; // pointer to a double
        float *fp;  // pointer to a float
        char *ch;   // pointer to a character
*/

int main()
{

    int var = 20; // actual variable declaration
    int *ip;      // pointer variable declaration
    ip = &var;    // store address of var in 'ip' pointer variable

    cout << "Address of var: " << &var << endl; // 0x6a6c5ffa84
    cout << "ip: " << ip << endl;               // 0x6a6c5ffa84

    // accessing the value available inside that pointer address
    // this is call as dereferencing the pointer variable
    cout << "Value of ip: " << *ip << endl; // 20

    return 0;
}