#include <iostream>
using namespace std;
// Returning pointer
// Return by address
int *returnPointer()
{
    int a = 10;
    // because this function return the pointer variable we have to first create the pointer variable
    int *aPtr = &a;
    return aPtr;
}

int main()
{

    // Getting returned pointer
    int *rPtr = returnPointer();
    cout << "Returned pointer value: " << *rPtr << endl;
    return 0;
}