/*************************************************************************
	> File Name: InitHeadNode.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 16 Mar 2017 09:00:30 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"
#include<stdlib.h>
#include<string.h>
/*point at Head Node*/
pDoubleLink InitHeadNode()
{
    pDoubleLink pHead;
    pHead = (pDoubleLink)malloc(sizeof(DoubleLink));
    if (NULL != pHead)
    {
    	memset(pHead, 0, sizeof(DoubleLink));
    	pHead->pNext = NULL;
		pHead->pPri = NULL;
    }
    return pHead;
}
