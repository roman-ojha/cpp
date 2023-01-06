#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    char name[20];
    int roll_no;

public:
    Student() {}
    Student(char *n, int r)
    {
        strcpy(name, n);
        roll_no = r;
    }
    void setdata(char *n, int r)
    {
        strcpy(name, n);
        roll_no = r;
    }
    void display_data()
    {
        cout << "Your name is= " << name << endl
             << "Your roll no. is= " << roll_no << endl;
    }
};

int main()
{
    char name[20] = "Roman";
    Student s(name, 25);
    Student s1;
    s.display_data();
    char name1[20] = "razz";
    s1.setdata(name1, 25);
    s1.display_data();
    return 0;
}