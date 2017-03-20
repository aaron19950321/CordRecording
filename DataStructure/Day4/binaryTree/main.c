/*************************************************************************
	> File Name: main.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 05:02:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include"Fun.h"
#include"treeNode.h"

int main()
{
    int init = 5;
    treeNode * pNode = InitHead(init);
    int data,a=4;
    while(a--)
    {
        printf("input:");
        scanf("%d",&data);
        pNode = createTree(pNode,&data);
    }
    show(pNode);
}
