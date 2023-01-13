#include <iostream>
using namespace std;

/*

Class template with multiple tarameters
template<class T1,class T2>
class nameOfClass
{
    //body
}
*/

template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 d1, T2 d2)
    {
        data1 = d1;
        data2 = d2;
    }
    void display()
    {
        cout << this->data1 << this->data2 << endl;
    }
};
int main()
{
    myclass<int, char> obj(10, 'R');
    obj.display();
    myclass<int, float> obj2(14, .5);
    obj2.display();
    return 0;
}