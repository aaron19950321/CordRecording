/*************************************************************************
	> File Name: InitHeadNode.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time:Wed 16 Mar 2017 5:19:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkStack.h"
#include<stdlib.h>
/*point at Head Node*/
pLinkStack InitHeadNode()
{
    pLinkStack pHead;
    pHead = (pLinkStack)malloc(sizeof(LinkStack));
    pHead->next = NULL;
    return pHead;
}
