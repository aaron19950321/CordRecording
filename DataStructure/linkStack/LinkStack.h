/*************************************************************************
	> File Name: LinkStack.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 16 Mar 2017 4:33:32 PM CST
 ************************************************************************/

#ifndef _LINKSTACK_H_
#define _LINKSTACK_H_
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
}LinkStack, * pLinkStack;

#endif
