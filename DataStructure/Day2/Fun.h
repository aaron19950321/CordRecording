/*************************************************************************
	> File Name: Fun.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 03:30:49 PM CST
 ************************************************************************/

#ifndef _FUN_H_
#define _FUN_H_
pLinkList reversLinkList(pLinkList pLink);
Status  DelItem(pLinkList pLink,int location,ElemType * OUTdata);
void UpdateItem(pLinkList pLink,int location,ElemType INdata);
pLinkList SreachItem(pLinkList pLink,ElemType INdata);
Status CleanLinkList(pLinkList pLink);
Status DestroyLinkList(pLinkList pLink);
int LenghtOfLinkList(pLinkList pLink);
Status IsEmpty(pLinkList pLink);
void InsertItemForLink(pLinkList pLink,int location,ElemType INdata);
Status InsertByHead(pLinkList pHead,ElemType INdata);
pLinkList InitHeadNode();
ElemType DeleteByHead(pLinkList pLink);
void show(pLinkList pLink);
#endif
