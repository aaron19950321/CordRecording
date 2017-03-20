/*************************************************************************
	> File Name: Fun.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 16 Mar 2017 10:21:41 PM CST
 ************************************************************************/

#ifndef _FUN_H_
#define _FUN_H_
#include"StructLinkList.h"
Status DeleteDoubleList(pDoubleLink pLink,int location,ElemType * OUTdata);
pDoubleLink InitHeadNode();
Status insertDoubleList(pDoubleLink pLink,int location,ElemType * INdata);
Status IsEmpty(pDoubleLink pLink);
void show(pDoubleLink pLink);
#endif
