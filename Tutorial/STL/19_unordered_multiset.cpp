/*
    *) std::unordered_multiset
        -> Not unique object
        -> Not sorted order
        -> std::unordered_multiset is a associative container that contain set of possibly non-unique objects.
        -> Search, insertion and removal have average constant-time complexity.
        -> Internally, the element are organized into buckets.
        -> It uses hashing to insert element into buckets.
        -> This allows fast access to individual element, because after computing the hash of the value it refers to the exact bucket the element is placed into.
        -> maintain a collection of non-unique items with fast insert and removal.
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    std::unordered_multiset<int> uset = {4, 1, 2, 3, 9, 4, 3, 2, 9, 8, 10};

    // Search a given element
    auto search = uset.find(2);
    if (search != uset.end())
    {
        std::cout << "Found " << (*search) << '\n';
    }
    else
    {
        std::cout << "Not found\n";
    }

    // iterating to all the unordered_set element
    for (auto &elm : uset)
    {
        cout << elm << " ";
        // Output: 10 8 9 9 3 3 2 2 1 4 4
    }
    cout << endl;

    // Count how many same element are there
    cout << "Number of 4 element are: " << uset.count(4) << endl;

    // Todo.
    // Methods:
    // Using User defined type of element
    return 0;
}