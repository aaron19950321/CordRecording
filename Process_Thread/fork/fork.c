/*************************************************************************
	> File Name: fork.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 23 Mar 2017 11:36:00 AM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main()
{
    pid_t pid;
    if (-1 == (pid = fork()))
    {
        perror("fork");
        return -1;
    }
    if (0 == pid)
    {
        printf("child PID %d parent PID id %d \r\n",getpid(),getppid());
    }
    else
    {
        printf("parent PID is %d PID is %d \r\n",getpid(),pid);
    }
    printf("hello world\r\n");
    return 0;
}
