/*************************************************************************
	> File Name: fgets.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 21 Mar 2017 02:23:07 PM CST
 ************************************************************************/

#include<stdio.h>

#define BUF_SIZE 10

int main()
{
    char buf[BUF_SIZE] = {0};
    fgets(buf,BUF_SIZE,stdin);    //gets is not safty
    printf("%s\r\n",buf);
    return 0;
}
