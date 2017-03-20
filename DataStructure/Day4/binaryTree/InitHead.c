/*************************************************************************
	> File Name: InitHead.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 04:33:21 PM CST
 ************************************************************************/

#include<stdio.h>
#include"treeNode.h"
#include<string.h>
#include<stdlib.h>

treeNode * InitHead(Elemtype data)
{
    treeNode * pNode = (treeNode *)malloc(sizeof(treeNode));
    if (NULL != pNode)
    {
        pNode->tRoot = data;
        pNode->pLight = NULL;
        pNode->pRight = NULL;
    }
    return pNode;
}
