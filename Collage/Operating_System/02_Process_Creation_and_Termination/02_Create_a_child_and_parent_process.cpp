#include <stdio.h>
#include <unistd.h>
int main()
{
    int pid;
    printf(“ This is our second lab”);
    printf(“ I am the parent process and pid is % d”, getpid());
    print(“ before use of forking”);
    pid = fork();
    printf(“ after forking”);
    if (pid == 0)
        printf(“ I am the child process and pid is % d”, getpid());
    else
        printf(“ I am the parent process and pid % d”, getpid());
    return 0;
}