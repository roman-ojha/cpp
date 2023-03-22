#include <iostream>
#include "FibLibrary.h"

// function definition to calculate the nth Fibonacci number
int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

void helloWorld()
{
    std::cout << "Hello World" << std::endl;
}