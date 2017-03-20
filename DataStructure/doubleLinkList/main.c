/*************************************************************************
	> File Name: main.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 16 Mar 2017 10:22:35 PM CST
 ************************************************************************/

#include<stdio.h>
#include"Fun.h"
#include"StructLinkList.h"


int main()
{
    pDoubleLink pLink = InitHeadNode();
    int data = 1;
    insertDoubleList(pLink,1,&data);
    data = 2;
    insertDoubleList(pLink,2,&data);
    data = 3;
    insertDoubleList(pLink,3,&data);
    show(pLink);
    int i = 2,location;
    while(i--)
    {
        printf("delete location:");
        scanf("%d",&location);
        DeleteDoubleList(pLink,location,&data);
        printf("del is %d\n",data);
        show(pLink);
    }
    return 0;
}
