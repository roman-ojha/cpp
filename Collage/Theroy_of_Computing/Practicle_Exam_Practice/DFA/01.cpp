// String that start with 01
#include <iostream>
using namespace std;

enum states
{
    q0,
    q1,
    q2,
    qf
};
enum states delta(enum states s, char ch)
{
    switch (s)
    {
    case q0:
        if (ch == '0')
        {
            return q1;
        }
        else
        {
            return qf;
        }
    case q1:
        if (ch == '1')
        {
            return q2;
        }
        else
        {
            return qf;
        }
    case q2:
        if (ch == '0' || ch == '1')
        {
            return q2;
        }
        else
        {
            return qf;
        }
    case qf:
        return qf;
    default:
        return qf;
    }
}

int main()
{
    char input[100];
    enum states curr_state = q0;
    cout << "Input the string: ";
    cin >> input;
    int i = 0;
    char ch = input[i];
    while (ch != '\0')
    {
        curr_state = delta(curr_state, ch);
        ch = input[++i];
    }
    if (curr_state == q2)
    {
        cout << "Accepted";
    }
    else
    {
        cout << "Rejected";
    }
    return 0;
}