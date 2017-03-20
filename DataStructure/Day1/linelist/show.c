/*************************************************************************
	> File Name: show.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 10:24:39 AM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"
void show(LineList * Line)
{
    int i;
    if (NULL == Line)
    {
        printf("there is nothing\n");
        return;
    }
    printf("Link List is \n");
    for(i = 0;i < Line->count;i++)
        printf("%d\t",Line->data[i]);
    printf("\n");
}
