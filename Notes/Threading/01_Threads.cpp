/*
    *) Introduction to thread in c++ (>c++11)
        -> this is not related to the os threading, how os take care of the threads, how the manage the processes
        -> this is about how we can create threads in c++ and how we can manage them
        -> In every application there is a default thread which is main(). This is the thread which is created by the os, in side we will create an another thread
        -> so by default main() function run on only one thread or the main thread.
        => A thread is also known as light weight process. Idea is achieve parallelism by dividing the process into multiple threads.
        => EX:
            1> In a game, we have a main thread which is responsible for the game logic and rendering. We can create another thread which is responsible for the sound.
            2> In a web browser, we have a main thread which is responsible for the rendering of the web page. We can create another thread which is responsible for the downloading of the images.
            3> The browser have multiple tabs that can be different threads.
            4> MS word must be using multiple threads, on thread to format the text, another thread to process input (spell checker)
            5> Visual studio code editor would be using threading for auto completing the code(Intellisense)

    *) Way to create threads in C++:
        -> There are two ways to create threads in c++.
            1> Using function pointer
            2> Using lambda expression
            3> Functors
            4> Member functions
            5> Static member functions.
*/

#include <iostream>
#include <thread>
#include <chrono>
#include <time.h>
using namespace std;
using namespace std::chrono;

// REQUIREMENT:
// 1> Find the addition of all odd number from 0 to 1900000000 and all even number from 0 to 1900000000

typedef unsigned long long ull;

ull OddSum = 0;
ull EvenSum = 0;

void findEven(ull start, ull end)
{
    for (ull i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            EvenSum += i;
        }
    }
}

void findOdd(ull start, ull end)
{
    for (ull i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            OddSum += i;
        }
    }
}

int main()
{
    ull start = 0, end = 1900000000;
    // calculate execution time:
    auto start_time = high_resolution_clock::now();

    // // here we are doing a single thread task
    findOdd(start, end);
    findEven(start, end);
    cout << "OddSum: " << OddSum << endl;
    cout << "EvenSum: " << EvenSum << endl;

    auto end_time = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end_time - start_time);
    cout << "Total time taken by function: " << duration.count() << " Microseconds" << endl;

    // Executing program using thread in function pointer:
    start_time = high_resolution_clock::now();

    // here we are doing a Multi threading task
    // std::thread <name_of_thread> (<function_name>, <parameters>);
    // NOTE: if we want to pass the parameters as reference then we have to use std::ref(<variable_name>)
    // calculate execution time:
    OddSum = 0;
    EvenSum = 0;
    // when the execution come to this like it will create a new thread and it will execute the function in that thread
    std::thread t1(findOdd, start, end);  // here we we are executing function in t1 thread
    std::thread t2(findEven, start, end); // here we are executing function in t2 thread

    // Joining the threads:
    t1.join();
    t2.join();
    // we will understand this join function in the next topic
    // but what we have to know that if we will not join the threads then these threads will not get join to you main thread. the main thread will execute the next line of code before the execution of the t1 and t2 threads and the main thread will terminate before the execution of the t1 and t2 threads.
    // so t1.join() will help to stop and wait for the t1 thread to finish its execution and then it will move to the next line of code.

    cout << "OddSum: " << OddSum << endl;
    cout << "EvenSum: " << EvenSum << endl;

    end_time = high_resolution_clock::now();
    duration = duration_cast<microseconds>(end_time - start_time);
    cout << "Total time taken by function: " << duration.count() << " Microseconds" << endl;

    return 0;
}