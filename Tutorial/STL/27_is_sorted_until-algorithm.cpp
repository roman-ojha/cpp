/*
    *) std::is_sorted_until
        -> Finds how many elements are sorted in given range [first, last)
        -> We can find the number of element that are sorted from starting position to the last position
            -> EX:
                -> 2, 3, 4, 1, 6, 8
                -> here only upto 3rd element 2nd index the element are sorted
        => Supports Types:
            1. Sorting integral data types
            2. Sorting user defined data types
            3. Sort using a function object
            4. Sort using lambda expression
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec{4, 3, 2, 6, 7, 8, 1};
    auto it = is_sorted_until(vec.begin(), vec.end());
    auto diff = distance(vec.begin(), it);
    cout << "The number of element that are sorted is upto: " << diff << endl;
    // The number of element that are sorted is upto: 1
    // 'it' is point on 1st index = 3 element
    // because only 0th index is consider sorted it will return 1
    vector<int> vec2{2, 3, 4, 6, 7, 8, 1};
    auto it2 = is_sorted_until(vec2.begin(), vec2.end());
    auto diff2 = distance(vec2.begin(), it2);
    cout << "The number of element that are sorted is upto: " << diff2 << endl;
    // The number of element that are sorted is upto: 6

    // In descending order
    vector<int> vec3{3, 2, 4, 6, 7, 8, 1};
    // 3, 2 are sorted in descending order
    auto it3 = is_sorted_until(vec3.begin(), vec3.end(), greater<int>());
    auto diff3 = distance(vec3.begin(), it3);
    cout << "The number of element that are sorted is upto: " << diff3 << endl;
    // The number of element that are sorted is upto: 2

    return 0;
}