#include <iostream>
#include <windows.h>
using namespace std;

void Say_Hello()
{
    cout << "hellow" << endl;
}

int main()
{
    for (;;)
    {

        // Sleep for 50*1000ms
        Sleep(5000);
        Say_Hello();
    }
    return 0;
}