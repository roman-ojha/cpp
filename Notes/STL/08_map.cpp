/*
    *) std::map
        -> Syntax: std::map<T1, T2> obj; // Where T2 is key type and T2 is value type
        -> std::map is associative container that store element in key value combination
        -> key should be unique
        -> It is implement using Self-Balance Binary Search Tree(AVL/Red Black Tree)
            -> because it store data in Binary search tree, and we know the condition that should follow to become binary search tree.
            -> so while searching key, it would be faster.
        -> so, NOTE: that whatever data that we are inserting into map it should be comparable so that while searching or inserting the data it can take the decision.
        -> It store key value pair in sorted order on the basis of key (ascending/descending).
        -> std::map is generally used in Dictionary type problems.
*/

#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;

int main()
{
    // creating map using built in datatype
    std::map<string, int> Map;
    // map<<key_type>,<value_type>>
    // Because we are using 'string' type it have the comparision function to compare between two string to insert that and create a BST(AVL/RBT)

    // Inserting value int map
    Map["Roman"] = 01;
    Map["Jack"] = 02;
    Map["Harry"] = 03;
    Map["Hari"] = 04;
    Map.insert(std::make_pair("Ram", 05));
    // Loop through map
    for (auto &el1 : Map)
    {
        cout << el1.first << " " << el1.second << endl;
        // Output in Ascending order based on Key
        /*
            Hari 4
            Harry 3
            Jack 2
            Ram 5
            Roman 1
        */
    }
    // If you want single value
    cout << "Jack: " << Map["Jack"] << endl;
    // Resigning the previous key value
    Map["Jack"] = 10;
    cout << "Jack: " << Map["Jack"] << endl;

    // Specifying Map on Descending order
    std::map<string, int, std::greater<>> Map2;
    // Specify the type through which you want to compare in std::greater<>
    std::map<string, int, std::greater<string>> Map3;
    // Ascending order:
    std::map<string, int, std::less<>> Map4;
    Map2["Roman"] = 1;
    Map2["Jack"] = 2;
    Map2["Harry"] = 3;
    Map2["Hari"] = 4;
    for (auto &el1 : Map2)
    {
        cout << el1.first << " " << el1.second << endl;
        // Output in Descending order based on Key
        /*
            Roman 1
            Jack 2
            Harry 3
            Hari 4
        */
    }

    map<string, vector<int>, std::less<>> Map5;
    // here we pass value as vector<int> type it means to insert or to do operation for value we have to use 'vector' type method
    // Insert value into vector<int> type
    Map5["Roman"].push_back(10);
    Map5["Roman"].push_back(20);
    for (auto &el1 : Map5)
    {
        cout << el1.first << ": ";
        // Loop to iterate over vector<int> type value
        for (auto &el2 : el1.second)
        {
            cout << el2 << " ";
            // Output: Roman: 10 20
        }
        cout << endl;
    }

    // For User Define data type:
    // ToDo.

    // Methods:
    // ToDo.
}