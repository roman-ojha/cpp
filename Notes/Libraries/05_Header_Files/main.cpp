/*
    *) Header files:
        -> header files are use to declare certain types of functions. so, that they can be use through out the program
        -> so program need to know which type & functions are available to us
        -> so inside there fine we will try just to store the declaration rather then definition
        -> to given the program that the function or the class that we are using exist and have these different type of members
*/
#include <iostream>

// inside the 'Log.cpp' file we have define the 'log' function, just by default we can't be able to use that function here
// to be able to use that 'log' function we need to know it exist some where for that we need a declaration which tess us the about:
// 1. name of the function
// 2. return type
// 3. parameter that it take with it's types
// now here we will declare the function that we want to use inside this file
void log(const char *message);
// now we can use this function inside this file

/*
    *) There are two type of header files:
        1. System header files:
            -> It comes with the compiler
            -> #include <iostream>
        2. User defined header files:
            -> it is written by the programmer
*/

/*
    *) How compilation of program works?
        -> when a program is compile every .cpp file will be compile into a independent compilation unit
        -> that's the way we create the .obj file
        -> so, for each .cpp file the compiler will generate a .obj file, and these compilation units are independents
*/

#include "person.h"

int main()
{
    log("Hello world");
    return 0;
}

// here we will define the log function that we declare before
void log(const char *message)
{
    std::cout << message << std::endl;
}