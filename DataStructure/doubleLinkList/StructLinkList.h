/*************************************************************************
	> File Name: StructDoubleLink.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 15 Mar 2017 08:58:15 AM CST
 ************************************************************************/

#ifndef _STRUCTDoubleLink_H_
#define _STRUCTDoubleLink_H_
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
    struct LNode * pNext;
	struct LNode * pPri;
}DoubleLink, * pDoubleLink;

#endif
