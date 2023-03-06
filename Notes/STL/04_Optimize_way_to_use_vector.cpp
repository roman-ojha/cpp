/*
    *) Problem in vector?
        -> Dynamically increase size + Falster access O(1)
        -> Every time it have to double the size of array and copy the old array element into new array and it will take time
        -> the solution for this is to create the specific size of array with you given number
        -> vec.reserve(1000);
        -> here it will create 1000 size of array
        -> sometimes you now how much amount of number you could want to store in this particular vector
        -> or you can also you .resize(1000) function
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec; // Size: 0 Capacity: 0
    vec.reserve(64);
    // vec.resize(64);
    for (int i = 0; i < 32; i++)
    {
        vec.push_back(i);
        cout << "Size: " << vec.size() << " Capacity: " << vec.capacity() << endl;
        /*
        Output: Without reserve
            Size: 1 Capacity: 1
            Size: 2 Capacity: 2
            Size: 3 Capacity: 4
            Size: 4 Capacity: 4
            Size: 5 Capacity: 8
            Size: 6 Capacity: 8
            Size: 7 Capacity: 8
            Size: 8 Capacity: 8
            Size: 9 Capacity: 16
            Size: 10 Capacity: 16
            Size: 11 Capacity: 16
            Size: 12 Capacity: 16
            Size: 13 Capacity: 16
            Size: 14 Capacity: 16
            Size: 15 Capacity: 16
            Size: 16 Capacity: 16
            Size: 17 Capacity: 32
            Size: 18 Capacity: 32
            Size: 19 Capacity: 32
            Size: 20 Capacity: 32
            Size: 21 Capacity: 32
            Size: 22 Capacity: 32
            Size: 23 Capacity: 32
            Size: 24 Capacity: 32
            Size: 25 Capacity: 32
            Size: 26 Capacity: 32
            Size: 27 Capacity: 32
            Size: 28 Capacity: 32
            Size: 29 Capacity: 32
            Size: 30 Capacity: 32
            Size: 31 Capacity: 32
            Size: 32 Capacity: 32

        Output: With reserve:
            Size: 1 Capacity: 64
            Size: 2 Capacity: 64
            Size: 3 Capacity: 64
            Size: 4 Capacity: 64
            Size: 5 Capacity: 64
            Size: 6 Capacity: 64
            Size: 7 Capacity: 64
            Size: 8 Capacity: 64
            Size: 9 Capacity: 64
            Size: 10 Capacity: 64
            Size: 11 Capacity: 64
            Size: 12 Capacity: 64
            Size: 13 Capacity: 64
            Size: 14 Capacity: 64
            Size: 15 Capacity: 64
            Size: 16 Capacity: 64
            Size: 17 Capacity: 64
            Size: 18 Capacity: 64
            Size: 19 Capacity: 64
            Size: 20 Capacity: 64
            Size: 21 Capacity: 64
            Size: 22 Capacity: 64
            Size: 23 Capacity: 64
            Size: 24 Capacity: 64
            Size: 25 Capacity: 64
            Size: 26 Capacity: 64
            Size: 27 Capacity: 64
            Size: 28 Capacity: 64
            Size: 29 Capacity: 64
            Size: 30 Capacity: 64
            Size: 31 Capacity: 64
            Size: 32 Capacity: 64
        */
    }
    return 0;
}