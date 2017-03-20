/*************************************************************************
	> File Name: DestroyLinkList.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 10:13:30 AM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"
#include<stdlib.h>
Status DestroyLinkList(pLinkList pLink)
{
    if (NULL == pLink)
        return ERROR;
    pLinkList pTmp;
    while(pLink)
    {
        pTmp = pLink->next;
        free(pLink);
        pLink = pTmp;
    }
    return OK;
}
Status CleanLinkList(pLinkList pLink)
{
    pLinkList pTmp1,pTmp2;
    pTmp1 = pLink->next;
    while(pTmp1)
    {
        pTmp2 = pTmp1->next;
        free(pTmp1);
        pTmp1 = pTmp2;
    }
    //DestroyLinkList(pLink->next);     the anther way
    return OK;
}
