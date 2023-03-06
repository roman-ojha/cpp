/*
    *) std::unordered_map
        -> std::unordered_map is an associative container that contains key-value pairs with unique keys.
        -> Search, insertion, and removal have average constant-time complexity.
        -> Internally, the element are organized into buckets.
        -> It uses hashing to insert element into buckets.
        -> This allows fast access to individual elements, because after computing the hash of the value it refers to the exact bucket the element it placed into.
        => different Map & u_map
            1> Map:
                -> Store using RBT
                -> Sorted order based on key
            2> Unordered_map:
                -> Store using Hashing & Bucket
                -> Unsorted order
        -> maintain a collection of unique {key:value} with fast insertion and removal.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    std::unordered_map<int, char> umap = {{1, 'a'}, {2, 'b'}};

    // Access
    cout << umap[1] << endl;
    cout << umap[2] << endl;

    // Update
    umap[1] = 'c';

    // Iterate
    for (auto &elm : umap)
    {
        cout << elm.first << " " << elm.second << endl;
        // Output:
        // 2 b
        // 1 c
    }

    // Find
    auto result = umap.find(2);
    if (result != umap.end())
    {
        std::cout << "Found " << result->first << " " << result->second << '\n';
    }
    else
    {
        std::cout << "Not found\n";
    }

    // Todo.
    // Methods:
    // Using User defined type of element
    return 0;
}