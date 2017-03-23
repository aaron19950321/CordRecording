/*************************************************************************
	> File Name: execlp.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 23 Mar 2017 02:03:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("1----------\r\n");
    if(-1 == (execlp("ls","ls","-al",NULL)))
    {
        perror("execlp");
        return -1;
    }
    return 0;
}
