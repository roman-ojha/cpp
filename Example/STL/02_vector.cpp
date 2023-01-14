#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
private:
    int id;
    string name;

public:
    Person() : id{NULL}, name{NULL} {}
    Person(int id, string name) : id{id}, name{name} {}
    bool operator<(const Person &person) const
    {
        return this->id < person.id;
    }
    bool operator>(const Person &person) const
    {
        return this->id > person.id;
    }
    // cout Person
    friend ostream &operator<<(ostream &os, Person &person)
    {
        cout << person.id << ": " << person.name;
        return os;
    }
};

// Cout vector
ostream &operator<<(ostream &os, const vector<Person> &v)
{
    for (auto elm : v)
    {
        cout << elm << endl;
    }
    return os;
}

// Selection sort algorithm
void selection_sort(vector<Person> *persons)
{
    vector<Person>::iterator min;
    Person temp;
    for (auto itI = persons->begin(); itI != persons->end(); itI++)
    {
        min = itI;
        for (auto itJ = itI; itJ != persons->end(); itJ++)
        {
            if ((*itJ) < (*min))
            {
                min = itJ;
            }
        }
        // Swap
        temp = (*itI);
        (*itI) = (*min);
        (*min) = temp;
    }
}

int main()
{
    vector<Person> persons{{2, "Tom"}, {5, "Hari"}, {3, "Roman"}, {4, "Ram"}};
    selection_sort(&persons);
    cout << persons;
    return 0;
}