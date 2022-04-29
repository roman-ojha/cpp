#include <iostream>
#include <string>
#include <string.h>
using namespace std;

enum states
{
    q0,
    q1,
    qs,
    q2,
    q3,
    qd
};

enum states checkComment(enum states curr_state, char s)
{
    switch (curr_state)
    {
    case q0:
        if (s == '/')
            return q1;
        else
            return q0;
    case q1:
        if (s == '/')
            return qs;
        else if (s == '*')
            return q2;
        else
            return q0;
    case q2:
        if (s == '*')
            return q3;
        else
            return q2;
    case q3:
        if (s == '/')
            return qd;
        else
            return q2;
    default:
        return q0;
    }
}

int main()
{
    char input[100];
    int i = 0;
    enum states curr_state = q0;
    int isSingleComment = 0;
    cout << "Enter any string: ";
    gets(input);
    while (input[i] != '\0')
    {
        curr_state = checkComment(curr_state, input[i]);
        if (curr_state == qs)
        {
            break;
        }
        i++;
    }
    if (curr_state == qs)
    {
        cout << "given string is single line comment";
    }
    else if (curr_state == qd)
    {
        cout << "given string is a multi line comment";
    }
    else
    {
        cout << "given string is not a comment";
    }
    return 0;
}