/*
    *) std::set
        -> Syntax: std::set<T> objectName;
        -> Unique Object
        -> Sorted Order
        -> Or it can called as Ordered Set
        -> std::set is an Associative Container that contains a sorted set of unique object of type key.
        -> It is usually implemented using Red-Black Tree.
        -> Insertion, Removal, Search have logarithmic complexity.
        -> If we want to store user defined data type in set then we will have to provide compare function so that set can store them in sorted order.
        -> We can pass the order of sorting(ascending|descending) while constructing set object.
        -> It store unique element and they are stored in sorted order (Asc|Dsc)
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
    Person(float age, string name)
    {
        this->age = age;
        this->name = name;
    }

    // We have to provide the operator to compare between two person while creating set
    // for that we can provide comparision operator for this 'Person'
    bool operator<(const Person &rhs) const { return age < rhs.age; }

    // if you want to sort in descending order you can do this but this is not good practice, we will use different operator function rather
    // bool operator<(const Person &rhs) const { return age > rhs.age; }

    bool operator>(const Person &rhs) const { return age > rhs.age; }
    // because we use this function now we can use 'std::greater<Person>' while initializing the set
};

class User
{
public:
    std::string name;
    std::int64_t id;

    User(std::int64_t id, std::string name)
    {
        this->name = name;
        this->id = id;
    }
    bool operator<(const User &user) const
    {
        return this->id < user.id;
    }
    bool operator>(const User &user) const
    {
        return this->id > user.id;
    }
};

int main()
{
    // Set Sorted, Unique in ascending order
    set<int> Set = {3, 2, 1, 4, 5, 1, 2, 3, 4, 5};
    // here Set store 1 2 3 4 5

    for (const auto &e : Set)
    {
        cout << e << " ";
        // Output: 1 2 3 4 5
    }
    cout << endl;

    // Set Sorted, Unique in descending order
    std::set<int, std::greater<int>> Set2 = {3, 2, 1, 4, 5, 1, 2, 3, 4, 5};
    std::set<int, std::greater<>> Set3 = {3, 2, 1, 4, 5, 1, 2, 3, 4, 5};

    // Comparing and sorting of built in datatype is easy

    // Comparing and sorting of user defined data type
    set<Person, std::greater<Person>> PersonSet = {{25, "Rupesh"}, {30, "Harry"}, {22, "Jhon"}};
    // for this we have to provide the operator function inside 'Person' class to compare 'Person'

    // set<Person, std::less<Person>> PersonSet = {{25, "Rupesh"}, {30, "Harry"}, {22, "Jhon"}};

    for (const auto &e : PersonSet)
    {
        cout << e.age << " " << e.name << " ";
    }
    cout << endl;

    // Methods:
    std::set<User, std::greater<User>> users = {{1, "roman"}, {2, "razz"}};

    // Insert new element and it will sort according to the inserted element
    users.insert({0, "jack"});

    std::cout << "Size: " << users.size() << std::endl;
    std::cout << "Is Empty: " << users.empty() << std::endl;

    // Iterator
    std::set<User>::iterator itb = users.begin();
    auto ite = users.end();

    for (User user : users)
    {
        std::cout << user.id << ": " << user.name << std::endl;
    }
    std::cout << std::endl;
    return 0;
}