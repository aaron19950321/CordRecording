/*************************************************************************
	> File Name: push.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 16 Mar 2017 3:06:28 PM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"
#include<stdlib.h>
#include"Fun.h"
int push(stack * pstack,data_t * pData)
{
    if (NULL == pstack
	||NULL == pData)
		exit(-1);
	if (TRUE == isFull(pstack))
    {
		printf("It is full!");
		return FALSE;
    }
    else
    {
		pstack->iTop++;
		pstack->data[pstack->iTop] = *pData;
    }
}
