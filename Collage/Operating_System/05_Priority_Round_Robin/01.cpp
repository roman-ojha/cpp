// Priority Round Robin
/*
enter no of process
 4
enter burst time and priority of process :
burst time: 24
priority: 6
burst time: 2
priority: 8
burst time: 3
priority: 1
burst time: 5
priority: 9
*/
#include <stdio.h>

int main()
{
    int p[10], b[10], wt[10], turn[10], avg_wait = 0, pr[10];
    int avg_turn = 0, i, n, j, temp;
    printf("enter no of process \n ");
    scanf("%d", &n);
    printf("enter burst time and priority of process : \n");
    for (i = 0; i < n; i++)
    {
        printf("burst time: ");
        scanf("%d", &b[i]);
        printf("priority: ");
        scanf("%d", &pr[i]);
        wt[i] = 0;
        p[i] = i;
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (pr[i] > pr[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                temp = b[i];
                b[j] = b[i];
                b[i] = temp;
                temp = pr[i];
                pr[i] = pr[j];
                pr[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            wt[i] += b[j];
        }
        turn[i] = wt[i] + b[i];
        avg_wait += wt[i];
        avg_turn += turn[i];
    }
    avg_wait /= n;
    avg_turn /= n;
    printf("process \t priority \t burst time \t waiting time \t turn around time \n");
    for (i = 0; i < n; i++)
    {
        printf("\n %d \t %d \t %d \t %d \t  %d", p[i], pr[i], b[i], wt[i], turn[i]);
    }
    printf(" \n Average wait=%d \n Average turn around=%d", avg_wait, avg_turn);
    return 0;
}