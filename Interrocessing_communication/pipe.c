/*************************************************************************
	> File Name: pipe.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Mar 2017 10:40:10 AM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<string.h>

#define BUF_SIZE 10
int main()
{
    int pfd[2];

    if (0 != pipe(pfd))
    {
        return -1;
    }
    else
    {
        printf("OK!\r\n");
    }

    pid_t pid = fork();
    if (-1 == pid)
    {
        return -1;
    }

    //pid 0
    char buf[BUF_SIZE] = {0};

    if(0 == pid)
    {
        close(pfd[0]);
        sleep(1);
        printf("child \r\n");
        strcpy(buf,"hello");
        write(pfd[1],buf,BUF_SIZE);
    }
    else
    {
        close(pfd[1]);
        printf("parent  \r\n");
        read(pfd[0],buf,BUF_SIZE);
        printf("read:%s\r\n",buf);
    }
}
