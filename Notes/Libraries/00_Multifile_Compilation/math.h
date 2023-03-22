#ifndef MATH_UTILS // if the MATH_UTILS is not defined then do the following
#define MATH_UTILS // define the MATH_UTILS
// on the first time include all the header file contain inside this block
// but on the second time, the pre processor will not include the header file, because the FIB_LIBRARY_H is already defined

// inside declaration we have to specify the default parameter value
namespace math
{
    int add(int, int = 10);
}
#endif