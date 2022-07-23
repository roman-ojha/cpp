#include <stdio.h>
#include <iostream>
#include <string.h>
#define MAX 100

using namespace std;

enum states
{
    q0,
    q1,
    q2
};

class Stack
{
public:
    char symbols[MAX];
    int top;

    char get_stack_top()
    {
        return symbols[top];
    }

    void push(char ch)
    {
        if (top < MAX - 1)
            symbols[++top] = ch;
        else
            cout << "stack fail" << endl;
    }

    void pop()
    {
        if (top > -1)
        {
            symbols[top] = ' ';
            top--;
        }
        else
            cout << "stack empty" << endl;
    }
};

Stack s;

enum states delta(enum states state, char ch, char st_top)
{
    enum states curr_state;
    switch (state)
    {
    case q0:
        if (ch == 'e' && st_top == 'e')
        {
            curr_state = q1;
            s.push('$');
        }
        break;
    case q1:
        if (ch == '0' && (st_top == '$' || st_top == '0'))
        {
            curr_state = q1;
            s.push(ch);
        }
        else if (ch == '1' && (st_top == '$' || st_top == '1'))
        {
            curr_state = q1;
            s.push(ch);
        }
        else if ((ch == '1' && st_top == '0') || (ch == '0' && st_top == '1'))
        {
            curr_state = q1;
            s.push(ch);
        }
        else if (ch == 'c')
        {
            curr_state = q2;
        }
        break;
    case q2:
        if (ch == '0' && st_top == '0')
        {
            curr_state = q2;
            s.pop();
        }
        else if (ch == '1' && st_top == '1')
        {
            curr_state = q2;
            s.pop();
        }
        else if (ch == '\0' && st_top == '$')
        {

            curr_state = q2;
            // s.pop();
        }
        break;
    default:
        curr_state = q2;
    }
    return curr_state;
};

int main()
{
    char input[20];
    enum states curr_state = q0;
    s.top = -1;
    int i = 0;
    char ch = 'e';
    char st_top = 'e';
    curr_state = delta(curr_state, ch, st_top);
    cout << "Enter a binary string: ";
    cin >> input;
    ch = input[i];
    st_top = s.get_stack_top();
    int c = 0;
    while (c <= static_cast<int>(strlen(input)))
    {
        curr_state = delta(curr_state, ch, st_top);
        ch = input[++i];
        st_top = s.get_stack_top();
        c++;
    }
    if (s.symbols[s.top] == '$')
        cout << "The string " << input << " is accepted" << endl;
    else
        cout << "rejected" << endl;
    return 0;
}
