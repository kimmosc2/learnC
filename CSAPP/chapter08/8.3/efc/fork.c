#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

pid_t Fork(void);

int main(void)
{
    pid_t pid;
    int x = 1;
    pid = Fork();
    if (pid == 0)
    {
        printf("child : x=%d\n", ++x);
        exit(0);
    }
    printf("parent: x=%d\n", --x);
    return 0;
}

pid_t Fork(void)
{
    pid_t pid;
    if ((pid = fork()) != 0)
        fprintf(stderr, "fork error");
    return pid;
}