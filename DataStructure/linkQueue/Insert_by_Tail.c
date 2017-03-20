/*************************************************************************
	> File Name: Insert_by_Tail.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 16 Mar 2017 8:43:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkStack.h"
#include<stdlib.h>

Status Insert_by_Tail(pLinkStack pLink,ElemType * INdata)
{
	if (NULL == pLink
	||NULL == INdata)
	{
		return ERROR;
	}
	pLinkStack pTmp = pLink;
	pLinkStack qLink = (pLinkStack)malloc(sizeof(LinkStack));
	qLink->data = *INdata;
	qLink->next = NULL;
	while(pTmp->next)
		pTmp = pTmp->next;
	pTmp->next = qLink;
	return OK;
}
