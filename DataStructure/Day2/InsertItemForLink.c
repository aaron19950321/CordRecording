/*************************************************************************
	> File Name: InsertItemForLink.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 11:43:05 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"StructLinkList.h"

void InsertItemForLink(pLinkList pLink,int location,ElemType INdata)
{
    if (NULL == pLink)
        return;
    pLinkList pTmp = (pLinkList)malloc(sizeof(LinkList));
    pTmp->data = INdata;
    pLinkList qTmp = pLink;
    while(--location)
        qTmp = qTmp->next;
    pTmp->next = qTmp->next;
    qTmp->next = pTmp;
}
