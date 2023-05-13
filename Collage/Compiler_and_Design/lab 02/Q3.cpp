// Q3. Write a program to recognize string under a*, a*b* and abb
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int state = 0;
    char c;
    int i = 0;
    cout << "Enter any string" << endl;
    // getline(cin, str);
    cin >> str;
    while (str[i] != '\0')
    {
        switch (state)
        {
        case 0:
            c = str[i++];
            if (c == 'a')
            {
                state = 1;
            }
            else if (c == 'b')
            {
                state = 2;
            }
            else
            {
                state = 6;
            }
            break;
        case 1:
            c = str[i++];
            if (c == 'a')
            {
                state = 3;
            }
            else if (c == 'b')
            {
                state = 4;
            }
            else
            {
                state = 6;
            }
            break;
        case 2:
            c = str[i++];
            if (c == 'a')
            {
                state = 6;
            }
            else if (c == 'b')
            {
                state = 2;
            }
            else
            {
                state = 6;
            }
            break;
        case 3:
            c = str[i++];
            if (c == 'a')
            {
                state = 3;
            }
            else if (c == 'b')
            {
                state = 2;
            }
            else
            {
                state = 6;
            }
            break;
        case 4:
            c = str[i++];
            if (c == 'a')
            {
                state = 6;
            }
            else if (c == 'b')
            {
                state = 5;
            }
            else
            {
                state = 6;
            }
            break;
        case 5:
            c = str[i++];
            if (c == 'a')
            {
                state = 6;
            }
            else if (c == 'b')
            {
                state = 2;
            }
            else
            {
                state = 6;
            }
            break;
        default:
            break;
        }
    }
    if (state == 2)
        cout << "Accept" << endl;
    else
        cout << "Reject" << endl;
    return 0;
}