/*
    *) std::nth_element
        -> nth_element is a partial sorting algorithm that rearrange element in [first, last] such that:
            a. The element at the nth position is the one which should be at the position if we sort the list.
            b. It doesn't sort the list, just that all the elements, which precede  the nth element are not greater than it, and all the elements after it are not less than it.
                -> EX:
                    -> arr: 2 3 3 4 5 6 6 7 9
                        lesser <- | -> greater
                    -> 3rd element = 4
                    -> all the index before the 3rd sorted element will be lesser then 4
                    -> all the index after the 3rd sorted element will be greater then 4
        -> nth_element algorithm is implemented using introselect.
            a. introselect is a hybrid of quickSelect and median of medians algorithm.
                1. quickSelect is used to find kth smallest number in an unsorted array.
                2. median of medians is a median selection algorithm for better pivot selection mainly used in quickSelect.
        => Supports Types:
            1. Sorting integral data types
            2. Sorting user defined data types
            3. Sort using a function object
            4. Sort using lambda expression
        => EX:
            -> we can find nth smallest number
            -> or we can find nth largest number
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
    std::vector<int> v{5, 6, 4, 3, 2, 6, 7, 9, 3};

    // Here we are trying to get the median sorted element
    std::nth_element(v.begin(), v.begin() + v.size() / 2, v.end());
    std::cout << "This Sorted Median is: " << v[v.size() / 2] << std::endl;
    // Sorted vector: 2, 3, 3, 4, 5, 6, 6, 7, 9
    // size = 9
    // median = 9/2 = 4
    // 4th sorted element is 5

    // here we want largest and getting 1st index element
    std::nth_element(v.begin(), v.begin() + 1, v.end(), std::greater<int>());
    std::cout << "This second largest element is " << v[1] << std::endl;

    for (auto elm : v)
    {
        std::cout << elm << " ";
        // 9 7 6 6 5 3 4 3 2
    }
    std::cout << std::endl;
    return 0;
}