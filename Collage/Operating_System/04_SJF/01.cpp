// SJF
/*
Enter number of process:4
Enter Burst Time:
p1:24
p2:2
p3:3
p4:5
*/
#include <stdio.h>
int main()
{
    int bt[20], p[20], wt[20], tat[20], i, j, n, total = 0, pos, temp, avg_wt, avg_tat;
    printf("Enter number of process:");
    scanf("%d", &n);

    printf("Enter Burst Time:\n");
    for (i = 0; i < n; i++)
    {
        printf("p%d:", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }

    // sorting of burst times
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (bt[j] < bt[pos])
                pos = j;
        }

        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;

        temp = p[i];
        p[i] = p[pos];
        p[pos] = temp;
    }

    wt[0] = 0;

    for (i = 1; i < n; i++)
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
            wt[i] += bt[j];

        total += wt[i];
    }

    avg_wt = total / n;
    total = 0;

    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        total += tat[i];
    }
    printf("Process \t burst time \t waiting time \t turn around time \n");
    for (i = 0; i < n; i++)
    {
        printf("\n %d \t %d \t %d \t %d", p[i], bt[i], wt[i], tat[i]);
    }
    avg_tat = total / n;
    printf("\nAverage Waiting Time=%d", avg_wt);
    printf("\nAverage Turnaround Time=%d", avg_tat);
}