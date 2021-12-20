#include<iostream>
using namespace std;
class Employee
{
    int ID[50];
    int salary[50];
    static int count;
    public:
    void getdata()
    {
        cout<<"Enter ID of the NO."<<count+1<<" employee=";
        cin>>ID[count];
        cout<<endl;
        cout<<"enter the salary of the NO."<<count+1<<" employee=";
        cin>>salary[count];
        count++;
    }
    void setdata()
    {
        for(int i=0;i<count;i++)
        {
            cout<<"ID of the No."<<i+1<<" employee is= "<<ID[i]<<endl;
            cout<<"salary of the No."<<i+1<<" employee is= "<<salary[i]<<endl;
        }
    }
};
int Employee::count;
int main()
{
    Employee e1;
    e1.getdata();
    e1.getdata();
    e1.getdata();
    e1.setdata();

    return 0;
}