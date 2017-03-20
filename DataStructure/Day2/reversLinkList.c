/*************************************************************************
	> File Name: reversLinkList.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 10:26:12 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"StructLinkList.h"
pLinkList reversLinkList(pLinkList pLink)
{
    if (NULL == pLink)
        exit(ERROR);
    pLinkList rem = pLink;
    pLink = pLink->next;
    pLinkList NextTmp = NULL;
    pLinkList PreTmp = NULL;
    while(NULL != pLink)
    {
        NextTmp = pLink->next;
        pLink->next = PreTmp;
        PreTmp = pLink;
        pLink = NextTmp;
    }
    rem->next = PreTmp;
    printf("\n");
    return rem;
}
