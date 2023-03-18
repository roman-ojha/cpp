/*
    *) C in python
        *) Setup:
            -> we will compile and create the shared library file '.so' file
            -> gcc -fPIC -shared -o <name_of_shared_lib_output_file_name>.so .\<name_of_c_file_name>.c
            -> EX: gcc -fPIC -shared -o cLibrary.so .\cLibrary.c
            -> OR: gcc -o cLibrary.so --shared -fPIC cLibrary.c
*/

#include <stdio.h>

void display(char *str, int age)
{
    printf("My name is %s and my age is %d\n", str, age);
}

int sum(int a, int b)
{
    return a + b;
}
