#include <iostream>
using namespace std;

// this is the way to put default argumment to the template
template <class T1 = int, class T2 = float, class T3 = char>
class Roman
{
public:
    T1 a;
    T2 b;
    T3 c;
    Roman(T1 x, T2 y, T2 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "A=" << a << " B=" << b << " C=" << c << endl;
    }
};

int main()
{
    // because not Roman is template we have to use <> say that
    Roman<> r(1, 2.7, 'r');
    r.display();
    Roman<float, char> r1(5.4, 'r', 'o');
    r1.display();
    return 0;
}