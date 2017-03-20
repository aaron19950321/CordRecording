/*************************************************************************
	> File Name: IsEmpty.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 16 Mar 2017 5:19:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructLinkStack.h"

Status IsEmpty(pLinkStack pLink)
{
    if(NULL == pLink->next)
        return TRUE;
    else
        return FALSE;
}
