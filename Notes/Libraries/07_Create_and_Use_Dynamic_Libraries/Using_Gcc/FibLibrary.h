#pragma once

// you have to define this to be able to generate '.lib', '.dll', '.exp' files

#ifdef __cplusplus
extern "C"
{
#endif
#ifdef BUILD_MY_DLL // this option causes the dll functions to export and available to client applications
#define SHARED_LIB __declspec(dllexport)
#else
#define SHARED_LIB __declspec(dllimport)
#endif

    // and you have to declare like this to be able to generate '.lib', '.dll', '.exp'
    // and all of these files are related to each other
    int SHARED_LIB fib(int n);

#ifdef __cplusplus
}
#endif

// declaring the another function outside the extern "C" block
void SHARED_LIB helloWorld();
