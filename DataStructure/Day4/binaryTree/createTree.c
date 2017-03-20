/*************************************************************************
	> File Name: createTree.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 03:05:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include"treeNode.h"
#include<stdlib.h>
#include"Fun.h"
treeNode * recursion(treeNode * pNode,Elemtype * INdata)
{
    if (NULL == pNode)
    {
        treeNode * qtmp = InitHead(*INdata);
        return qtmp;
    }
    else if (*INdata > pNode->tRoot)
    {
        pNode->pLight = recursion(pNode->pLight,INdata);
        return pNode;
    }
    else
    {
        pNode->pRight = recursion(pNode->pRight,INdata);
        return pNode;
    }
}

treeNode * createTree(treeNode * pNode,Elemtype * INdata)
{
   if (NULL == pNode
    ||NULL == INdata)
    {
        return pNode;
    }
    recursion(pNode,INdata);
    return pNode;
}
