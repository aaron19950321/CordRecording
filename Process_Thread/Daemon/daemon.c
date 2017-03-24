/*************************************************************************
	> File Name: deamon.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 24 Mar 2017 04:55:28 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    pid_t pid = 0;
    if (-1 == (pid = fork()))
    {
        return -1;
    }
    else
    {
        exit(0);
    }

    if (-1 == setsid())    
    {
        return -1;
    }
    else
    {
        printf("set backprocess already Created!\r\n");
    }

    if (-1 == chdir("/"))     //"/" it can't be deleted.
    {
        return -1;
    }
    umask(0);

    int fdtablesize = getdtablesize();
    while(fdtablesize--)
    {
        close(fdtablesize);
    }
    int PPID = getppid();
    printf("pareent %d  ",PPID);
    for(;;);
    sleep(20);
}
