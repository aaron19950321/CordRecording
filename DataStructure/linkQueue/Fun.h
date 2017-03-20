/*************************************************************************
	> File Name: Fun.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 16 Mar 2017 09:57:27 PM CST
 ************************************************************************/

#ifndef _FUN_H_
#define _FUN_H_
pLinkStack InitHeadNode();
Status DeleteByHead(pLinkStack pLink,ElemType * OUTdata);
Status Insert_by_Tail(pLinkStack pLink,ElemType * INdata);
Status IsEmpty(pLinkStack pLink);
void show(pLinkStack pLink);
#endif
