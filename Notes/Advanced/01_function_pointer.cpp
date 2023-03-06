/*
    *) Function pointer
        -> Function pointer are way to assign a function to a variable.
        -> Using function pointer we can assign a function to variable.
        -> with the help of function pointer we can pass function into another function as parameter.
*/

#include <iostream>
#include <vector>
using namespace std;

// Defining the normal function that we used we used to define
void HelloWorld()
{
    std::cout << "Hello world" << std::endl;
}

void sum(int a, int b)
{
    std::cout << a + b << std::endl;
}

// Function that will print value in that case will print the vector element
void printElm(int value)
{
    cout << value << " ";
}

// function that will iterate through all the vector element and print it
// for printing the element we will take the function as function pointer that will print the element
void forEach(const std::vector<int> &values, void (*printVal)(int))
{
    for (int value : values)
    {
        // calling the function that will print the function
        printVal(value);
    }
    cout << endl;
}

int main()
{
    // calling the function
    HelloWorld();

    // assigning the function using auto keyword
    auto fun1 = HelloWorld;

    // calling the function pointer
    fun1();
    fun1();

    // giving the specific type while assigning the function
    void (*fun2)() = HelloWorld;
    // void (*<function_name>)(<parameters>...) is the type of function pointer
    fun2();

    // We can use typedef to define the void ()() to our type
    typedef void (*fun)();
    // now we can use the type that we create to represent the function pointer type
    fun fun3 = HelloWorld;
    fun3();

    // passing argument:
    // defining the type
    typedef void (*func)(int, int);
    // assigning function to function pointer
    func fun4 = sum;
    // calling the function
    fun4(1, 2);

    // Real example:
    std::vector<int> vec = {1, 5, 4, 2, 3};
    // passing the vector and function as argument
    forEach(vec, printElm);
    // Or rather then defining the different function 'printElm' we ca use lambda function to pass it as argument
    forEach(vec, [](int value)
            { cout << value << " "; });

    return 0;
}