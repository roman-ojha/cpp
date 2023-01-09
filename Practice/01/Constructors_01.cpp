#include<iostream>
#include<string>
using namespace std;
class student
{
    char name[5];
    int roll_NO;
public:
    student(void);
    void setdata()
    {
        cout<<"Enter your name=";
        cin>>name;
        cout<<"Enter your Roll NO=";
        cin>>roll_NO;
    }
    void display()
    {
        cout<<"name="<<name<<endl;
        cout<<"Roll NO="<<roll_NO<<endl;
    }
};
student::student(void)
{
    name[5]=0;
    roll_NO=0;
}
int main()
{
    student s1,s2;
    s1.setdata();
    s1.display();
    s2.setdata();
    s2.display();
    return 0;
}