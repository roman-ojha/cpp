#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    char name[10];

public:
    Student() {}
    Student(int r, char n[10])
    {
        roll_no = r;
        name[10] = n[10];
    }

    void print_student()
    {
        cout << "The name of the roll.no: " << roll_no << " is= " << name << endl;
    }
};

class Exam : virtual public Student
{
protected:
    float math, physic;

public:
    Exam() {}
    Exam(float m, float p)
    {
        math = m;
        physic = p;
    }
    void print_exam()
    {
        cout << "The mark of the math is= " << math << endl
             << "The mark of the physic is= " << physic << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float football, pts;

public:
    Sports() {}
    Sports(float f, float pt)
    {
        football = f;
        pts = pt;
    }
    void print_sports()
    {
        cout << "The mark of the football is= " << football << endl
             << "the mark of the pt is= " << pts << endl;
    }
};

class Result : public Exam, public Sports
{
protected:
    float res = 0;

public:
    Result() {}
    Result(float m, float p, float f, float pt, int r, char n[10]) : Exam(m, p), Sports(f, pt), Student(r, n)
    {
    }
    void calculation_result()
    {
        res = (football + pts + physic + math) / 4;
    }
    void print_result()
    {
        print_student();
        print_exam();
        print_result();
        cout << "The result in percentage is= " << res << "% " << endl;
    }
};

int main()
{
    Result r(70.7, 50.9, 85.1, 90, 25, "Roman");
    r.calculation_result();
    r.print_result();
    return 0;
}