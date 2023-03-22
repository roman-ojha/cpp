/*
    *) MultiFile Compilation
        -> the program that split into multiple files have atleast 3 files:
            1. header file
                -> the header file contains the function declaration
                -> is in '.h' extension
            2. implementation file
                -> the implementation file contains the function definition
                -> is in '.cpp' extension
            3. main file
                -> the main file contains the main function, which is the entry point of the program and it calls the function from the header file
                -> is in '.cpp' extension
        -> header files need to be include in both the implementation file and the main file
        -> the implementation file and the main file are compiled separately
        -> the header file is not compiled

    *) pre processor directives
        -> the pre processor directives are the instructions that are processed by the pre processor before the compilation
        -> so we have to sand the message to the preprocessor saying, we have create the header file and we want to include in our code, and we only want to do this one time
        -> so it means that multiple files are include the same header file, the pre processor will only include the header file one time
        -> in the header file, we have to define the pre processor directives to be able to generate the '.lib', '.dll', '.exp' files
        -> for that in the modern cpp header file we use #pragma once
        -> another way to define the pre processor directives is to use #ifndef, #define, #endif
        -> EX:
            #ifndef FIB_LIBRARY_H // if the FIB_LIBRARY_H is not defined
            #define FIB_LIBRARY_H // define the FIB_LIBRARY_H
            // on the first time include all the header file contain inside this block
            // but on the second time, the pre processor will not include the header file, because the FIB_LIBRARY_H is already defined
            #endif // end the pre processor directives

    *) How to compile these files:
        -> we can use different compilers to compile these files like:
            1. gcc
            2. g++
                *) Generating executable directly
                    -> g++ .\main.cpp .\math.cpp -o main
                        -> compiling the main file and the math file and generating the executable file
                *) Generating compiled object file and then generating executable
                    -> g++ -c .\main.cpp -o main.o
                        -> compiling the main file and generating the object file
                    -> g++ -c .\math.cpp -o math.o
                        -> compiling the math file and generating the object file
                    -> g++ main.o math.o -o main
                        -> linking the object files and generating the executable file
            3. clang
            4. clang++
*/
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    cout << math::add(10, 20) << endl;
    return 0;
}