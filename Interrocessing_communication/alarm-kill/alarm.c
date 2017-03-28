/*************************************************************************
	> File Name: alarm.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Mar 2017 02:28:45 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void SigFunc(int sigNum)
{
    printf("%d\r\n",sigNum);
    alarm(2);
}

int main()
{
    signal(SIGALRM,SigFunc);
    alarm(2);
    printf("aaaaaaaaa\r\n");
    while(1)
        pause();
}
