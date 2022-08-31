// Implement and PDA for WcW^r using empty state
#include <iostream>
#include <string.h>
using namespace std;

enum states
{
    q0,
    q1,
    qf
};

struct Stack
{
    int top;
    char symbols[100];
} s;

void push(char ch)
{
    s.top++;
    s.symbols[s.top] = ch;
}

void pop()
{
    s.top--;
}

char get_stack_top()
{
    return s.symbols[s.top];
}

enum states delta(enum states state, char ch, char st_top)
{
    enum states curr_state;
    switch (state)
    {
    case q0:
        if (ch == 'e' || st_top == 'e')
        {
            curr_state = q1;
            push('$');
        }
        break;
    case q1:
        if (ch == '0' && (st_top == '$' || st_top == '0'))
        {
            curr_state = q1;
            push(ch);
        }
        else if (ch == '1' && (st_top == '$' || st_top == '1'))
        {
            curr_state = q1;
            push(ch);
        }
        else if ((ch == '0' && st_top == '1') || (ch == '1' && st_top == '0'))
        {
            curr_state = q1;
            push(ch);
        }
        else if (ch == 'c')
        {
            curr_state = qf;
        }
        break;
    case qf:
        if (ch == '0' && st_top == '0')
        {
            curr_state = qf;
            pop();
        }
        else if (ch == '1' && st_top == '1')
        {
            curr_state = qf;
            pop();
        }
        else if (ch == '\0' && st_top == '$')
        {
            curr_state = qf;
        }
        break;
    }
    return curr_state;
}

int main()
{
    s.top = -1;
    char input[100];
    int i = 0;
    int c = 0;
    char ch = 'e';
    char st_top = 'e';
    enum states curr_state = q0;
    delta(curr_state, ch, st_top);
    cout << "Enter string: ";
    cin >> input;
    ch = input[i];
    st_top = get_stack_top();
    int l = strlen(input);
    while (ch < l)
    {
        curr_state = delta(curr_state, ch, st_top);
        ch = input[++i];
        st_top = get_stack_top();
        c++;
    }
    if (s.symbols[s.top] == '$')
    {
        cout << "Accepted" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
    return 0;
}