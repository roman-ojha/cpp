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
        -> so, one cpp file doesn't know any thing about another cpp file
        -> after the compiler generate all these '.obj' files the job of you linker is to link all of these '.obj' files togethers into one unit called '.exe' file which will be you application

*/
/*
    -> so when we need one function ex: 'log' in different '.cpp' if we will define this function in ever file then compiler will throw an error because
    -> because it will see the implementation of the function that have same name and it will get confuse, which function should it call
    -> so rather will define the function into one file, and use the declaration of that function into different file
    -> but to declare the functions, methods, classes etc.. we will use '.h' header file and we will use that header file every one we want just by including it into the '.cpp' files
    -> so we will create two file one '.h' for declaration & '.cpp' for definition
*/

// created 'Person' class declaration into 'person.h' file
// including that header file inside this file so that we can use it inside this file
#include "person.h"
// but just by including the header file you can't be able to use the 'Person' class because it doesn't have to definition of the 'Person' class

/*
    *) Command to create executable file
        -> g++ .\main.cpp person.cpp -o <executable_output_file_name>
        -> EX: g++ .\main.cpp person.cpp -o main
    *) Command create executable & run it
        -> g++ .\main.cpp person.cpp -o main; .\main.exe
*/

int main()
{
    log("Hello world");
    Person p(1, "roman", "male");
    std::cout << p.getClassName() << std::endl;
    std::cout << Person::getClassName() << std::endl;
    p.getPerson();
    return 0;
}

// here we will define the log function that we declare before
void log(const char *message)
{
    std::cout << message << std::endl;
}