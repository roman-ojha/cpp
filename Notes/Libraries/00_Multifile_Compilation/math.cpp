#include "math.h"
// here we will include the header file that contains the function declaration
// we have to include this because while compiling this file compiler needs the function declaration.

// we should not specify the default parameter value inside the definition of the function
namespace math
{
    int add(int a, int b)
    {
        return a + b;
    }
}