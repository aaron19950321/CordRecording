/*************************************************************************
	> File Name: SreachItem.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 02:58:34 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"

pLinkList SreachItem(pLinkList pLink,ElemType INdata)
{
    pLinkList pTmp = pLink;
    while(INdata != pTmp->data)
    {
        pTmp = pTmp->next;
        if (NULL == pTmp)
        {
            printf("there is not the data!\n");
            return NULL;
        }
    }
    return pTmp;
}
