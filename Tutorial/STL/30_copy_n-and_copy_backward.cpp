/*
    *) std::copy_n & std::copy_backward
        -> std::copy_n() function is used to copy given number of element from source to destination.
        -> std::copy_backward() function copies the element from the range, defined by [first, last), to another range ending at d_last.
            -> the element are copied in reverse order (the last element is copied first), but their relative order is preserved.
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

    // std::copy()
    vector<int> to_vector1;
    // copying 'from_vector' value from 0th index before 4th index
    std::copy_n(from_vector.begin(), 4, back_inserter(to_vector1));
    print(to_vector1);

    // std::copy_backward()
    vector<int> to_vector2(15);
    // copying the element starting from last index position
    copy_backward(from_vector.begin(), from_vector.end(), to_vector2.end());
    print(to_vector2);
    // 0 0 0 0 0 0 1 2 3 4 5 6 7 8 9

    return 0;
}