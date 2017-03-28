/*************************************************************************
	> File Name: mkfifo.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Mar 2017 11:12:42 AM CST
 ************************************************************************/

#include<stdio.h>
#include<errno.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>

#define BUF_SZIE 20
int main()
{
    int ret = -1;
    ret = mkfifo("fifo",0666);
    if (ret < 0 && EEXIST != errno)
    {
        return -1;
    }
    else
    {
        printf("OK\r\n");
    }

    //open
    int fd = open("fifo",O_WRONLY,0666);
    if (-1 == fd)
        return -1;
    else
        printf("open success!\r\n");

    char buf[BUF_SZIE] = {0};
    strcpy(buf,"hello");
    write(fd,buf,BUF_SZIE);
    close(fd);
    return 0;
}
