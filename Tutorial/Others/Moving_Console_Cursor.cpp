#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

// Function prototype
// setcursorposition will set the console Cursor where ever we want
void setCursorPosition(int x, int y);
// this function will just print the charecter to the set cursor destination
void clearScrean(const string &ch);

// define menu system enum
enum MenuSystem
{
    SHOWMENU,
    MOVECURSOR,
    EXITPROGRAM
};

int main()
{
    // setCursorPosition(30, 20);
    // cout << "[20, 3]";
    string name;
    cout << "Enter your name:";
    cin >> name;
    clearScrean(name);
    cin.get();
    // this will keep the console window open until we press the Enter key
    return 0;
}

// function defination
void setCursorPosition(int x, int y)
{
    // first we need to uptain the handel in the console screen
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position;
    position.X = x;
    position.Y = y;
    SetConsoleCursorPosition(output, position);
    // this will define that where the console cursor will possition to
}

void clearScrean(const string &ch)
{
    // Default width of the console application
    //Default height of the console application
    int x, y;
    cout << "Enter the X cooridinate:";
    cin >> x;
    cout << "Enter the Y coordinate:";
    cin >> y;
    // this function will set the cousor in the coursor application
    setCursorPosition(x, y);
    // after set charecter will print
    cout << ch;
}