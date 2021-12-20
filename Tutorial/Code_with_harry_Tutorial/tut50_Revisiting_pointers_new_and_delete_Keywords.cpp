#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout << "The value of a is " << *(ptr) << endl;
    // *(ptr) -> derefrencing pointer

    // new operator
    // int *p = new int(40); // we are allocating memory dynamically
    float *p = new float(40.78); // this is also the way to make a int variable and store address of variable in pointer variable
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3]; //we are making intiger array
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // delete operator
    // delete arr; // we are deleting the contiguos block of memeoy and dynamically allocated memory and free them
    // delete[] arr; // if you want to delete all contiguous block of memory and free them then you have to do this
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}