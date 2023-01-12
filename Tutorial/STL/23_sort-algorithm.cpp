/*
    *) std::sort
        -> In C++ STL we have sort function which can sort in increasing and decreasing order.
        -> Not only integral but used defined data can be sorted using this function.
        -> Internally it uses Introsort which is combination of QuickSort, HeapSort and InsertionSort.
        -> By default, it uses QuickSort but if Quicksort is doing unfair partitioning and taking more than N*logN time, it switch to HeapSort and when the array size become really small, it switch to InsertionSort.
        -> WE can use parallel execution policy for better performance.
            -> std::execution::par
            -> utilize multiple core to to sort the data
        => Types:
            1. Sorting integral data types
            2. Sorting user defined data types
            3. Sort using a function object
            4. Sort using lambda expression
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>
using namespace std;

class Point
{
public:
    int x;
    int y;
    Point(int x = 0, int y = 0) : x{x}, y{y} {}

    // '<' Operator overloading to compare two object for sorting
    // For ascending order
    bool operator<(const Point &p1) const
    {
        return (x + y) < (p1.x + p1.y);
    }

    // '>' Operator overloading to compare two object for sorting
    // For descending order
    bool operator>(const Point &p1) const
    {
        return (x + y) > (p1.x + p1.y);
    }
};

//
struct
{
    bool operator()(int a, int b) const
    {
        return a < b;
    }
} customLess;

int main()
{
    // 1. Sort with integral Data type
    std::vector<int> vec{5, 4, 6, 7, 3, 2, 8, 9, 1};
    std::sort(std::execution::par, vec.begin(), vec.end());
    // sorting from start to end and used parallel execution policy

    for (auto elm : vec)
    {
        cout << elm << " ";
        // 1 2 3 4 5 6 7 8 9
    }
    cout << endl;

    // Sort in descending order
    std::sort(std::execution::par, vec.begin(), vec.end(), std::greater<>());
    for (auto elm : vec)
    {
        cout << elm << " ";
        // 9 8 7 6 5 4 3 2 1
    }
    cout << endl;

    // 2. Sort User defined data type
    std::vector<Point> pointVec{{1, 2}, {3, 1}, {0, 1}};
    std::sort(pointVec.begin(), pointVec.end(), std::less<Point>());
    for (auto elm : pointVec)
    {
        cout << "X: " << elm.x << "Y: " << elm.y << endl;
    }
    // Sorting in Descending order
    std::sort(pointVec.begin(), pointVec.end(), std::greater<Point>());
    for (auto elm : pointVec)
    {
        cout << "X: " << elm.x << "Y: " << elm.y << endl;
    }

    // 3. Sort using function object.
    std::vector<int> vec2{5, 4, 6, 7, 3, 2, 8, 9, 1};
    std::sort(vec2.begin(), vec2.end(), customLess);
    // Providing the structure containing operator checking function inside sort algorithm function
    for (auto elm : vec2)
    {
        cout << elm << " ";
    }
    cout << endl;

    // 4. Sort using lambda expression
    std::vector<int> vec3{5, 4, 6, 7, 3, 2, 8, 9, 1};
    std::sort(vec3.begin(), vec3.end(), [](int a, int b)
              { 
                // comparing using '>' operator so it will sort in descending order
                return a > b; });
    for (auto elm : vec3)
    {
        cout << elm << " ";
    }
    cout << endl;

    return 0;
}