/*************************************************************************
	> File Name: StructLinkStack.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 16 Mar 2017 5:19:06 PM CST
 ************************************************************************/

#ifndef _STRUCTLinkStack_H_
#define _STRUCTLinkStack_H_
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
