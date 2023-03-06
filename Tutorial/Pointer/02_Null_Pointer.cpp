#include <iostream>
using namespace std;

int main()
{

    // NULL pointer
    int *ptr = NULL;
    cout << "Address of ptr: " << &ptr << endl; // 0x6a6c5ffa78
    cout << "Value of ptr: " << ptr << endl;    // 0

    return 0;
}