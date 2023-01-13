/*
    *) std::span<T>
        -> Syntax: std::span<T,N> // T =  type, N = size
        -> it is very light weight because it doesn't contain your values
        -> it can support contigious memory references
        -> it can update the data inside container
        -> so it have the reference of the container like 'array', 'vector'
*/

#include <iostream>
#include <vector>
#include <array>
#include <span>
using namespace std;

void print_content(std::span<int> container)
{
    for (const auto &e : container)
    {
        std::cout << e << ' ';
    }
    cout << "\n";
}

// function modifying the content
void modify_content(std::span<int> container)
{
    for (auto &e : container)
    {
        e *= 2;
    }
}

int main()
{
    // creating normal array
    int a[]{23, 35, 67, 89};
    print_content(a);

    // so here we are printing the different type of container using the same function
    std::vector v{1, 2, 3, 4, 5};
    print_content(v);

    std::array a2{-14, 55, 24, 67};
    print_content(a2);

    return 0;
}