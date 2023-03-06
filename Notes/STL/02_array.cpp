/*
    *) std::array:
        -> syntax: std::array<T, N> array;
            -> 'T' : type
            -> 'N' : size
        -> std::array is a class
        -> std::array is a container that encapsulates fixed size arrays.
        -> array size is needed at compile time.
        -> Assign by value is actually by value.
            -> when you will pass this array to the function you will get the copy of the array that you passed
            -> it means that we will not get the pointer of the array
            -> change in array passed on function is not reflect to the original array that we pass on argument
            -> means, it is a pass by value
        -> Throw exception if we will try to access non existing index element, which is not possible on default cpp array
        -> Access Element:
            a> at()
            b> []
            c> front() // return first element
            d> back() // return last element
            e> data() // give access to the underlying array, return actual pointer of array
        -> EX: of array class could be like this
            template <class T, class N>
            class array
            {
                T arr[N];

            public:
                // Methods
            };
*/
#include <iostream>
// include std:array
#include <array>
using namespace std;

std::array<string, 5> *get_array(std::array<string, 5> *names)
{
    // by default array that we get in function is copy by value
    // but here we are copying array by reference
    (*names)[0] = "Harry";
    for (string name : (*names))
    {
        cout << name << " ";
    }
    cout << endl;

    return names;
}

int main()
{
    // Declaration
    std::array<int, 5> arr1;
    array<int, 5> arr2;

    // Initialization
    array<int, 5> arr3 = {5, 2, 1, 3, 4}; // Initializer list
    array<int, 5> arr4{1, 2, 3, 4, 5};    // Uniform Initialization

    // Assign using initializer list
    array<int, 5> arr5;
    arr5 = {1, 2, 3, 4, 5};

    // Member functions:
    // https://en.cppreference.com/w/cpp/container/array
    // Access element:
    cout << arr5.at(3) << endl;
    cout << arr5[3] << endl;
    cout << arr5.front() << endl;
    cout << arr5.back() << endl;
    // Get size of array:
    cout << arr5.size() << endl;

    for (int i = 0; i < (int)arr5.size(); i++)
    {
        cout << arr5.data()[i];
    }
    cout << endl;

    // fill the container with specified value
    arr1.fill(10); // {10, 10, 10, 10, 10}

    // 2D array
    array<array<int, 5>, 5> arr_2d; // size 5*5
    arr_2d.fill({1, 2, 3, 4, 5});
    for (int i = 0; i < arr_2d[0].size(); i++)
    {
        for (int j = 0; j < arr_2d.size(); j++)
        {
            cout << arr_2d[i][j] << " ";
        }
        cout << endl;
    }

    // EX1:
    std::array<std::string, 5> names = {"Roman", "Razz", "Jack"};
    std::array<std::string, 5> *names2 = get_array(&names);
    (*names2)[0] = "Ram";
    for (string name : names)
    {
        cout << name << " ";
    }
    cout << endl;

    for (std::array<std::string, 5>::iterator it = (*names2).begin(); it != (*names2).end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    for (int i = 0; i < (int)(*names2).size(); i++)
    {

        cout << (*names2)[i] << " ";
    }
    cout << endl;

    return 0;
}