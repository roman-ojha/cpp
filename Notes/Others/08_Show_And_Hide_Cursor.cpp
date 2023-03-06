// Set Cursor.cpp : main project file.

#include <iostream>
#include <windows.h>

using namespace std;

void setcursor(bool, DWORD);

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

void setcursor();

int main()
{
    cout << "Cursor ON for 10 seconds." << endl;
    for (int x = 0; x < 10; x++)
    {
        Sleep(1000);
    }
    setcursor(0, 0);
    cout << "Cursor OFF for 10 seconds." << endl;
    for (int x = 0; x < 10; x++)
    {
        Sleep(1000);
    }
    cout << "Cursor is now back ON." << endl;
    setcursor(1, 10);

    return 0;
}

void setcursor(bool visible, DWORD size) // set bool visible = 0 - invisible, bool visible = 1 - visible
{
    if (size == 0)
    {
        size = 20; // default cursor size Changing to numbers from 1 to 20, decreases cursor width
    }
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, &lpCursor);
}