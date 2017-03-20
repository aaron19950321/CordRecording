#include<stdio.h>
#include"StructLinkStack.h"
#include<stdlib.h>
#include"Fun.h"

Status DeleteByHead(pLinkStack pLink,ElemType * OUTdata)
{
	
	if (NULL == pLink
	||NULL == OUTdata
	||TRUE == IsEmpty(pLink))
	{
		return ERROR;
	}
    pLinkStack pTmp = pLink->next;
    *OUTdata = pTmp->data;
    pLink->next = pTmp->next;
    free(pTmp);
	return OK;
}
