/*************************************************************************
	> File Name: show.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 04:59:32 PM CST
 ************************************************************************/

#include<stdio.h>
#include"treeNode.h"

void show(treeNode * pNode)
{
    if(NULL == pNode)
        return;
    printf("%d - ",pNode->tRoot);
    show(pNode->pLight);
    show(pNode->pRight);
}
