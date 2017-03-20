/*************************************************************************
	> File Name: mian.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 09:09:34 AM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"
#include<stdlib.h>
#include"Fun.h"
int main()
{    
    pLinkList pLink = InitHeadNode();
    int aaa;
    aaa = InsertByHead(pLink,10);
    aaa = InsertByHead(pLink,20);
    aaa = InsertByHead(pLink,30);
    aaa = InsertByHead(pLink,40);
    aaa = InsertByHead(pLink,50);
    show(pLink);
    DeleteByHead(pLink);
    DeleteByHead(pLink);
    DeleteByHead(pLink);
    show(pLink);
}
