/*
    *) std::promise & std::future in C++ threading
        -> std::promise is used to pass a value from one thread to another
        EX:
            -> let's say that we have a main function 'main()'
            -> an you have a function 'Func()' that act as a thread thread 'T'
                -> main(){
                    T(Func);
                }
            -> now after some time you want a return value from that thread
            -> to achieve this we will use std::future & std::promise

*/

#include <iostream>
#include <thread>
#include <future>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;
typedef long int ull;

int main()
{
    ull start = 0, end = 19000000000;
    // we will try to find odd number from 'start' to 'end'
}