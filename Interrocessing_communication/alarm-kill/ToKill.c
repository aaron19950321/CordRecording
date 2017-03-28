/*************************************************************************
	> File Name: ToKill.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Mar 2017 03:12:23 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    if (2 != argc || NULL ==  argv[1])
    {
        printf("Need parameter\r\n");
        return -1;
    }
    pid_t pid = atoi(argv[1]);
    if (pid <= 0)
        return -1;
    kill(pid,SIGUSR1);
    return 0;

}
