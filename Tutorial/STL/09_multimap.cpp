/*
    *) std::multimap
        -> std::multimap<T1, T2> obj; // Where T1 is key type and T2 is value type.
        -> Multimap is a associative container that contains a sorted list of key-value pairs, while permitting multiple entries with the same key.
        It store key value pair in sorted order on the basis of key (ascending/descending).
            -> Syntax: std::multimap<char, int, std::greater<>> Multimap;
        -> Data structure used in multimap is not defined by standard, but red-black tree is assumed by most of the people
        -> Lookup: count, find, contains, equal_range, lower_bound, upper_bound
        -> We don't have at() and [] functions to get element like we had in std::map.
        -> EX:
            key => value
            1   => One
            2   => Two
            1   => One1
            2   => Tow2
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    // <<key_type>, <value_type>>
    std::multimap<char, int> Multimap;

    // Different way to insert into multimap
    Multimap.insert(std::make_pair('a', 1));
    Multimap.insert(make_pair('a', 2));
    Multimap.insert(std::pair<char, int>('b', 5));
    Multimap.insert(pair<char, int>('b', 4));
    Multimap.insert(make_pair('a', 3));

    // Iterate over multimap
    for (auto &elm : Multimap)
    {
        cout << elm.first << ": " << elm.second << endl;
        // Output in ascending order
        /*
            a: 1
            a: 2
            a: 3
            b: 5
            b: 4
        */
    }

    // In Descending order
    std::multimap<char, int, std::greater<>> Multimap2;

    // Get all the pairs of given key
    auto range = Multimap.equal_range('a');
    // Iterating over the range that we get
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << " " << it->second << endl;
        // Output
        /*
            a 1
            a 2
            a 3
        */
    }

    // specifying storing range type:
    std::pair<multimap<char, int>::iterator, multimap<char, int>::iterator> range2 = Multimap.equal_range('a');
    // while calling 'equal_range('<key>')' we get 'std::pair<multimap<char, int>::iterator, multimap<char, int>::iterator>' type
    // It means 'pair<"hold first pair in this case ('a', 1)", "hold last pair in this case ('b', 5) just after 'a' complete">

    cout << range2.first->first << ": " << range2.first->second << endl;
    // Output a: 1
    cout << range2.second->first << ": " << range2.second->second << endl;
    // Output b: 5

    // so we want to just iterate upto key 'a' so we will not go upto 'range2.second'
    // So we can iterate from first to last using this loop:
    for (multimap<char, int>::iterator it = range2.first; it != range2.second; ++it)
    {
        cout << it->first << ": " << it->second << endl;
        // Output
        /*
            a 1
            a 2
            a 3
        */
    }

    // Lookup methods:
    cout << "Count: " << Multimap.count('a') << endl; // number of same given key available in multimap
    // Output, Count: 3

    // find will return single pair of data with given key
    auto data = Multimap.find('a');
    cout << "Find: " << data->first << " " << data->second << endl;
    // Output, Find: a 1

    // lower_bound:
    auto data2 = Multimap.lower_bound('a');
    cout << "Lower Bound: " << data2->first << " " << data2->second << endl;
    // Output, Lower Bound: a, 1

    // upper_bound:
    auto data3 = Multimap.upper_bound('a');
    cout << "Upper Bound: " << data3->first << " " << data3->second << endl;
    // Output, Upper Bound: b, 5

    return 0;
}
