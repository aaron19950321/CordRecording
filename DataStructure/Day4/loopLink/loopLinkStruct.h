/*************************************************************************
	> File Name: loopLinkStruct.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 01:15:38 PM CST
 ************************************************************************/

#ifndef _LOOPLINKSTRUCT_H_
#define _LOOPLINKSTRUCT_H_
typedef int Elemtype;
typedef int Status;
enum {
    ERROR = -1,
    OK ,
    FALSE = 0,
    TRUE
};
typedef struct LinkNode{
    Elemtype data;
    struct LinkNode * next;
}loopLink;

#endif
