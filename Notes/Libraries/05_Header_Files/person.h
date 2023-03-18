#pragma once
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
    Person(int id, std::string name, std::string gender);
    void getPerson();
    static std::string getClassName();
    ~Person();
};

#endif
// ending if