// Strict Alteration
#include <iostream>
#define N 2
#define TRUE 1
#define FALSE 0
using namespace std;

int interested[N];
int turn;
void enter_region(int process)
{
    while (turn != process)
        ;
    cout << "Process " << process << " in CR" << endl;
}
void leave_region(int process)
{
    if (turn == N - 1)
        turn = 0;
    else
        turn++;
    cout << "Process " << process << " left CR" << endl;
}

int main()
{
    turn = 0;
    enter_region(0);
    leave_region(0);
    enter_region(1);
    leave_region(1);
}