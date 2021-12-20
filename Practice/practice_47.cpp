#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {4, 3, 5, 6, 7};
    int inter[5];
    int un[10];
    int AminusB[5];
    int BminusA[5];
    int intersection = 0;
    int union1 = 0;
    int difference = 0;
    // finding intersection
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[i] == B[j])
            {
                inter[intersection] = A[i];
                intersection++;
            }
        }
    }
    cout << "Intersection set: ";
    for (int i = 0; i < intersection; i++)
    {
        cout << inter[i] << ",";
    }
    cout << endl;
    // Finding Union
    for (int i = 0; i < 5; i++)
    {
        un[union1] = A[i];
        union1++;
    }
    for (int i = 0; i < 5; i++)
    {
        un[union1] = B[i];
        union1++;
    }
    cout << "Union set: ";
    for (int i = 0; i < union1; i++)
    {
        cout << un[i] << ",";
    }
    cout << endl;
    // Finding Difference
    int differenceValue;
    bool same;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[i] == B[j])
            {
                same = true;
                continue;
            }
            else
            {
                differenceValue = A[i];
            }
        }
        if (same != true)
        {

            AminusB[i] = differenceValue;
            difference++;
        }
    }
    cout << "A-B set: ";
    for (int i = 0; i < difference; i++)
    {
        cout << AminusB[i] << ",";
    }
    cout << endl;
    return 0;
}