/* 
STL = Containers ,      Alog ,          Iterators
          |               |                 |
    object which     Procudere to      object which points 
     store data       process data     to an element of a container

=> Containers:
        1) Sequence Containers
                -> store data in Linear fashion
                -> Ex: vector, List, dequeue
        2) Associative Containers
                -> Deirect access
                -> Ex: Set, MuiltiSet ,Map, MultiMap, dictionary
        3) Derived Containers
                -> Real World Modelling
                -> Stack, Queue, Priority-Queue

=> when to use Which?
        1) Sequence Containers
                1) Vector -> Random access is fast
                          -> insertation/deletion in middle = slow
                          -> insertion/deletion at the end is fast
                2) List   -> Random access is slow
                          -> insertaion/deletion in middle is fast
                          -> insertaion/deletion at the end is fast
        2) Associative containers
                          -> All operation fast except random access
        3) Derived containers
                          -> Depends on data structure
*/
#include <iostream>
#include <stdio.h>
#include <malloc.h>
using namespace std;

int main()
{
    return 0;
}