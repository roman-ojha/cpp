// f(w) = w`
// NOTE: we are complementing string from opposite side of the string
#include <iostream>
#include <string.h>
using namespace std;

enum states
{
    q0,
    q1,
    q2
};

int main()
{
    char input[100];
    enum states curr_state = q0;
    int i;
    for (i = 0; i < 100; i++)
    {
        input[i] = '\0';
    }
    cout << "enter a binary string: ";
    cin >> input;
    i = static_cast<int>(strlen(input)) - 1;
    cout << "before reverse: " << input << endl;
    while (1)
    {
        switch (curr_state)
        {
        case q0:
            if (input[i] == '0')
            {
                curr_state = q0;
                input[i] = '1';
                i--;
            }
            else if (input[i] == '1')
            {
                curr_state = q0;
                input[i] = '0';
                i--;
            }
            else if (input[i] == '\0')
            {
                curr_state = q1;
                i++;
            }
            break;
        case q1:
            if (input[i] == '0')
            {
                curr_state = q1;
                i++;
            }
            else if (input[i] == '1')
            {
                curr_state = q1;
                i++;
            }
            else if (input[i] == '\0')
            {
                curr_state = q2;
            }
            break;
        case q2:
            curr_state = q2;
            break;
        }
        if (curr_state == q2)
            break;
    }
    cout << "after reverse: " << input << endl;
    return 0;
}