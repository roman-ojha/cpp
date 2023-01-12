/*
    *) Algorithm:
        -> STL algorithms library define function for variety of purpose:
            1. searching
            2. sorting
            3. counting
            4. manipulating
            5. etc..
        -> Algorithm are applied to range of element.
        -> <algorithm> header is used tog et all algorithms in stl.
*/

// EX:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec{4, 3, 5, 2, 6, 1};

    // find(<front_where>, <upto_where>,<element_to_find>) algorithm
    std::vector<int>::iterator it = std::find(vec.begin(), vec.end(), 4);
    // so here we are searching the whole vector
    // so, if we are giving the element '4' to find in that case the iterator will point to vector 0th index

    // Now we will check does we find the element
    if (it == vec.end())
    {
        // If we search and the iterator goes upto vec.end() it means it didn't find the element
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}