/*

overloding of unary operator
++(pre and post)

*/
#include <iostream>
using namespace std;

class integer
{
private:
    int x;

public:
    void setdata(int a)
    {
        x = a;
    }
    void showdata()
    {
        cout << "x=" << x << ",";
    }
    integer operator-()
    {
        integer temp;
        return temp;
    }
    integer operator++() //preincrement
    {
        integer i;
        i.x = ++x;
        return i;
    }
    integer operator++(int) //postincrement
    {
        integer i;
        i.x = x++;
        return i;
    }
};
int main()
{
    integer c1, c2;
    c1.setdata(3);
    c2 = ++c1;
    // -> c2=c1.operator++()
    cout << "the value after pre increment" << endl;
    c1.showdata();
    c2.showdata();
    c2 = c1++;
    cout << "\nthe value after post increment" << endl;
    c1.showdata();
    c2.showdata();
    return 0;
}