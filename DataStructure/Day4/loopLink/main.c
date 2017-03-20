/*************************************************************************
	> File Name: main.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 02:02:46 PM CST
 ************************************************************************/

#include<stdio.h>
#include"loopLinkStruct.h"
#include"Fun.h"

int main()
{
    loopLink * pLink = InitHeadNode();
    //loopLink * pTmp = pLink;
    int count = 0;
    int a,data,location;
    a = 3;
    while(a--)
    {
        printf("location is :");
        scanf("%d",&location);
        printf("input:");
        scanf("%d",&data);
        InsertNode(pLink,location,&data);
    }
    show(pLink,6);
    return 0;
}
