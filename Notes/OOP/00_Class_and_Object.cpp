#include <iostream>
using namespace std;

// Class
class User
{
    int id;
    string name;

public:
    // Constructor
    User(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
};

int main()
{
    // Initialized & creating object of the User type of data
    User u1(1, "roman");

    // Another way to initialized Class type of data by passing int constructor value into {} in order they required
    User u2 = {2, "jack"};

    // Array of object
    User u3[] = {{3, "razz"}, {4, "harry"}};
    return 0;
}