/*
    => Cpp traditionally doesn't support storing multiple type
    => Or it doesn't support support returning multiple types value from the function
    *) Different way to return the multiple type value
        1.> we can create the custom type like 'struct', 'class' and return the multiple value like that
        2.> we can pass by reference into the function because of that we don't have to return as well and we can get the value that we want
        3.> return pointer with type of same
        4.> return using std::array, std::vector with type of same
        5.> return tuple
*/

#include <iostream>
#include <string>
#include <tuple>

// 2.
void sum(int a, int b, int &outC, std::string &outStr)
{
    // here we are getting outC as a reference because of that we can just change or assign the new value into the 'outC' and we can use it outside of the function
    outC = a + b;

    outStr = "Sum of A & B is: " + std::to_string(outC);
}

// 5.
std::tuple<std::string, int> sum(int a, int b)
{
    // here we are returning the 'string' and 'int' type
    int c = a + b;
    std::string str = "Sum of A & B is: " + std::to_string(c);

    return std::make_pair(str, c);
}

// 1.
struct ReturningSumValues
{
    std::string str;
    int c;
};

ReturningSumValues sum2(int a, int b)
{
    int c = a + b;
    std::string str = "Sum of A & B is: " + std::to_string(c);

    return {str, c};
}

int main()
{
    // 2.
    int a = 1, b = 2, c;
    std::string str;
    sum(a, b, c, str);
    std::cout << str << std::endl;

    // 5.
    std::tuple<std::string, int> response = sum(a, b);
    std::cout << "Sum is: " << std::get<1>(response) << std::endl;
    // Sum is: 3
    std::cout << std::get<0>(response) << std::endl;
    // Sum of A & B is: 3

    // 1.
    ReturningSumValues response2 = sum2(a, b);
    std::cout << "Sum is: " << response2.c << std::endl;
    // Sum is: 3
    std::cout << response2.str << std::endl;
    // Sum of A & B is: 3

    return 0;
}