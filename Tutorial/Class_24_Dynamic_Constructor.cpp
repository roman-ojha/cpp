#include <iostream>
using namespace std;

class number
{
    int a, b;
    int *p;

public:
    number()
    {
        cout << "Enter any number:" << endl;
        p = new int;
        cin >> a >> b >> *p;
    }
    number(int x, int y, int z)
    {
        a = x;
        b = y;
        p = new int;
        // The creation of the memory block which is handle by the object and which memory is pointed by a pointer
        // and this memory block is not the memory of any object
        // the job of the dymamic constructor is to create a memory block in which the member of an object is pointing that momory block
        // this is not the momory of an object but this is a momory which is made for an object
        *p = z;
    }
    void showdata()
    {
        cout << "A=" << a << " B=" << b << " C=" << *p << endl;
    }
};

int main()
{
    number n1, n2(1, 2, 3);
    cout << "Using dynamic constructor:" << endl;
    n2.showdata();
    n1.showdata();
    return 0;
}
