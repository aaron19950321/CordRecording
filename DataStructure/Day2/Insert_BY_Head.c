/*************************************************************************
	> File Name: Insert_BY_Head.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 01:37:11 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"
#include<stdlib.h>
Status InsertByHead(pLinkList pHead,ElemType INdata)
{
    pLinkList pTmp = (pLinkList)malloc(sizeof(LinkList));
    pTmp->data = INdata;
    pTmp->next = pHead->next;
    pHead->next = pTmp;
    return OK;
}
