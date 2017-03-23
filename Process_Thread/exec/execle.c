/*************************************************************************
	> File Name: execle.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 23 Mar 2017 02:06:46 PM CST
 ************************************************************************/

#include<stdio.h>

int main(int agrc,char *agrv[],char *env[])
{
    while(agrc--)
    {
        printf("%s\r\n",*agrv++);
    }
    printf("-------------------\r\n");
    while(*env)
    {
        printf("%s\r\n",*env++);
    }
    printf("%s\r\n",getenv("PWD"));
    return 0;
}
