#include <iostream>
#include <string>
using namespace std;

class lecturers
{
protected:
    int ID;
    string name;

public:
    void readdata(int i, string n)
    {
        ID = i;
        name = n;
    }
    void printdata()
    {
        cout << "The name of the lacturers is= " << name
             << " and the id of the lacturers is= " << ID << endl;
    }
};

int main()
{
    lecturers l;
    l.readdata(321, "Roman");
    l.printdata();
    return 0;
}