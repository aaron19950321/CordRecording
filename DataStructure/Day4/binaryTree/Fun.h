/*************************************************************************
	> File Name: Fun.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 05:03:00 PM CST
 ************************************************************************/

#ifndef _FUN_H_
#define _FUN_H_
#include"treeNode.h"
//void recursion(treeNode * pNode,Elemtype * INdata);
treeNode * recursion(treeNode * pNode,Elemtype * INdata);
treeNode * createTree(treeNode * pNode,Elemtype * INdata);
treeNode * InitHead(Elemtype data);
void show(treeNode * pNode);
#endif
