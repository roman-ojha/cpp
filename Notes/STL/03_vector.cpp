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
    std::vector<std::string> names{"roman", "razz", "hari", "harry", "ram", "sita"};

    // Insert at the end of the vector
    names.push_back("tom");
    names.push_back("sita");

    // Insert into specific position
    names.insert(names.begin(), "Anny");
    names.insert(names.begin() + 3, "Anny");

    std::vector<std::string>::iterator itb = names.begin();
    std::vector<std::string>::iterator ite = names.end();

    std::cout << "Begin: " << (*names.begin()) << std::endl;
    // Begin: Anny
    std::cout << "End: " << (*(names.end() - 1)) << std::endl;
    // End: Sita

    std::cout << "At 3: " << names.at(3) << std::endl;
    std::cout << "At 4: " << names[4] << std::endl;

    names.pop_back();

    std::cout << "Front: " << names.front() << std::endl;
    // Front: Anny
    std::cout << "Back: " << names.back() << std::endl;
    // Back: tom

    std::cout << "Size: " << names.size() << std::endl;
    // Size: 9

    std::cout << "Max Size: " << names.max_size() << std::endl;
    // Max Size: 288230376151711743

    std::cout << "Capacity: " << names.capacity() << std::endl;
    // Capacity: 12

    names.shrink_to_fit();
    std::cout << "Capacity: " << names.capacity() << std::endl;
    // Capacity: 9

    // return the underlying array pointer
    std::string *data = names.data();
    std::cout << *(data + 1) << std::endl;
    // roman

    for (std::string name : names)
    {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    for (auto it = names.begin(); it != names.end(); it++)
    {
        std::cout << (*it) << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < (int)names.size(); i++)
    {
        std::cout << names[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}