#include <iostream>
using namespace std;

/*
    *) Reference vs pointer
        -> Both the C++ reference and pointer are used to change the value of a local variable from one function to another function.
        -> They are both used to save the copy of the object passing value in a function.
        You can declare The pointer as void but the reference not as void.
            -> EX: void *a;
*/

int main()
{
    // void pointer
    void *a;

    int x = 100; // simple or ordinary variable.

    int *b = &x; // single pointer

    int **ptt = &b; // double pointer

    int ***ptrr = &ptt; // triple pointer

    // but the references are only one level of indirection.That is :
    int ab = 5; // simple or ordinary variable

    int &Sa = ab;

    int &Ss = Sa;
    return 0;
}