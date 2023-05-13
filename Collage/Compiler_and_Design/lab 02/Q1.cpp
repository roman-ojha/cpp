// Q1. Write a C program to implement DFA for accepting all string end with OO over on alphabet[0,1]
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
            if (c == '0')
            {
                cout << state << endl;
                state = 1;
            }
            else if (c == '1')
            {
                cout << state << endl;
                state = 0;
            }
            else
            {
                state = 3;
            }
            break;
        case 1:
            c = str[i++];
            if (c == '0')
            {
                cout << state << endl;
                state = 2;
            }
            else if (c == '1')
            {
                cout << state << endl;
                state = 0;
            }
            else
            {
                state = 3;
            }
            break;
        case 2:
            c = str[i++];
            if (c == '0')
            {
                cout << state << endl;
                state = 2;
            }
            else if (c == '1')
            {
                cout << state << endl;
                state = 0;
            }
            else
            {
                state = 3;
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