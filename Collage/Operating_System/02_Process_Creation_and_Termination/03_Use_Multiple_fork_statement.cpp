#include <stdio.h>
#include <unistd.h>
int main()
{
    printf( “ before first forking statement”);
    fork();
    Printf(“After forking statement”);
    fork();
    printf(“ After second forking”);
    printf(“ hello world form process % d”, getpid());
    return 0;
}