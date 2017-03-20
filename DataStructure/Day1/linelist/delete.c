/*************************************************************************
	> File Name: delete.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 03:58:51 PM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"
void delete(pLineList plink,int location , data_t * DEL_data)
{
    *DEL_data = plink->data[location - 1];
    int i;
    if (location == SIZE)
    {
        plink->count--;
    }
    else
    {
        for(i = location - 1;i < plink->count;i++ )
            plink->data[i] = plink->data[i + 1];
        plink->count--;
    }
}
