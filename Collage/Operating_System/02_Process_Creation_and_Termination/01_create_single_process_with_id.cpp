#include <stdio.h>
#include <unistd.h>
int main()
{
    printf(“ this is second lab”);
    fork();
    printf(“ Process is creating”);
    printf(“ I am process % d”, getpid());
    return 0;
}