/*************************************************************************
	> File Name: IsEmpty.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 11:10:01 AM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkList.h"

Status IsEmpty(pLinkList pLink)
{
    if(pLink->next)
        return TRUE;
    else
        return FALSE;
}
