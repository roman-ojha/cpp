#include <iostream>
/*
    *) C in python
        *) Setup:
            -> first you have to create the shared library '.so' file from c++ program
*/

void display(std::string str, int age)
{
    std::cout << "My name is " << str << " and my age is " << age << std::endl;
}

int sum(int a, int b)
{
    return a + b;
}
