/*
    -> When we create our own data structure in that case we can use iterator to iterate through that data structure.
    -> So, when you have a complex data structure where we can't be able to access element using index in that case we need an iterator
*/

#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (int elm : vec)
        cout << elm << " ";
    cout << endl;

    // Todo.
    // https://www.youtube.com/watch?v=F9eDv-YIOQ0
    // NOTE: first I have to learn './35_writing_own_vector.cpp' to continue this one

    return 0;
}
