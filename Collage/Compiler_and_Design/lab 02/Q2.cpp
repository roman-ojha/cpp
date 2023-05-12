// Q2. Write a Cpp program to implement DFA for accepting even no of 0's and
// even number of 1's
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
    cout << "Enter any string: ";
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
          state = 2;
        }
        else
        {
          state = 4;
        }
        break;
      case 1:
        c = str[i++];
        if (c == '0')
        {
          state = 0;
        }
        else if (c == '1')
        {
          state = 3;
        }
        else
        {
          state = 4;
        }
        break;
      case 2:
        c = str[i++];
        if (c == '0')
        {
          state = 3;
        }
        else if (c == '1')
        {
          state = 0;
        }
        else
        {
          state = 4;
        }
        break;
      case 3:
        c = str[i++];
        if (c == '0')
        {
          state = 2;
        }
        else if (c == '1')
        {
          state = 1;
        }
        else
        {
          state = 4;
        }
        break;
      default:
        break;
      }
    }
    if (state == 0)
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
