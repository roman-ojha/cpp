#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // [row][column]
    // Assign
    arr[0][0] = 10;

    // Access:
    int ar = arr[0][0];
    return 0;
}