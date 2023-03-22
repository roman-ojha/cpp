/*
    -> here we will learn how to load libraries at runtime
    -> dynamic linking or loading in run time:
        -> we will write a code inside the cpp file where we will load the dynamic libraries as per our requirement
    -> In MacOS:
        1> dlopen(): function to load the dynamic libraries
        2> dlsym(): function to get the address of the function
        3> dlclose(): function to close the dynamic libraries
    -> In Windows:
        1> LoadLibrary(): function to load the dynamic libraries
        2> GetProcAddress(): function to get the address of the function
        3> FreeLibrary(): function to close the dynamic libraries

    -> FibLibrary.h contain the header file & FibLibrary.cpp contain the implementation of the functions
    -> 'build.bat' contain the commands to build the dynamic library
    -> main.cpp contain the client which will load the dynamic libraries on run time and use it's functions
*/

#include <iostream>
#include <windows.h>
#include <tchar.h>
using namespace std;

int main()
{
    // specify the path of the dynamic library
    auto libraryPath = TEXT("D:\\Programming\\Cpp\\Notes\\Libraries\\08_Load_Libraries_at_Runtime\\FibLibrary.dll");
    // loading the dynamic library
    HINSTANCE libHandle = LoadLibrary(libraryPath);
    if (libHandle == NULL)
    {
        cout << "Error: " << GetLastError() << endl;
        return 1;
    }
    // getting the address of the named function
    // auto fib = (int (*)(int))GetProcAddress(libHandle, "fib");
    typedef int(__stdcall * f_funci)(int);
    // f_funci opfunc = (f_funci)GetProcAddress(libHandle, "<name_of_the_function>");
    f_funci fib = (f_funci)GetProcAddress(libHandle, "fib");
    // so here we are getting the function called 'fib' and getting the pointer function so that we can call it

    // calling the function
    cout << "Nth Fibonacci of " << 10 << " is: " << fib(10) << endl;
    return 0;
}