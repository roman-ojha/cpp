#include <iostream>
#include <stdio.h>
using namespace std;

// including vector:
#include <vector>

/*
Member functions
(constructor)

constructs the vector
(public member function)
(destructor)

destructs the vector
(public member function)
operator=

assigns values to the container
(public member function)
assign

assigns values to the container
(public member function)
get_allocator

returns the associated allocator
(public member function)
Element access
at

access specified element with bounds checking
(public member function)
operator[]

access specified element
(public member function)
front

access the first element
(public member function)
back

access the last element
(public member function)
data

direct access to the underlying array
(public member function)
Iterators
begin
cbegin

(C++11)

returns an iterator to the beginning
(public member function)
end
cend

(C++11)

returns an iterator to the end
(public member function)
rbegin
crbegin

(C++11)

returns a reverse iterator to the beginning
(public member function)
rend
crend

(C++11)

returns a reverse iterator to the end
(public member function)
Capacity
empty

checks whether the container is empty
(public member function)
size

returns the number of elements
(public member function)
max_size

returns the maximum possible number of elements
(public member function)
reserve

reserves storage
(public member function)
capacity

returns the number of elements that can be held in currently allocated storage
(public member function)
shrink_to_fit

(C++11)

reduces memory usage by freeing unused memory
(public member function)
Modifiers
clear

clears the contents
(public member function)
insert

inserts elements
(public member function)
emplace

(C++11)

constructs element in-place
(public member function)
erase

erases elements
(public member function)
push_back

adds an element to the end
(public member function)
emplace_back

(C++11)

constructs an element in-place at the end
(public member function)
pop_back

removes the last element
(public member function)
resize

changes the number of elements stored
(public member function)
swap

swaps the contents
(public member function)
*/

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // size() => returns the number of elements
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // we know that we if array have size of 10 and need to import in 11 index then we have to make another array and copy there
    // but here vector manage the size automatically
    // Docs: https://en.cppreference.com/w/cpp/container/vector

    // Ways to create a vector
    // vector<int> vec1;
    vector<float> vec1; // Zero length float vector

    float element;
    int size;
    cout << "Enter the size of you vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
        // push_back() => adds an element to the end
    }
    vec1.pop_back();
    // pop_back() => removes the last element
    display(vec1);

    // insert method()
    // making an iterator
    vector<float>::iterator iter = vec1.begin();
    // vec1.begin() => here we iterator will point to the first element
    // to inserts elements
    vec1.insert(iter, 566);
    // inserting in beginning
    // vec1.insert(vec1.begin(), 566);
    vec1.insert(iter + 1, 300);
    // insert in index 1
    vec1.insert(iter + 2, 3, 150);
    // insert(<iterator>,<no. of copy>, <value>)
    display(vec1);
    printf("%f\n", vec1.at(4));

    // other Ways to create a vector
    vector<char> vec2(4); // 4-element character vector
    vec2.push_back(5);
    // display(vec2);
    vector<char> vec3(vec2); // 4-element character vector from vec2
    // display(vec3);
    vector<int> vec4(6, 13); // 6-element vectory of 3s
    // vec4(<no.of element>, <vlaue>)
    display(vec4);
    cout << vec4.size() << endl;

    return 0;
}