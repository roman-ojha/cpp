// Q4. Write a program to test whether given input is keyword or not
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void isKeyword(string str)
{
    // check if give str is keyword or not
    if (str == "int" || str == "float" || str == "char" || str == "double" || str == "long" || str == "short" || str == "signed" || str == "unsigned" || str == "if" || str == "else" || str == "for" || str == "while" || str == "do" || str == "break" || str == "continue" || str == "goto" || str == "switch" || str == "case" || str == "default" || str == "return" || str == "auto" || str == "extern" || str == "register" || str == "static" || str == "const" || str == "sizeof" || str == "typedef" || str == "volatile" || str == "struct" || str == "union" || str == "enum" || str == "void" || str == "bool" || str == "true" || str == "false")
    {
        cout << "Keyword" << endl;
    }
    else
        cout << "Invalid Keyword" << endl;
}

int main()
{
    string str;
    while (true)
    {
        cout << "Enter a string: " << endl;
        getline(cin, str);
        isKeyword(str);
        int repeat;
        cout << "Do you want to try it again: ";
        cin >> repeat;
        cin.ignore();
        if (repeat == 0)
        {
            break;
        }
    }
}