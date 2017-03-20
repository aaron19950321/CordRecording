/*************************************************************************
	> File Name: isFull.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 16 Mar 2017 03:14:56 PM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"
int isFull(stack * pstack)
{
    if (NULL == pstack)
    {
        return ERROR;
    }
    if (SIZE == pstack->iTop)
    {
        return TRUE;
    }
    return FALSE;
}
