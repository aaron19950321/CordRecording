/*************************************************************************
	> File Name: DeleteDoubleList.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 16 Mar 2017 09:06:50 PM CST
 ************************************************************************/
#include<stdio.h>
#include"StructLinkList.h"
#include<stdlib.h>
#include"Fun.h"

Status DeleteDoubleList(pDoubleLink pLink,int location,ElemType * OUTdata)
{
    if (NULL == pLink
	||NULL == OUTdata
	||TRUE ==IsEmpty(pLink))
    {
        return ERROR;
    }
    pDoubleLink pTmp = pLink;
    while(location--)
	{
		if (NULL == pTmp)
		{
			printf("the number of Locaton is big!");
			return ERROR;
		}
		pTmp = pTmp->pNext;
	}
    pTmp->pPri->pNext = pTmp->pNext;
    *OUTdata = pTmp->data;
    free(pTmp);
	return OK;
}
