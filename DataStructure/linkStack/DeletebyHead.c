/*************************************************************************
	> File Name: Delete_by_Head.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 02:42:26 PM CST
 ************************************************************************/

#include<stdio.h>
#include"LinkStack.h"
#include<stdlib.h>
#include"Fun.h"
Status DeleteByHead(pLinkStack pLink,ElemType * OUTdata)
{
	
	if (NULL == pLink
	||NULL == OUTdata)
	||TRUE == IsEmpty(pLink)
	{
		return ERROR;
	}
    pLinkStack pTmp = pLink->next;
    *OUTdata = pTmp->data;
    pLink->next = pTmp->next;
    free(pTmp);
	return OK;
}
