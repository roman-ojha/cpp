#include <iostream>
using namespace std;

class Student
{
    char name[10];
    int Roll_no;
    long int number;
    int count = 0;

public:
    Student() {}
    Student(char n[], int r, long int nu)
    {
        int i = 0;
        while (n[i] != '\0')
        {
            count++;
            i++;
        }
        for (int i = 0; i < count; i++)
        {
            name[i] = n[i];
        }
        cout << count << endl;
        Roll_no = r;
        number = nu;
    }
    void printdata()
    {
        cout << "The detail of the student are:" << endl
             << endl;

        cout << "Name:";
        for (int i = 0; i < count; i++)
        {
            cout << name[i];
        }
        cout << endl
             << "Roll No.:" << Roll_no << endl
             << "Phone number" << number << endl;
    }
};

class Subject
{
    float math, physics, chemistry, biology;

public:
    Subject() {}
    Subject(float m, float p, float c, float b) : math(m), physics(p), chemistry(c), biology(b) {}
    void printdata()
    {
        cout << "The Result of The given Student:" << endl
             << "Math:" << math << endl
             << "Physics:" << physics << endl
             << "Chemistry" << chemistry << endl
             << "Biology" << biology << endl;
    }
    float SubjectResult()
    {
        return math + physics + chemistry + biology;
    }
};

class Result : public Student, public Subject
{
    float percentage;

public:
    Result() {}
    Result(char n[], int r, long int nu, float m, float p, float c, float b) : Student(n, r, nu), Subject(m, p, c, b) {}
    void printdata()
    {
        Student::printdata();
        Subject::printdata();
        cout << "Total marks:" << SubjectResult() << endl
             << "Percentage:" << (SubjectResult() / 400) * 100 << "%" << endl;
    }
};

int main()
{
    int num;
    int *ptr = &num;
    cout << "How many student result that you want to see:";
    cin >> *ptr;
    Result *r1 = new Result[*ptr];
    char n[10];
    int roll;
    long int number;
    float math, physic, chemistry, biology;
    for (int i = 0; i < *ptr; i++)
    {
        cout << "Enter the detail list of the student: " << endl;
        cout << "Name:";
        cin >> n;
        cout << "Roll No.:";
        cin >> roll;
        cout << "Phone number:";
        cin >> number;
        cout << "Enter the Mark of the student :" << endl;
        cout << "Math:";
        cin >> math;
        cout << "Physic:";
        cin >> physic;
        cout << "Chemistry:";
        cin >> chemistry;
        cout << "Biology";
        cin >> biology;
        *r1 = Result(n, roll, number, math, physic, chemistry, biology);
        r1->printdata();
        r1++;
    }
    return 0;
}