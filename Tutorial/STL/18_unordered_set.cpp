/*
    *) std::unordered_set
        -> Unique objects.
        -> Not Sorted.
        -> Unordered set is a associative container that contains set of unique objects.
        -> Search, insertion, and removal have average constant-time complexity.
        -> Internally, the element are organized into buckets.
        -> It uses hashing to insert element into buckets.
        -> This allow fast access to individual elements, since once a hash is computed, it refers to the exact bucket the element is placed into.
        -> maintain a collection of unique items with fast insertion and removal.
        -> EX:
            -> element [1.0, 3.1, 4.2, 6.9, 8.1, 9.2, 10.0]
            -> put into bucket number same as the floating number elements have
            -> fun(val);
            -> bucket 0 : [1.0, 10.0]
            -> bucket 1 : [3.1, 8.1]
            -> bucket 2 : [4.2, 9.2]
            -> bucket 9 : [6.9]
            -> The is not the exact process that it use to insert the element into bucket but idea is same.
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    std::unordered_set<int> uset = {4, 1, 2, 3, 4, 2, 3};

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
    }
    cout << endl;
    return 0;
}