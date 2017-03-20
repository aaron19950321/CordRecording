/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2017 11:37:10 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a=0xff;
    printf("%x\n",a);
    a = a | (1<<5);
    a = a & (~(1<<4));
    a = a | (1<<3);
    printf("%x",a);
    return 0;
}
