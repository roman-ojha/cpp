
#include <iostream>
using namespace std;

// Passing pointer to function
void sum(int *a, int *b, int *c)
{
    // here we are getting the pointer variable which point to the memory location of the same variable 'a' & 'b' that we pass here
    // this is call as the pass by reference

    // here now we have to dereference to get the value of the pointer
    cout << "Sum function: " << endl;
    *c = *a + *b;
    // now the value of *c got changed and we don't have to return the value
}

void passingArray(int *arr1, int arr2[], int n)
{
    // here we are getting array in different way
    // one is using pointer
    // another is using array type

    for (int i = 0; i < n; i++)
    {
        cout << "Arr1 " << i << ": " << arr1[i] << endl;
        cout << "Arr2 " << i << ": " << arr2[i] << endl;
    }
}

int main()
{

    // Passing pointer to function:
    int a = 3, b = 4, c;
    // here we are passing the address of the variables
    sum(&a, &b, &c);
    cout << "Sum: " << c << endl; // 7

    // Passing array
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    passingArray(arr1, arr2, 3);
    return 0;
}