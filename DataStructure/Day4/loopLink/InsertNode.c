/*************************************************************************
	> File Name: InsertNode.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 01:30:05 PM CST
 ************************************************************************/

#include<stdio.h>
#include"loopLinkStruct.h"
#include<stdlib.h>

Status InsertNode(loopLink * pLink,int Location,Elemtype * data)
{
    if (NULL == pLink
       ||NULL == data
       ||0 >= Location)
    {
        return ERROR;
    }
    loopLink * pTmp = pLink;
    loopLink * qTmp = (loopLink *)malloc(sizeof(loopLink));
    qTmp->data = *data;
    while(--Location)
    {
        if(NULL == pTmp)
        {
            printf("the number is big !\n");
            return ERROR;
        }
        pTmp = pTmp->next;
    }
    qTmp->next = pTmp->next;
    pTmp->next = qTmp;
}
