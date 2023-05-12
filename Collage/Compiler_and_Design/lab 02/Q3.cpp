// Q3. Write a program to recognize string under a*, a*b+ and abb
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
        if (c == 'a')
          state = 1;
        else if (c == 'b')
          state = 2;
        else
          state = 6;
        break;
      case 1:
        c = str[i++];
        if (c == 'a')
          state = 3;
        else if (c == 'b')
          state = 4;
        else
          state = 6;
        break;
      case 2:
        c = str[i++];
        if (c == 'a')
          state = 6;
        else if (c == 'b')
          state = 2;
        else
          state = 6;
        break;
      case 3:
        c = str[i++];
        if (c == 'a')
          state = 3;
        else if (c == 'b')
          state = 2;
        else
          state = 6;
        break;
      case 4:
        c = str[i++];
        if (c == 'a')
          state = 6;
        else if (c == 'b')
          state = 5;
        else
          state = 6;
        break;
      case 5:
        c = str[i++];
        if (c == 'a')
          state = 6;
        else if (c == 'b')
          state = 2;
        else
          state = 6;
        break;
      case 6:
        c = str[i++];
        if (c == 'a')
          state = 6;
        else if (c == 'b')
          state = 6;
        else
          state = 6;
        break;
      default:
        printf("invalid input");
        break;
      }
    }
    if (state == 0 || state == 1 || state == 3)
      cout << "Accepted for a*" << endl;
    else if (state == 2 || state == 4)
      cout << "Accepted for a*b+" << endl;
    else if (state == 5)
      cout << "Accepted for abb" << endl;
    else
      cout << "Rejected" << endl;
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
