/*************************************************************************
	> File Name: Fun.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 16 Mar 2017 04:42:22 PM CST
 ************************************************************************/

#ifndef _FUN_H_
#define _FUN_H_

#include"LinkStack.h"
Status DeleteByHead(pLinkStack pLink,ElemType * OUTdata);
pLinkStack InitHeadNode();
Status InsertByHead(pLinkStack pHead,ElemType INdata);
Status IsEmpty(pLinkStack pLink);

#endif
