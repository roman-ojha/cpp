/*
    *) std::multiset
        -> Syntax: std::multiset<T> objectName;
        -> std::multiset is an Associative Container that containers a sorted set of duplicate objects of type key.
        -> It is usually implemented using Red-Black Tree.
        -> Insertion, Removal, Search have logarithmic complexity.
        -> If we want to store user defined data type in multiset then we will have to provide compare function so that multiset can store them in sorted order.
        -> We can pass the order of sorting(ascending|descending) while constructing set object.
        -> multiset is similar to set except it can have multiple element with same value
        -> std::greater<type>  (descending order) Or,  std::greater<> (automatic type)
        -> std::less<type> (ascending order, default)
 */

#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

class Person
{
public:
    float age;
    string name;

    // We have to provide the operator to compare between two person while creating set
    // for that we can provide comparision operator for this 'Person'
    bool operator<(const Person &rhs) const { return age < rhs.age; }

    // if you want to sort in descending order you can do this but this is not good practice, we will use different operator function rather
    // bool operator<(const Person &rhs) const { return age > rhs.age; }

    bool operator>(const Person &rhs) const { return age > rhs.age; }
    // because we use this function now we can use 'std::greater<Person>' while initializing the set
};

int main()
{
    // Initialized and assign multiset value
    std::multiset<int> multiSet1 = {5, 2, 4, 3, 2, 5};
    for (const auto &e : multiSet1)
    {
        cout << e << " ";
        // Output: 2 2 3 4 5 6
    }
    cout << endl;

    // Default ascending order
    std::multiset<int, std::less<>> multiSet2 = {5, 2, 4, 3, 2, 5};

    // Descending order
    std::multiset<int, std::greater<>> multiSet3 = {5, 2, 4, 3, 2, 5};
    // Insert new value
    multiSet3.insert(20);

    // multiset of User defined data type
    multiset<Person, std::greater<>> personMultiSet = {{25, "Rupesh"}, {20, "Hitesh"}, {20, "Jack"}};
    // NOTE: if we will not provide <, > operator overloading function inside class then it won't be able to compare these object
    for (const auto &e : personMultiSet)
    {
        cout << e.name << " " << e.age << endl;
    }

    // Methods:
    // ToDo.
    return 0;
}