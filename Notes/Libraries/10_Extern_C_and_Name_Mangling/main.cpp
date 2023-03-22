/*
    *) extern "C":
        -> when we are writing C++ code and including c code in that, we have to use extern "C" to tell the compiler that the function is written in C language
        -> if the library is compiled in C language and you want to use it inside c++ code and you want to recompile that code and include that library header, there comes that linker problem
*/

/*
    *) Setup:
        -> 'cLibrary.h' contain the declaration of the 'cLibrary.c'
        -> now we will first we will compile the cLibrary.c
            -> gcc -c .\cLibrary.c
        -> now we will compile our cpp file 'main.cpp'
            -> g++ -c .\main.cpp
        -> now when we will try to link these object files, and try to create executable file, we will get linker error
            -> g++ .\main.o .\cLibrary.o // just linking object files
            -> g++ .\main.o .\cLibrary.o -o main
            -> error: undefined reference to `fun'
        -> this error will occur because cpp uses name mangling so that it can achieve function overloading and c does not use name mangling
        -> because of that g++ is changing all the function names to some other name and that is why it is not able to find the function
        -> EX: fun -> _Z3funv // this is the name of the function after name mangling
        -> for:
            -> c: fun
            -> cpp: _Z3funv
        -> we can see this name mangling using nm command:
            -> nm <object file name>.o
        -> EX:
            -> in, add(int a,int b){} -> _Z3addii
            -> in, float(float a,float b){} -> _Z5floatff
        -> so, using g++ we don't want to change the name mangling of the function so to solve this problem we will use extern "C" in cLibrary.h
*/

#include <iostream>
extern "C"
{
#include "cLibrary.h"
}
// after doing this we will get the following output:
// nm main.o
// U fun
// now linker function can link the function that we are calling inside main.cpp to the function that is defined in cLibrary.c/.o file
using namespace std;

int main()
{
    fun();
    return 0;
}