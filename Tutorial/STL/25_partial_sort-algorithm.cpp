/*
    *) std::partial_sort
        -> partial_sort rearrange element such that the range [first, middle) contains the sorted elements
            -> [ , ] : including
            -> ), ( : excluding
        -> The order of equal elements is not guaranteed to be preserved.
        -> The order of remaining element is unspecified.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>
using namespace std;

int main()
{

    // 1. Sort with integral Data type
    std::vector<int> vec{5, 4, 6, 7, 3, 2, 8, 9, 1};
    // partial_sort(<from_start>,<to_end>,<end_of_container>)
    std::partial_sort(vec.begin(), vec.begin() + 4, vec.end());
    // Here we are providing 3 argument where
    // 1st args means sort from given index
    // 2nd args means sort upto given index
    // 3rd args means cover all the element for sorting
    // so we have given 'vec.begin()+4' means 4th index element = 3
    // so we are sorting upto 3rd index element

    for (auto elm : vec)
    {
        cout << elm << " ";
        // 1 2 3 4 7 6 8 9 5
        //       |
        // sorted upto 3rd index position
    }
    cout << endl;

    std::vector<int> vec2{5, 4, 6, 7, 8, 9, 3, 2, 1};
    // Now here we are not covering all the element in the vector for sorting
    std::partial_sort(vec2.begin(), vec2.begin() + 4, vec2.end() - 2);

    for (auto elm : vec2)
    {
        cout << elm << " ";
        // 3 4 5 6 8 9 7 2 1
        //       |
        // sorted upto 3rd index position
        // and sorting algo only cover upto 6th index = 3 elm
    }
    cout << endl;

    // In descending order with parallel execution policy
    std::partial_sort(std::execution::par, vec2.begin(), vec2.begin() + 4, vec2.end() - 2, std::greater<int>());

    // Todo.
    // 2. Sorting user defined data types
    // 3. Sort using a function object
    // 4. Sort using lambda expression
    return 0;
}