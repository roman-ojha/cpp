#include <iostream>
// including the header file containing the declaration of the 'Person' class
#include "person.h"

// cpp file containing the definition of the 'Person' class
// now while defining the class method we don't need to create the class again
// we will also get ride of all the data member that the class have

// for static method and member we just have to define here but no need to specify using 'static' keyword
// also if it contain the 'friend' function we will get rid of 'friend' keyword as well
std::string Person::class_name = "Person";
Person::Person(int id, std::string name, std::string gender)
{
    this->id = id;
    this->name = name;
    this->gender = gender;
};
void Person::getPerson()
{
    std::cout << "Id: " << this->id << std::endl
              << "Name: " << this->name << std::endl
              << "Gender: " << this->gender << std::endl;
};
std::string Person::getClassName()
{
    return class_name;
};
Person::~Person()
{
    std::cout << "Deleting person" << std::endl;
}