/*************************************************************************
	> File Name: InitHeadNode.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 09:30:30 AM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"
#include<stdlib.h>
/*point at Head Node*/
pLinkList InitHeadNode()
{
    pLinkList pHead;
    pHead = (pLinkList)malloc(sizeof(LinkList));
    pHead->next = NULL;
    return pHead;
}
