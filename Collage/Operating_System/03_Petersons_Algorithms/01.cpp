// Peterson's Algorithms
#include <iostream>
#define N 2
#define TRUE 1
#define FALSE 0
using namespace std;

int interested[N];
int turn;
void enter_region(int process)
{
   int other;
   other = 1 - process;
   interested[process] = TRUE;
   turn = process;
   while (interested[other] == TRUE && turn == process)
      ;
   cout << "Process " << process << " in CR" << endl;
}
void leave_region(int process)
{
   interested[process] = FALSE;
   cout << "Process " << process << " left CR" << endl;
}

int main()
{
   enter_region(0);
   leave_region(0);
   enter_region(1);
   leave_region(1);
}