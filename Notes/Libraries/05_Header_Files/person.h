#include <iostream>
class Person
{
public:
    int id;
    std::string name;
    std::string gender;
    Person(int id, std::string name, std::string gender);
    void getPerson();
};