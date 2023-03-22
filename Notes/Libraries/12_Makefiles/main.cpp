/*
    *) Makefile:
        -> Makefile is a file that contains a set of directives used by make build automation tool to generate executables and other non-source files of a program from the program's source files.
        -> it automate the build process for cpp application we well
        -> Working mechanism:
            -> https://youtu.be/NLhy05sdFQI
        *) for windows
            -> But by default there will not exist 'make' command
            -> so for that you have to install 'mingw-get'
            -> https://sourceforge.net/projects/mingw/files/Installer/mingw-get/
            -> after installing 'mingw-get' we can get that in : C:\MinGW\bin\mingw-get.exe
            -> we will use this to install our make program
            -> first we will add: C:\MinGW\bin\ path to env variable
            => Now we will install make program :
                -> mingw-get install mingw32-make
            => now we can use 'mingw32-make' command rather then 'make'
            => if you want to use 'make' command rather then 'mingw32-make' then you just have to rename the 'mingw32-make.exe' file to 'make.exe' inside: C:\MinGW\bin
            => now we can use 'make' command to executable 'makefile'
*/

#include <iostream>
#include "math_utils.h"
using namespace std;

int main()
{
    cout << math::add(5, 6) << endl;
    return 0;
}