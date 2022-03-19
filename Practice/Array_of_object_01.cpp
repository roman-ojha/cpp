#include <iostream>
using namespace std;
class Employee
{
    void ID(void);

public:
    void setID(void)
    {
        cout << "enter the ID of Employe" << endl;
        cin >> ID;
    }
    void getID(void)
    {
        cout << "id of the given employe is=" << ID << endl;
    }
};
int main()
{
    Employee Fb[4];
    int i;



    for (i = 0; i < 4; i++)
    {
        Fb[i].setID();
        Fb[i].getID();
    }
    return 0;
}
