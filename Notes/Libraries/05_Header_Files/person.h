#pragma once
// in c++ '#' is called as preprocessor directive
// it means that it will going to be evaluated by the c++ before this file will get compile
// pragma is the instructor that get send to the compiler and the preprocessor
// pragma once is a guard to ensure that we will not include this header file more then once into single translation unit, or cpp file
// but it doesn't prevent to include this header file into multiple places in our program
// so this means that this will prevent to include multiple header file of this file when you have chain of include same header file into different cpp files
// we can solve this problem just by using '#ifndef' as well

#include <iostream>

// header file containing the declaration of 'Person' class
// To protected from including this header file twice will use preprocessor directive
#ifndef PERSON // so here if the 'PERSON' is not define we will define the 'PERSON'
// and also it will not be define in the first time in that case include "Person" class
#define PERSON
// so because it will define now if again come here because it will defined no need to include "Person class"
class Person
{
public:
    static std::string class_name;
    int id;
    std::string name;
    std::string gender;
    Person(int, std::string, std::string);
    void getPerson();
    static std::string getClassName();
    ~Person();
};

#endif
// ending if