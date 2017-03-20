/*************************************************************************
	> File Name: InitHeadNode.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 09:30:30 AM CST
 ************************************************************************/

#include<stdio.h>
#include"LinkStack.h"
#include<stdlib.h>
/*point at Head Node*/
pLinkStack InitHeadNode()
{
    pLinkStack pHead;
    pHead = (pLinkStack)malloc(sizeof(LinkStack));
    pHead->next = NULL;
    return pHead;
}
