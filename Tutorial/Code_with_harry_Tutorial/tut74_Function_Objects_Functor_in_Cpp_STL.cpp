#include <iostream>
#include <stdio.h>
using namespace std;

// including functional to use function object
#include <functional>
#include <algorithm>

int main()
{
    // Docs: https://en.cppreference.com/w/cpp/utility/functional
    // https://en.cppreference.com/w/cpp/algorithm
    // Functions Objects (functor): Function wrapped in a class so that it available like an object
    int arr[] = {54, 12, 4, 3, 1, 7};
    sort(arr, arr + 5);
    // sorting from arr to arr+5 here '7' value is not inclue in arr+5
    // sort(arr, arr + 5, plus<int>());
    // sort(arr, arr + 5, multiplies<int>());
    // sort(arr, arr + 5, negate<int>());
    // sort(arr, arr + 5, logical_not<int>());
    sort(arr, arr + 6, greater<int>());
    // sorting in desending order
    // sort(<from>,<to>,<function Object>);
    for (int i = 0; i < 6; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}