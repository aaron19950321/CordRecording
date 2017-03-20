/*************************************************************************
	> File Name: show.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 01:49:53 PM CST
 ************************************************************************/

#include<stdio.h>
#include"loopLinkStruct.h"

void show(loopLink * pLink,int times)
{
    if (NULL == pLink)
    {
        return ;
    }
    loopLink * pTmp = pLink->next;
    while(times--)
    {
        if (NULL == pTmp)
        {
            printf("input is large than lenght!\n");
            return ;
        }
        printf("%d\t",pTmp->data);
        pTmp = pTmp->next;
    }
    printf("\n");
    return;
}
