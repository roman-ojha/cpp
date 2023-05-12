// Q1. Write a C program to implement DFA for accepting all string end with OO
// over on alphabet[0,1]
#include <iostream>
#include <string>
using namespace std;

int main()
{
  while (true)
  {

    string str;
    int state = 0;
    char c;
    int i = 0;
    cout << "Enter any string:";
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
      cout << "Accept" << endl;
    else
      cout << "Reject" << endl;
    int repeat;
    cout << "Enter 1 to repeat: ";
    cin >> repeat;
    cin.ignore();
    if (repeat != 1)
      break;
  }
  cout << "Name: Roman Ojha" << endl;
  cout << "Roll.No: 25" << endl;
  return 0;
}
