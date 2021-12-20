#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

class str
{
    char s[10];

public:
    str() {}
    str(char[]);
    void incrUpperchar(char[], int);
    void incrlowerchar(char[], int);
    void checkchar(char s[])
    {
        if (isupper(s[2]))
        {
            if (s[2] == 'Z')
            {
                s[2] = 'A';
                if (s[1] == 'Z')
                {
                    s[2] = 'A';
                    s[1] = 'A';
                    if (s[0] == 'Z')
                    {
                        cout << "!!All alphabetical value had allready been increnmented" << endl;
                        cout << "Do it again...." << endl;
                        exit(0);
                    }
                    else
                    {
                        incrUpperchar(s, 0);
                    }
                }
                else
                {
                    incrUpperchar(s, 1);
                }
            }
            else
            {
                incrUpperchar(s, 2);
            }
        }
        else
        {
            if (s[2] == 'z')
            {
                s[2] = 'a';
                if (s[1] == 'z')
                {
                    s[2] = 'a';
                    s[1] = 'a';
                    if (s[0] == 'z')
                    {
                        cout << "!!All alphabetical value had allready been increnmented" << endl;
                        cout << "Do it again...." << endl;
                        exit(0);
                    }
                    else
                    {
                        incrlowerchar(s, 0);
                    }
                }
                else
                {
                    incrlowerchar(s, 1);
                }
            }
            else
            {
                incrlowerchar(s, 2);
            }
        }
    }
    void calculation(char s[])
    {
        int num[3], i = 0;
        int count;
        int countchar = 0, countnumber = 0;
        int len;
        len = strlen(s);
        // checking valid string
        // Checking six string
        if (len == 6)
        {
            for (int i = 0; i < strlen(s) / 2; i++)
            {
                //checking first three char is alpha and second three char is number or not
                if (isalpha(s[i]) && isdigit(s[i + 3]))
                {
                    countchar++;
                }
            }
            if (countchar == 3)
            {
                // converting second three string to number
                for (int i = 3; i < strlen(s); i++)
                {
                    num[i - 3] = (int)s[i] - 48;
                }
                goto label;
            }
            else
            {
                cout << "!! Invalid string, Please Try Again...." << endl;
            }
        }
        else
        {
            cout << "!! Please enter only 6 letter Again...." << endl;
            exit(0);
        }

        // increnment start.....
        while (true)
        {
        label:
            if (i == 0)
            {
                cout << "Enter 1 to increnment or Enter 0 to End the program: ";
                i++;
            }
            else
            {

                cout << "Enter 1 or 0: ";
            }
            cin >> count;
            if (count == 1)
            {
                // After increnment
                if (num[2] < 9)
                {
                    num[2]++;
                    printIncrenment(s, num);
                }
                else
                {
                    num[2] = 0;
                    num[1]++;
                    if (num[1] == 10)
                    {
                        num[2] = 0;
                        num[1] = 0;
                        num[0]++;
                        if (num[0] == 10)
                        {
                            cout << "!!All numerial value had allready been increnmented" << endl;
                            cout << "Do it again...." << endl;
                            exit(0);
                        }
                    }
                    checkchar(s);
                    printIncrenment(s, num);
                }
            }
            else if (count == 0)
            {
                cout << "!! End of Progrma" << endl;
                exit(0);
            }
        }
    }
    void printIncrenment(char s[], int num[])
    {
        cout << "The string after increnment is: " << s[0] << s[1] << s[2] << num[0] << num[1] << num[2] << endl;
    }
};

str ::str(char s[])
{
    strcpy(this->s, s);
}

// Increnmenting charector
void str::incrUpperchar(char c[], int a)
{
    if (c[a] == 'A')
        c[a] = 'B';
    else if (c[a] == 'B')
        c[a] = 'C';
    else if (c[a] == 'C')
        c[a] = 'D';
    else if (c[a] == 'D')
        c[a] = 'E';
    else if (c[a] == 'E')
        c[a] = 'F';
    else if (c[a] == 'F')
        c[a] = 'G';
    else if (c[a] == 'G')
        c[a] = 'H';
    else if (c[a] == 'H')
        c[a] = 'I';
    else if (c[a] == 'I')
        c[a] = 'J';
    else if (c[a] == 'J')
        c[a] = 'K';
    else if (c[a] == 'K')
        c[a] = 'L';
    else if (c[a] == 'L')
        c[a] = 'M';
    else if (c[a] == 'M')
        c[a] = 'N';
    else if (c[a] == 'N')
        c[a] = 'O';
    else if (c[a] == 'O')
        c[a] = 'P';
    else if (c[a] == 'P')
        c[a] = 'Q';
    else if (c[a] == 'Q')
        c[a] = 'R';
    else if (c[a] == 'R')
        c[a] = 'S';
    else if (c[a] == 'S')
        c[a] = 'T';
    else if (c[a] == 'T')
        c[a] = 'U';
    else if (c[a] == 'U')
        c[a] = 'V';
    else if (c[a] == 'V')
        c[a] = 'W';
    else if (c[a] == 'W')
        c[a] = 'X';
    else if (c[a] == 'X')
        c[a] = 'Y';
    else if (c[a] == 'Y')
        c[a] = 'Z';
}

void str::incrlowerchar(char c[], int a)
{

    if (c[a] == 'a')
        c[a] = 'b';
    else if (c[a] == 'b')
        c[a] = 'c';
    else if (c[a] == 'c')
        c[a] = 'd';
    else if (c[a] == 'd')
        c[a] = 'e';
    else if (c[a] == 'e')
        c[a] = 'f';
    else if (c[a] == 'f')
        c[a] = 'g';
    else if (c[a] == 'g')
        c[a] = 'h';
    else if (c[a] == 'h')
        c[a] = 'i';
    else if (c[a] == 'i')
        c[a] = 'j';
    else if (c[a] == 'j')
        c[a] = 'k';
    else if (c[a] == 'k')
        c[a] = 'l';
    else if (c[a] == 'l')
        c[a] = 'm';
    else if (c[a] == 'm')
        c[a] = 'n';
    else if (c[a] == 'n')
        c[a] = 'o';
    else if (c[a] == 'o')
        c[a] = 'p';
    else if (c[a] == 'p')
        c[a] = 'q';
    else if (c[a] == 'q')
        c[a] = 'r';
    else if (c[a] == 'r')
        c[a] = 's';
    else if (c[a] == 's')
        c[a] = 't';
    else if (c[a] == 't')
        c[a] = 'u';
    else if (c[a] == 'u')
        c[a] = 'v';
    else if (c[a] == 'v')
        c[a] = 'w';
    else if (c[a] == 'w')
        c[a] = 'x';
    else if (c[a] == 'x')
        c[a] = 'y';
    else if (c[a] == 'y')
        c[a] = 'z';
}

int main()
{
    str s1;
    char s[10];
    cout << "\nEnter 6 charecter string" << endl
         << "NOTE:: First three charecter needs to be alphabet and secod three needs to be number" << endl;
    cout << "Example:" << endl
         << "ABC123" << endl
         << "EBA456" << endl;
    cin >> s;
    s1.calculation(s);
    return 0;
}