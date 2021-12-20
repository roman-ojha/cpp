#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int a[r][c];
    int b[c][r];
    int d[r][r];
    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element a" << i << j << " ";
            cin >> a[i][j];
        }
    }
    cout << "Entered matrix:" << endl;
    for (int i = 0; i < r; i++)
    {
        cout << "|\t";
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "|" << endl;
    }
    cout << "The transpose of the given matrix is:" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < c; i++)
    {
        cout << "|\t";
        for (int j = 0; j < r; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "|" << endl;
    }
    cout << "Multiplication of the two matrix is:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            d[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                d[i][j] = d[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        cout << "|\t";
        for (int j = 0; j < r; j++)
        {
            cout << d[i][j] << "\t";
        }
        cout << "|" << endl;
    }
    return 0;
}