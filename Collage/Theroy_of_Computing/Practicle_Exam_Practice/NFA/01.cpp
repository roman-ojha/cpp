// NFA which accept that strings which contain 001 as substring

#include <iostream>
#include <string.h>
using namespace std;

char input[100];
int l;
int flag = 0;

void qf(int i)
{
    if (input[i] == '\0' || input[i] == '0' || input[i] == '1')
    {
        flag = 1;
    }
}

void q2(int i)
{
    if (i < l)
    {

        if (input[i] == '1')
        {
            i++;
            qf(i);
        }
    }
}

void q1(int i)
{
    if (i < l)
    {

        if (input[i] == '0')
        {
            i++;
            q2(i);
        }
    }
}

void q0(int i)
{
    if (i < l)
    {
        int k = i;
        if (input[i] == '0')
        {
            k++;
            q0(k);
            q1(k);
        }
        else if (input[i] == '1')
        {
            i++;
            q0(i);
        }
    }
}

int main()
{
    int i = 0;
    cout << "Enter string: ";
    cin >> input;
    l = strlen(input);
    q0(i);
    if (flag == 1)
    {
        cout << "Accepted" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
    return 0;
}