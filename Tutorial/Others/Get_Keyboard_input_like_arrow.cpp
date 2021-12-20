#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_X 120

int main()
{

    char playerName;
    cout << "Enter Player Name: ";
    cin >> playerName;

    char key = getch();
    int value = key;

    while (value != KEY_X)
    {

        switch (getch())
        {

        case KEY_UP:
            cout << playerName << " GOES UP\n\n";
            break;
        case KEY_DOWN:
            cout << playerName << " GOES DOWN\n\n";
            break;
        case KEY_LEFT:
            cout << playerName << " GOES LEFT\n\n";
            break;
        case KEY_RIGHT:
            cout << playerName << " GOES RIGHT\n\n";
            break;
        }
        key = getch();
        value = key;
    }

    system("pause");
    return 0;
}