#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    int b[3][3];
    cout << "Enter 3*3 matirx ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The given matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "|\t";
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "|";
        cout << "\n";
    }
    cout << "The transpose of the given matrix is" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "|\t";
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
            cout << b[i][j] << "\t";
        }
        cout << "|";
        cout << "\n";
    }
    cout << "The sum of diagonal element of 3*3 matrix is:";
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    cout << sum << endl;
    int c[3][3];
    cout << "the Multiplication of the two matirx A and B is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "|\t";
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << "|";
        cout << "\n";
    }
    return 0;
}