/*************************************************************************
	> File Name: RDWT.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 22 Mar 2017 07:18:57 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

#define SIZE 12

int main(int agrc,char *agrv[])
{
    if (3 != agrc)
    {
        printf("please input 3 parameter!");
        return -1;
    }

    int src = open(agrv[1],O_RDONLY,0666);
    printf("open 1 :   %d\n",src);
    if (src < 0);
    {
        perror("open src failed");
        return -1;
    }

    int dest = open(agrv[2],O_CREAT | O_WRONLY | O_TRUNC,0666);
    printf("open 2 :%d\n",dest);
    if (dest < 0)
    {
        perror("open dest failed");
        return -1;
    }

    char buf[SIZE] = {0};
    int ret = -1;
    while ((ret = read(src,buf,SIZE)) > 0)
        write(dest,buf,ret);

    close(src);
    close(dest);

    return 0;
}
