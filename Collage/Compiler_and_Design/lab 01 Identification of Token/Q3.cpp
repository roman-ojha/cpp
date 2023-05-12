// Q3. Write a program to simulate lexical analyser for validating operators.
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void isOperator(string str)
{
    switch (str[0])
    {
    case '+':
        if (str[1] == '+')
        {
            cout << "Increment operator" << endl;
            break;
        }
        else if (str[1] == '=')
        {
            cout
                << "Assignment operator" << endl;
            break;
        }
        else if (str[1] == '\0')
        {
            cout
                << "+ Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '-':
        if (str[1] == '-')
        {
            cout << "Decrement operator" << endl;
            break;
        }
        else if (str[1] == '=')
        {
            cout << "Assignment operator" << endl;
            break;
        }
        else if (str[1] == '\0')
        {
            cout << "- Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '*':
        if (str[1] == '*')
        {
            cout << "Square operator" << endl;
            break;
        }
        else if (str[1] == '=')
        {
            cout << "Assignment operator" << endl;
            break;
        }
        else if (str[1] == '\0')
        {
            cout << "* Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '/':
        if (str[1] == '=')
        {
            cout << "Assignment operator" << endl;
            break;
        }
        else if (str[1] == '\0')
        {
            cout << "/ Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '%':
        if (str[1] == '=')
        {
            cout << "Assignment operator" << endl;
            break;
        }
        else if (str[1] == '\0')
        {
            cout << "\% Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '<':
        if (str[1] == '\0')
        {
            cout << "< Operator" << endl;
            break;
        }
        else if (str[1] == '=')
        {
            cout << "<= Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '>':
        if (str[1] == '\0')
        {
            cout << "> Operator" << endl;
            break;
        }
        else if (str[1] == '=')
        {
            cout << ">= Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '=':
        if (str[1] == '\0')
        {
            cout << "> Operator" << endl;
            break;
        }
        else if (str[1] == '=')
        {
            cout << ">= Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '&':
        if (str[1] == '&')
        {
            cout << "&& Operator" << endl;
            break;
        }
        else if (str[1] == '\0')
        {
            cout << "& Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '|':
        if (str[1] == '|')
        {
            cout << "|| Operator" << endl;
            break;
        }
        else if (str[1] == '\0')
        {
            cout << "& Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    case '!':
        if (str[1] == '\0')
        {
            cout << "! Operator" << endl;
            break;
        }
        else if (str[1] == '=')
        {
            cout << "!= Operator" << endl;
            break;
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break;
        }
    default:
        cout << "Invalid Operator" << endl;
        break;
    }
}

int main()
{
    string str;
    while (true)
    {
        cout << "Enter a string: " << endl;
        getline(cin, str);
        isOperator(str);
        int repeat;
        cout << "Do you want to try it again: ";
        cin >> repeat;
        cin.ignore();
        if (repeat == 0)
        {
            break;
        }
    }
    cout << "Name: Roman Ojha" << endl;
    cout << "Roll.No: 25" << endl;
    return 0;
}