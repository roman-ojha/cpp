/*
    *) Iterator:
        -> it is a way to iterate over a collection of elements.
        -> you can create iterator for our one use define data type, same as operator overloading.
        -> in most of the case we use iterator to iterator over some kind of data structure, EX: vector, tree, set, map etc ...
        => Types:
            1. iterator
                -> normal iterator where we can use range based for loop to iterator over element
                -> it iterate element in froward direction
                -> start ---iterate---> end
            2. reverse_iterator
                -> it iterate element in backward direction
                -> end ---iterate---> start
            3. const_iterator
                -> it is same is 'iterator' but we can use this on const type collection EX: const vector<int>
                -> you can use this when you don't want to modify the element using iterator and you just want to access it
            4. const_reverse_iterator
                -> it is same is 'reverse_iterator' but we can use this on const type collection EX: const vector<int>
                -> you can use this when you don't want to modify the element using iterator and you just want to access it
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    // creating the data structure that contain the collection of element
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    // now to access every element one by one we can iterator through it

    // Most common way to access element from the collection is using for loop
    for (int i = 0; i < (int)vec.size(); i++)
    {
        cout << vec.at(i) << " ";
        // cout << vec[i] << " ";
    }
    cout << endl;

    // Or we can use range based for loop
    // for(<data_type> <current_element>: <collection>)
    for (int elm : vec)
    {
        // so what did range for loop make work for the vector class?
        // so vector class contain the iterator that make range based for loop work to iterator over element
        cout << elm << " ";
    }
    cout << endl;

    // so vector class contain '.begin()' and '.end()' function that return the iterator at a particular position
    std::vector<int>::iterator it = vec.begin();
    // so here we are getting the iterator at some position

    // now can access the value of 'vec.begin()' pointed iterator using dereferencing
    cout << (*it) << endl;

    // or we we can iterate over element from 'vec.begin()' to 'vec.end()' using for loop
    // 'vec.end()' is the element after the last element
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        // to get the value on that iterator we have to dereference the iterator
        cout << (*it) << " ";
    }
    cout << endl;

    // we can use normal for loop in some container like: vector, array where we can get the value based on index system
    // like: vec[i] where we can get the ith element from vector

    // but some case we don't have index system or we can't access element using index
    // EX: tree, list, set, map

    // storing element inside unordered_map where we can't access element using index system
    std::unordered_map<std::string, int> map;
    map["Roman"] = 3;
    map["Razz"] = 4;
    map["Harry"] = 5;
    // to iterator or access each element from the this map we can't use normal for loop and try to access the element using index
    // because of that we have to use ::iterator using for loop
    for (std::unordered_map<std::string, int>::const_iterator it = map.begin(); it != map.end(); it++)
    {
        // because map contain the key -> value pair in form of 'first' & 'second'
        // to get the value using iterator we ca dereference (*) or we can use -> operator
        auto &key = it->first;
        auto &value = (*it).second;
        cout << key << ": " << value << endl;
    }
    cout << endl;

    // using range based for loop with map
    for (auto elm : map)
    {
        auto &key = elm.first;
        auto &value = elm.second;
        cout << key << ": " << value << endl;
    }
    cout << endl;

    // we can every get the key and value inside into for loop using structured binding
    for (auto [key, value] : map)
    {
        cout << key << ": " << value << endl;
    }
    cout << endl;

    return 0;
}