// Q1. Write a C program to identify where give line is comment or not.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while (true)
    {
        cout << "Enter a string: " << endl;
        getline(cin, str);
        if (str[0] == '/' && str[1] == '/')
        {
            cout << "Single line comment" << endl;
        }
        else if (str[0] == '/' && str[1] == '*')
        {
            for (int i = 2; i < str.size(); i++)
            {
                if (str[i] == '*' && str[i + 1] == '/')
                {
                    cout << "Multiline comment" << endl;
                }
            }
        }
        else
        {
            cout << "Not a comment" << endl;
        }
        int repeat;
        cout << "Do you want to try it again: ";
        cin >> repeat;
        cin.ignore();
        if (repeat == 0)
        {
            break;
        }
    }
    return 0;
}