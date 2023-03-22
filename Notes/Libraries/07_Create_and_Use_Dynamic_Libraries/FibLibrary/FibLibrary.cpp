#include <iostream>
#include "pch.h"
#include "FibLibrary.h"
using namespace std;

// function to calculate the nth Fibonacci number
int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}