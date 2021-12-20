#include <iostream>
using namespace std;

class salary
{
    int salary;
    static int count;

public:
    void setdata()
    {
        cout << "enter the salay of employe no." << count << "= " << endl;
        cin >> salary;
        count++;
    }

    void getdata()
    {
        cout << "the salary of employe no." << count << " is= " << salary << endl;
        count++;
    }
    static void clearcount(int c)
    {
        count = c;
    }
};

int salary::count = 1;

int main()
{
    salary s1, s2, s3;
    s1.setdata();
    s2.setdata();
    s3.setdata();
    salary::clearcount(1);
    s1.getdata();
    s2.getdata();
    s3.getdata();
    return 0;
}