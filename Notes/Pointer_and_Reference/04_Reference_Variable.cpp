#include <iostream>
using namespace std;

/*
    *) Reference variable:
        -> A reference variable is one that refers to the address of another variable.
        -> Syntax:
            -> Data_type &Variable_name =existing_variable;

*/

int main()
{
    string s = "anova";
    string &s1 = s;
    // In the above example the ‘s’ is a normal variable, s1 as the reference variable which holds the address of 's' string.

    int a = 10;
    // 'a' is a number variable that hold the value
    int &b = a;
    // 'b' is the reference variable that hold the address of 'a'
    // now both 'a' & 'b' reference to the same memory location
    cout << a << endl; // 10
    cout << b << endl; // 10
    b = 20;
    // changing the value of 'b' will change the value of 'a' as well
    cout << a << endl; // 20
    cout << b << endl; // 20

    return 0;
}