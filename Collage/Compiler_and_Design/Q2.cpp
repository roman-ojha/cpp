// Q2. Write a program to test whether given identifier is valid or not.
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int a;
    while (true)
    {
        cout << "Enter a string:" << endl;
        getline(cin, str);
        if (!isalpha(str[0]) && str[0] != '_')
        {
            cout << "Not a valid identifier" << endl;
        }
        else
        {
            int flag = 1;
            for (int i = 1; i < str.size(); i++)
            {
                if (!isalpha(str[i]) && !isdigit(str[i]))
                {
                    flag = 0;
                }
            }
            if (flag == 1)
            {
                cout << "Valid identifier" << endl;
            }
            else
            {
                cout << "Not a valid identifier" << endl;
            }
        }
        int repeat;
        cout << "Do you want to try it again: ";
        cin >> repeat;
        // clear input buffer
        cin.ignore();
        if (repeat == 0)
        {
            break;
        }
    }
    return 0;
}