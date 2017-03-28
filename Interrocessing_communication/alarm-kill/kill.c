/*************************************************************************
	> File Name: kill.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Mar 2017 03:06:44 PM CST
 ************************************************************************/

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<sys/types.h>

void SigFunc(int Signum)
{
    if(SIGUSR1 == Signum)
    {
        printf("user1 signal\r\n");
    }
    else
    {
        printf("user2 signal\r\n");
    }
}

int main()
{
    printf("pid is %d\r\n",getpid());
    signal(SIGUSR1,SigFunc);
    signal(SIGUSR2,SigFunc);
    while(1)
    {
        pause();
    }
}
