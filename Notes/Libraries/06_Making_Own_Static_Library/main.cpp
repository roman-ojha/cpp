/*
    *)
        -> we can create the module or library so that we can reuse it multiple times
        -> after creating library we can mix other programming language as well
*/

/*
    *) Setup for visual studio:
        -> we will create this library using visual studio IDE
        -> where we will create to different project:
            1. Game:
                -> first we will create the Game project having different solution and project directory
                -> 'Game' project will be our executable
                -> in property we will set 'Configuration Type' as '.exe'
            2. Engine:
                -> another project inside the same Solution 'Game'
                -> 'Engine' will be a library
                -> in properties we wills ste 'Configuration Type' as '.lib'

    *) Generate .lib file:
        -> for that we will build the 'Engine' solution so that
        -> which will generate the 'Engine.lib' static library file into './x64/Debug/Engine.lib'
        -> now we can link this binary library file into the c++ while creating the executable file or while build cpp program/application
        -> now we can link this static linking by what we does previously on '../02_Using_Binary_Library' Notes
        -> but visual studio can automatically link this library because it is inside the same solution
        -> for that we can right click on 'Game' solution and add -> reference & then add the 'Engine' project
*/

/*
    *) Setup for command line:
        -> https://renenyffenegger.ch/notes/development/languages/C-C-plus-plus/GCC/create-libraries/index
        -> for this we will use 'log.cpp' that contain definition of the 'log.h' header file
        -> and 'log.cpp' is the file from which we will create the static library '.lib' fil
        => Creating compiled object file first:
            -> g++ -c .\log.cpp -o log.o
            -> Or: g++ -c .\log.cpp -o log.obj
            -> g++ -c .\log.cpp -o bin/log.obj
        => Creating static library:
            -> A static library is basically a set of object files that were copied into a single file with the suffix .lib.
            -> Or: ar rcs log.lib log.obj
            -> Or: ar rcs bin/static/log.lib bin/log.o
        => Create Executable file with linked 'log.lib' static binary library file
            -> g++ .\main.cpp -o bin/main -L"bin/static" -llog

    *) Run this command to run chain of command to execute the program:
        -> g++ -c .\log.cpp -o bin/log.obj; ar rcs bin/static/log.lib bin/log.obj; g++ .\main.cpp -o bin/main -L"bin/static" -llog; .\bin\main.exe
*/

#include "log.h"

int main()
{
    print::PrintMessage();
    return 0;
}