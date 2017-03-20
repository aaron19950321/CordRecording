/*************************************************************************
	> File Name: Show.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 03:35:21 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"

void show(pLinkList pLink)
{
    pLinkList pTmp = pLink->next;
    if (NULL == pLink|| NULL == pTmp)
        return;
    int i;
    for(i = 0 ; i < 10 ;i++)
        printf("%d\t",i+1);
    printf("\n");
    while(pTmp)
    {
        printf("%d\t",pTmp->data);
        pTmp = pTmp->next;
    }
    printf("\n");
}
