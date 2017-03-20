/*************************************************************************
	> File Name: update.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 05:10:49 PM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"

void update(pLineList plink,int location,int number)
{
    if (NULL == plink)
        printf("error!");
    plink->data[location - 1] = number;
}

