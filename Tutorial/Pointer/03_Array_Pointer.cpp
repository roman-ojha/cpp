#include <iostream>
using namespace std;

int main()
{
    // Array pointer:
    int arr[] = {10, 20, 30};
    int *arrPtr = arr;       // point to the first index
    arrPtr++;                // point to the second index
    arrPtr++;                // point to the third index
    cout << *arrPtr << endl; // 3rd index value = 30

    // pointing to last index
    int sizeOfArr = 3;
    int *arrPtr2 = &arr[sizeOfArr - 1];
    arrPtr2--;                // pointing to 2nd index
    cout << *arrPtr2 << endl; // second index value = 20
    return 0;
}