/*************************************************************************
	> File Name: InitList.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 10:55:57 AM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"
#include<stdlib.h>
#include<string.h>
pLineList InitList()
{
    pLineList pList = (pLineList)malloc(sizeof(LineList));
    if (NULL != pList)
        memset(pList,0,sizeof(LineList));
    return pList;
}

void  destroy(pLineList pList)
{
    if (NULL == pList)
        printf("destroy failed");
    free(pList);
    pList = NULL;
}
