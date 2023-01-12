/*
    *) std::is_sort
        -> Check if the elements is range (first, last) are sorted in non-descending order
        => Types:
            1. Sorting integral data types
            2. Sorting user defined data types
            3. Sort using a function object
            4. Sort using lambda expression
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // 1. Sorting integral data types
    std::vector<int> vec{5, 4, 6, 7, 3, 2, 8, 9, 1};
    std::sort(vec.begin(), vec.end());

    for (auto elm : vec)
    {
        cout << elm << " ";
        // 1 2 3 4 5 6 7 8 9
    }
    cout << endl;

    // is_sort(<start_position>,<end_position>)
    // Check is the given vector is sorted or not in ascending order
    cout << std::is_sorted(vec.begin(), vec.end()) << endl;
    // Output: 1

    // Sorting in descending order
    std::sort(vec.begin(), vec.end(), greater<int>());
    // Check is the given vector is sorted or not in ascending order
    cout << std::is_sorted(vec.begin(), vec.end()) << endl;
    // Output: 0

    // Check is the given vector is sorted or not in ascending order
    cout << std::is_sorted(vec.begin(), vec.end(), std::greater<int>()) << endl;
    // Output: 1

    // Todo.
    // 2. Sorting user defined data types
    // 3. Sort using a function object
    // 4. Sort using lambda expression
    return 0;
}