/*
    *) Lambda expression:
        -> lambda is an anonymous function that doesn't have any name definations.
        -> So lambda help us to define a function without defining the real function.

    *) Uses:
        -> Whenever you have a function pointer you can use lambdas.
        -> Where ever we normally set a function pointer to a function we can set it to a lambda.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void forEach(const std::vector<int> &values, void (*printVal)(int))
{
    for (int value : values)
    {
        printVal(value);
    }
    cout << endl;
}

void ex1(const std::function<void(int)> &func)
{
    // const std::function<void(int)> &func : when we use '=' capture operator in that case we need to use this
    func(10);
}

int main()
{

    // defining the lambda expression
    auto fun1 = [](int value)
    { cout << value << " "; };
    // []: capture
    // capture means if we want to use the outside variable inside the lambda function
    // means where ever we pass that lambda function the capture variable will get pass upon that
    // EX: [a, &b] where a is captured by copy and b is capture by reference
    // [this] capture the current object (*this) by reference
    // [=] capture everything in by value
    // [&] capture everything in by reference
    // https://en.cppreference.com/w/cpp/language/lambda

    // EX:
    int a = 5;
    auto fun2 = [a]()
    {
        // here we are capturing the value a into this lambda function by value
        cout << "A: " << a << endl;
    };
    fun2();

    auto fun3 = [=](int value)
    {
        // here we are capturing everything in by value because of that we can be able to use 'a' variable inside the lambda function
        std::cout << "A: " << a << std::endl;
    };
    ex1(fun3);

    auto fun4 = [a]() mutable
    {
        // just by reassigning the capture value inside the lambda function will not going to reassign the value
        a = 6;
        // to make assignable to the capture value we can use 'mutable' keyword
        cout << "A: " << a << endl;
    };
    fun4();

    // One EX to pass lambda function
    std::vector<int> vec = {1, 5, 4, 2, 3};
    forEach(vec, fun1);

    // Another EX
    // here we are algorithm that will return the iterator as per the condition it get true using lambda function
    auto it = std::find_if(vec.begin(), vec.end(), [](int value)
                           { return value > 3; });
    cout << *it << endl;
    // 5

    return 0;
}