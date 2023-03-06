#include <iostream>
using namespace std;

int main()
{
    // Array:
    // store groups of information
    // in c++ we have to specify what type of information you want to store
    // we can access the value or element of the array using index start from 0 upto (size of array - 1)

    // syntax:
    // we can to specify the size of the array
    int arr[3] = {1, 2, 3};

    // here it will automatically identify the size of the array
    int grades[] = {1, 2, 3, 4};
    int grade1 = grades[3]; // 4th element

    // we can get the length of the array:
    int gradesLength = end(grades) - begin(grades);
    gradesLength = sizeof(grades) / sizeof(grades[0]);
    gradesLength = *(&grades + 1) - grades;
    //*(&grades + 1) is the address of the next memory location
    // just after the last element of the array
    cout << "Length: " << gradesLength;

    // creating array using new keyword
    // dynamically allocating memory on runtime using new keyword
    // for that we use pointer variable
    int *arr = new int[5];
    arr[0] = 30;
    arr[1] = 20;
    // arr[5] // error, output of bound exception

    return 0;
}