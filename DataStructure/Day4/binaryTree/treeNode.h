/*************************************************************************
	> File Name: treeNode.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 02:54:35 PM CST
 ************************************************************************/

#ifndef _TREENODE_H_
#define _TREENODE_H_
typedef int Elemtype; 
typedef struct treeNode{
    Elemtype tRoot;
    struct treeNode * pLight;
    struct treeNode * pRight;
}treeNode;
#endif
