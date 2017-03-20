/*************************************************************************
	> File Name: DelItem.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 09:39:27 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"StructLinkList.h"

Status  DelItem(pLinkList pLink,int location,ElemType * OUTdata)
{
    if (NULL == pLink)
    {
        exit(-1);
    }
    pLinkList pTmp = pLink;
    pLinkList qTmp = pLink->next;
    while(--location)
    {
        pTmp = pTmp->next;
        if (NULL == pTmp)
        {
            printf("the number is big!\n");
            return ERROR;
        }
        qTmp = qTmp->next;
    }
    if (NULL == qTmp)
    {
        printf("the number is big!\n");
        return ERROR;
    }
    pTmp->next = qTmp->next;
    *OUTdata = qTmp->data;
    free(qTmp);
}
