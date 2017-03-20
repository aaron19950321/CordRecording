/*************************************************************************
	> File Name: InitHeadNode.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 01:20:10 PM CST
 ************************************************************************/

#include<stdio.h>
#include"loopLinkStruct.h"
#include<stdlib.h>
#include<string.h>
loopLink * InitHeadNode()
{
    loopLink * pLink = (loopLink *)malloc(sizeof(loopLink));
    if (NULL == pLink)
    {
        printf("Created failed!");
        return NULL;
    }
    memset(pLink,0,sizeof(loopLink));
    pLink->next = pLink;
    return pLink;
}
