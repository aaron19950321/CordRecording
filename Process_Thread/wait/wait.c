/************************************************************************
	> File Name: fork.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 23 Mar 2017 11:36:00 AM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<wait.h>

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
        sleep(10);
        exit(5);
    }
    else
    {
        printf("parent PID is %d PID is %d \r\n",getpid(),pid);
        int status = -1;
        pid_t pidTmp = -1;
        while(0 == (pidTmp = waitpid(pid,&status,WNOHANG)))
        {
            printf("wait\r\n");
            sleep(1);
        }
        printf("status %d,pid %d\r\n",WEXITSTATUS(status),pidTmp);
        sleep(20);
    }

    printf("aaaaaaa");
    return 0;
}
