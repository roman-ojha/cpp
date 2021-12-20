/*
    -> Create class called Employee and put the data of the employee from the user and store it into the file and then read the data form the file and then display the data to the screen.
*/

#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
private:
    char name[20];
    char gender[10];
    int age;
    int salary;

public:
    void getData()
    {

        cout << "Enter Detail: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Gender: ";
        cin >> gender;
        cout << "Age: ";
        cin >> age;
        cout << "Salary: ";
        cin >> salary;
    }
    void showData()
    {
        cout << "Entered Detail: " << endl
             << "Name: " << name << endl
             << "Gender: " << gender << endl
             << "Age: " << age << endl
             << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee E1, E2;
    E1.getData();
    fstream file;
    file.open("Question_11_file.dat", ios::out | ios::binary);
    file.write((char *)&E1, sizeof(E1));
    file.close();
    file.open("Question_11_file.dat", ios::in | ios::binary);
    file.read((char *)&E2, sizeof(E2));
    file.close();
    E2.showData();
    return 0;
}