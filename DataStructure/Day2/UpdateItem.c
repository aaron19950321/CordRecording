/*************************************************************************
	> File Name: UpdateItem.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 03:07:03 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"

void UpdateItem(pLinkList pLink,int location,ElemType INdata)
{
    if (NULL == pLink)
        return;
    if (location < 0)
    {
        printf("location is so small\n");
        return;
    }
    pLinkList pTmp = pLink;
    while(location--)
    {
        if(NULL == pTmp->next->next)
        {
            printf("location is so big\n");
            return;
        }
        pTmp = pTmp->next;
    }
    pTmp->data = INdata;
}
