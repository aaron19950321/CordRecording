/*************************************************************************
	> File Name: search.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 05:00:17 PM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"

int sreach(pLineList plink, int num)
{
    if (NULL == plink)
        printf("error");
    int i;
    for( i = 0; i < plink->count ; i++ )
        if (num == plink->data[i])
            return i;
    printf("there is nothing in the link\n");
    return -1;
}
