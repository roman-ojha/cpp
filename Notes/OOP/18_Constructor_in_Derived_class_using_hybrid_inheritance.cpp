#include <iostream>
using namespace std;

class Student
{
protected:
    int class1, roll_no;

public:
    Student() {}
    Student(int c, int r)
    {
        class1 = c;
        roll_no = r;
    }
    void print_student()
    {
        cout << "the class of the student is= " << class1 << endl;
        cout << "the roll.no of student is= " << roll_no << endl;
    }
};

class Exam : virtual public Student
{
protected:
    float Math, Physic;

public:
    Exam(){};
    Exam(float m, float p)
    {
        Math = m;
        Physic = p;
    }
    void print_marks1()
    {
        cout << "the mark of Roll.no " << roll_no << " Student it Math is= " << Math << endl;
        cout << "the mark of Roll.no " << roll_no << " Student it Physic is= " << Physic << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float pt;

public:
    Sports() {}
    Sports(float pts)
    {
        pt = pts;
    }
    void print_marks2()
    {
        cout << "the mark of Roll.no " << roll_no << " Student it Math is= " << pt << endl;
    }
};

class Result : public Exam, public Sports
{
protected:
    float result = 0;

public:
    Result() {}
    Result(float m, float p, float pts, int c, int r) : Exam(m, p), Sports(pts), Student(c, r)
    {
    }
    void print_result()
    {
        print_student();
        print_marks1();
        print_marks2();
        cout << "Result: Percentage =" << (Math + Physic + pt) / 3 << endl;
    }
};

int main()
{
    Result r1(3, 4, 5, 1, 2);
    r1.print_result();
    return 0;
}