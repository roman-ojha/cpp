
/*
-> the template for the object is class  (object -> class)
-> the template for the class is template (class -> template)

we use template for to use same class variable and function for a different different data type
we can call template parameterized classed to understand the concept

Why use template?
-> to follow the DRY Principle
-> Generic programming (not specific for one datatype)

Syntax:
    template <class T>
    class vector{
        T* arr;
    public:
        Vector(T* ar)
        {arr=ar}
        // and many other method
    }
    // T can be int, float, char etc...

    Vector <int> my_vec(ptr);
    Vector <float> my_fvec(ptr);
    // here we are using different classes coming from the same template
*/

// Macros
#define mina(i, j) (((i) < (j)) ? (i) : (j))

// template
template <class T>
T minb(T i, T j)
{
    return ((i < j) ? i : j)
}
