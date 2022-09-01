// FCFS
/*
Enter total number of processes(maximum 20):3
nEnter Process Burst TimenP[1]:24
P[2]:3
P[3]:3
*/
#include <stdio.h>

int main()

{
    int n, bt[20], wt[20], turn[20], avg_wait = 0, avg_turn = 0, i, j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d", &n);

    printf("nEnter Process Burst Timen");
    for (i = 0; i < n; i++)
    {
        printf("P[%d]:", i + 1);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;

    for (i = 1; i < n; i++)
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
            wt[i] += bt[j];
    }

    for (i = 0; i < n; i++)
    {
        turn[i] = bt[i] + wt[i];
        avg_wait += wt[i];
        avg_turn += turn[i];
    }

    avg_wait /= i;
    avg_turn /= i;
    printf("Process \t burst time \t waiting time \t turn around time \n");
    for (i = 0; i < n; i++)
    {
        printf("\n %d \t %d \t %d \t %d", i, bt[i], wt[i], turn[i]);
    }
    printf("\nnnAverage Waiting Time:%d", avg_wait);
    printf("\nnAverage Turnaround Time:%d", avg_turn);

    return 0;
}