/*************************************************************************
	> File Name: delete.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 03:58:51 PM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"
#include"Fun.h"
int pop(stack * pstack, data_t * pData)
{
    if (NULL == pstack
    ||NULL == pData
    ||TRUE == isEmpty(pstack)
       )
    {
        return ERROR;
    }
    *pData = pstack->data[pstack->iTop];
    pstack->iTop--;
}
