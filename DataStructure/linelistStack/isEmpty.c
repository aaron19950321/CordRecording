/*************************************************************************
	> File Name: isEmpty.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 16 Mar 2017 02:20:56 PM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"
int isEmpty(stack * pstack)
{
    if (NULL == pstack)
    {
        return ERROR;
    }
    if (0 == pstack->iTop)
    {
        return TRUE;
    }
    return FALSE;
}
