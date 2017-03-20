/*************************************************************************
	> File Name: StructLinkList.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 08:58:15 AM CST
 ************************************************************************/

#ifndef _STRUCTLINKLIST_H_
#define _STRUCTLINKLIST_H_
enum{
    ERROR = -1,
    OK,
    FALSE = 0,
    TRUE
};
typedef int Status;
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode * next;
}LinkList, * pLinkList;

#endif
