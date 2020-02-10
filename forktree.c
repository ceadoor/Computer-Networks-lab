#include <stdio.h>
#include <unistd.h>

void main()
{
    int pId1,pId2;
    pId1 = fork();
    pId2 = fork();
    if (pId1 < 0)
    {
        printf("Process creation is Unsuccessful!");
    }
    // The return value is 0 for a child process
    else if (pId2 == 0)
    {
        printf("Child process:");
        printf("\nChild : Child’s PID: %d", getpid());
        printf("\nChild : Parent’s PID: %d\n", getppid());
    }
    // The return value is positive for a parent process
    else if (pId2 > 0)
    {
        printf("Parent process:");
        printf("\nParent : Parent’s PID: %d", getpid());
        printf("\nParent : Child’s PID: %d\n", pId2);
    }
    if (pId2 < 0)
    {
        printf("Process creation is Unsuccessful!");
    }
    // The return value is 0 for a child process
    else if (pId1 == 0)
    {
        printf("Child process:");
        printf("\nChild : Child’s PID: %d", getpid());
        printf("\nChild : Parent’s PID: %d\n", getppid());
    }
    // The return value is positive for a parent process
    else if (pId1 > 0)
    {
        printf("Parent process:");
        printf("\nParent : Parent’s PID: %d", getpid());
        printf("\nParent : Child’s PID: %d\n", pId1);
    }
}
