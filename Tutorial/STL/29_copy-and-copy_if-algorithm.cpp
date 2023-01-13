/*
    *) std::copy and std::copy_if
        -> std::copy copies the element in the range, defined by [first, last), to another range beginning at d_first.
        -> copy if only copies if predicated returns true.
        -> if source and destination range are overlapping then the behaviour is undefined.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <numeric>
using namespace std;

// function to print the vector using std::copy
void print(vector<int> &vec)
{
    // printing the vector using std::copy
    std::copy(vec.begin(), vec.end(), ostream_iterator<int>(std::cout, " "));
    cout << endl;
    // or we can use iterator to access the vector element as well
}

int main()
{
    vector<int> from_vector(10);
    // inserting value from 0 upto 'from_vector.end()' incrementally
    iota(from_vector.begin(), from_vector.end(), 0);

    vector<int> to_vector1(from_vector.size());
    // copying 'from_vector' value from 0th index to the last index to 'to_vector1' start from 0th index
    copy(from_vector.begin(), from_vector.end(), to_vector1.begin());
    // printing the vector where we copy the value
    print(to_vector1);

    // Or, alternatively
    // here we will not specify the size of the vector initially
    vector<int> to_vector2;
    // because of that we will use 'back_inserter'
    copy(from_vector.begin(), from_vector.end(), back_inserter(to_vector2));
    print(to_vector2);

    // Or we can just use assignment operator to copy one container element to another
    vector<int> to_vector = from_vector;
    // The only benefit that we have using std::copy is we can partially copy the element from the container
    print(to_vector);

    // copy_if algorithm if we want to copy according to the condition
    vector<int> to_vector3(5);
    copy_if(from_vector.begin(), from_vector.end(), to_vector3.begin(), [](int x)
            {
                // now here we will use lambda expression for checking the value that we are copying
                // return true will copy
                // return false will not copy
                // return (x % 2) == 1; // this is costly process
                // Copying only odd number

                return (x & 1);
                // another way to check odd number
            });
    print(to_vector3);

    return 0;
}