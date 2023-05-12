#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int choice;
        string str;
        int state = 0;
        char c;
        int i = 0;
        printf("Enter any string: ");
        getline(cin, str);
        while (str[i] != '\0')
        {
            switch (state)
            {
            case 0:
                c = str[i++];
                if (c == '0')
                {
                    state = 1;
                }
                else if (c == '1')
                {
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
                    state = 2;
                }
                else if (c == '1')
                {
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
                    state = 2;
                }
                else if (c == '1')
                {
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
        {

            printf("  Given input string is accepted");
        }
        else
        {
            printf("  Given input string is rejected");
        }

        printf("\n  Do you want to continue(0,1)?:");
        cin >> choice;
        cin.ignore();
        if (choice != 1)
        {
            break;
        }
    }
    printf("\n  Name:Manish Kumar Yadav\n");
    printf("  Roll No: 17");
    return 0;
}