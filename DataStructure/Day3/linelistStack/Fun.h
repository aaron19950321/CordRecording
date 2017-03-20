/*************************************************************************
	> File Name: Fun.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 16 Mar 2017 3:11:06 PM CST
 ************************************************************************/

#ifndef _FUN_H_
#define _FUN_H_

#include"Struct.h"
int isEmpty(stack * pstack);
int pop(stack * pstack, data_t * pData);
int push(stack * pstack,data_t * pData);
int isFull(stack * pstack);
#endif
