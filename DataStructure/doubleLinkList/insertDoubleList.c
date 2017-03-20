/*************************************************************************
	> File Name: insertDoubleList.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 16 Mar 2017 09:06:50 PM CST
 ************************************************************************/
#include<stdio.h>
#include"StructLinkList.h"
#include<stdlib.h>
 
Status insertDoubleList(pDoubleLink pLink,int location,ElemType * INdata)
{
    if (NULL == pLink
	||NULL == INdata
	||0 >= location)
    {
		return ERROR;
	}
    pDoubleLink pTmp = (pDoubleLink)malloc(sizeof(DoubleLink));
    pTmp->data = *INdata;
    pDoubleLink qTmp = pLink;
    while(--location)
    {
        if (NULL == qTmp->pNext)
        {
            printf("big\n");
            return ERROR;
        }
        qTmp = qTmp->pNext;
    }
    pTmp->pNext = qTmp->pNext;
    pTmp->pPri = qTmp;
    qTmp->pNext = pTmp;
    return OK;
}
