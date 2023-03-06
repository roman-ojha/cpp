/*
    *) emplace
        -> All the containers supports insert and emplace operation to store data.
        -> Emplace is used to construct object in-place and avoids unnecessary copy of objects
        -> Insert adn Emplace is equal for primitive data type but when we deal with heavy object we should use emplace if we can for efficiency.
*/

#include <iostream>
#include <set>
using namespace std;

class A
{
public:
    int x;

    // Called when we construct the object
    A(int x = 0) : x{x} { cout << "Construct" << endl; };

    // Called when we make a copy of the object
    A(const A &rhs)
    {
        x = rhs.x;
        cout << "Copy" << endl;
    }
};

// '<' operator overloading for 'A' type of object
bool operator<(const A &lhs, const A &rhs) { return lhs.x < rhs.x; }

int main()
{
    set<A> Set;

    // Creating 'A' type of object
    // Here we are constructing the object
    A a = A(1);
    // Output: Construct

    // Now we will insert 'a' object int 'Set'
    // And here it will insert the copy of the object
    Set.insert(a);
    // Output: Copy

    // Or you can do this so that it can construct and copy the object
    Set.insert(A(11));
    /*
    Output:
        Construct
        Copy
    */

    // But if you don't want to make a copy of the object in that case you can use 'emplace'
    // So what you will do is you will just pass the argument value that you pass while construct the object int 'emplace' function
    Set.emplace(2);
    // Output: Construct
    // here we pass '2' value which will call the Constructor function for 'A' automatically and insert that into 'Set'

    return 0;
}
