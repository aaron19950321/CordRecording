/*************************************************************************
	> File Name: LenghtOfLinkList.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 11:14:15 AM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"

int LenghtOfLinkList(pLinkList pLink)
{
    int count = 0;
    pLinkList pTmp = pLink->next;
    while(pTmp)
    {
        count++;
        pTmp = pTmp->next;
    }
    return count;
}
