/*
    *) std::iota
        -> Fill the range [first, last) with sequentially increasing values.
        -> starting with value and repetitively evaluating ++value.
        -> So you can put data int container incrementally
*/

#include <iostream>
#include <algorithm>
#include <list>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    list<int> lst(10);
    // iota(<from>,<to>,<assign_<int>_value>)
    std::iota(lst.begin(), lst.end(), -4);
    // So here we are iterating from 0th index to the last index in 'lst'
    // and we are assigning '-4' value for lst.begin()
    // and incrementing the value by 1
    // and placing the increment value iteratively into the list upto 'lst.end()'

    for (auto elm : lst)
        cout << elm << " ";
    // -4 -3 -2 -1 0 1 2 3 4 5
    cout << endl;

    // Creating the vector same size as 'lst' have
    // But ti will going to store the iterator of list upto size of 'lst'
    vector<list<int>::iterator> vec(lst.size());
    // and here we are taking from 'vec.being()' to 'vec.end()'
    // and take 'lst.begin()' value for iterator value
    std::iota(vec.begin(), vec.end(), lst.begin());
    // now 'lst.begin()' is an iterator and point to the 0th index
    // and vec store the iterator of list<int>
    // when 'std::iota' increment the vec element will store the iterator of 'lst' incrementally
    // means if we will get the value where specific vector index element pointing
    // we will get the same value in that index as the index of the 'lst' element

    for (auto elm : vec)
        cout << *elm << " ";
    // -4 -3 -2 -1 0 1 2 3 4 5
    cout << endl;

    return 0;
}