/*************************************************************************
	> File Name: Delete_by_Head.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 02:42:26 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"
#include<stdlib.h>
ElemType DeleteByHead(pLinkList pLink)
{
    pLinkList pTmp = pLink->next;
    ElemType OUTdata = pTmp->data;
    pLink->next = pTmp->next;
    free(pTmp);
    return OUTdata;
}
