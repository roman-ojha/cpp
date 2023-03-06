#include <iostream>
#include <windows.h>

using namespace std;

// Definning the height and width of the console windlows
#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 900

// Setting variable for to manipulate Console window size
HWND Window_Console = GetConsoleWindow();
RECT Windows_Console_React;

// Set consloe windows size
void SetConsloeWindowsSize()
{
    GetWindowRect(Window_Console, &Windows_Console_React);
    MoveWindow(Window_Console, Windows_Console_React.left, Windows_Console_React.top, SCREEN_WIDTH, SCREEN_HEIGHT, TRUE);
}

int main()
{
    SetConsloeWindowsSize();
    system("pause");
}