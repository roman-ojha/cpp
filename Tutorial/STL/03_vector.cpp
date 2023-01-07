/*
    *) std::vector
        -> std::vector is a sequence container and also known as Dynamic Array or Array List.
        -> It is an Array not an Linked List
        -> Faster access
        -> Can random access of element in order of O(1)
        -> Linked list: Dynamically grow in size
        -> Array: Faster access
        -> Vector: Dynamically grow in size + Faster access
        -> Its size can grow and shrink dynamically, and no need to provide size at compile time.
        -> It only allow push and pop from the end of the array
        -> Member function:
            -> https://en.cppreference.com/w/cpp/container/vector
            -> Element Access:
                a> at() // if we try to access non existing index give exception
                b> [] // if we try to access non existing index give garbage value
                c> front() // return first index of array
                d> back() // return last data of the array
                e> data() // return pointer of array

            -> Modifiers:
                a> inert() // insert elements
                b> emplace() // constructs element in-place
                c> push_back() // adds an element to the end
                d> emplace_back() // constructs an element in-place at the end
                e> pop_back() // remove the last element
                f> resize() // change the number of element stored
                g> swap() // swaps the contents
                h> erase() // erases elements
                i> clear() // clears all the elements

            -> Capacity:
                a> size() // return the number of element
                b> capacity() // return the number of element that can be held in current allocated storage, capacity >= size

        -> EX:
            -> vec.push_back(10) // let's say will create 3 size of array and push 10 in index 0
                -> | 10 |    |    |
            -> vec.push_back(20)
                -> | 10 | 20 |    |
            -> vec.push_back(22)
                -> | 10 | 20 | 22 |
            -> vec.push_back(31) // because the size of array exceed now it will create the double size of previous array means 6 size array and copy previous element
                -> | 10 | 20 | 22 | 31 |    |    |
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declarations
    // vector of type int
    std::vector<int> arr1;
    std::vector<int> arr2(5, 20); // {20, 20, 20, 20, 20}
    // arr2(<size>, <value_in_all_place>)
    vector<int> arr3 = {1, 2, 3, 4, 5}; // Initializer list
    vector<int> arr4{1, 2, 3, 4, 5};    // Uniform initialization

    // Accessing Elements
    cout << arr3[3] << endl;
    cout << arr3.at(2) << endl;
    cout << arr3.front() << endl;
    cout << arr3.back() << endl;

    // Methods:
    // ToDo.
    return 0;
}