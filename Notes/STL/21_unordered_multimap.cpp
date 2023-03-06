/*
    *) std::unordered_multimap
        -> Unordered multimap is a unordered associative container that supports equivalent keys
        -> an unordered multimap may contain multiple copies of each key value
        -> it associates value of another type with the keys.
        -> Search, insertion, and removal have average constant-time complexity.
        -> Internally, the element are organized into buckets.
        -> It uses hashing to insert element into buckets.
        -> This allows fast access to individual elements, because after computing the hash of the value it refers to the exact bucket the element it placed into.
        -> So, It Maintain a collection of duplicate {key:value} pairs with the fast insertion and removal
 */

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    std::unordered_multimap<int, char> umm = {{5, 'd'}};
    umm.insert({1, 'a'});
    umm.insert(std::pair<int, char>(2, 'b'));
    umm.insert(std::make_pair(3, 'c'));
    umm.insert(std::make_pair(3, 'c'));

    for (auto &elm : umm)
    {
        cout << elm.first << " " << elm.second << endl;
    }

    // Todo.
    // Methods:
    // Using User defined type of element
    return 0;
}