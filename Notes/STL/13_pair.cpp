/*
    *) std::pair
        -> Syntax: std::pair<T1, T2> obj;
        -> std::pair is a struct template that provides a way to store two heterogeneous objects as a single unit
        -> map, multimap, unorder_map, unorder_multimap can use pair to insert data into their structures.
*/

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

void print(std::pair<int, int> &obj)
{
    // Here we are getting pair type of data where first is of type 'int' & second is of type 'int'

    // now accessing the '.first' value and '.second' value from the pair
    cout << obj.first << " " << obj.second << endl;
}

int main()
{
    {
        // creating <int, int> pair and assigning value
        std::pair<int, int> obj(10, 20);
        // passing 'obj' pair into 'print' function
        print(obj);
    }
    {
        // other way to make pair using non member function
        std::pair<int, int> obj = std::make_pair(10, 20);
        print(obj);
    }

    {
        // Storing pair data into vector
        std::vector<std::pair<std::string, uint64_t>> list;
        // [("Roman",3),("Razz",4)]
        list.push_back(make_pair("Roman", 3));
        list.push_back(make_pair("Razz", 4));
        list.push_back(std::pair<std::string, int>("Jack", 5));
        list.push_back(pair("Harry", 6));

        // Iterating through vector
        for (auto &elm : list)
        {
            // Accessing pair data
            cout << elm.first << ": " << elm.second << endl;
        }
    }
}