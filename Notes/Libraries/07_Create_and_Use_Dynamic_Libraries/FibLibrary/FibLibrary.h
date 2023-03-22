#pragma once

// you have to define this to be able to generate '.lib', '.dll', '.exp' files
#ifdef FIBOLIBRARY_EXPORTS
#define FIBOLIBRARY_API __declspec(dllexport)
#else
#define FIBOLIBRARY_API __declspec(dllimport)
#endif

// and you have to declare like this to be able to generate '.lib', '.dll', '.exp'
// and all of these files are related to each other
extern "C" FIBOLIBRARY_API int fib(int n);