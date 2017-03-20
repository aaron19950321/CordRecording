/*************************************************************************
	> File Name: Fun.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 17 Mar 2017 02:01:53 PM CST
 ************************************************************************/

#ifndef _FUN_H_
#define _FUN_H_
#include"loopLinkStruct.h"
void show(loopLink * pLink,int times);
Status InsertNode(loopLink * pLink,int Location,Elemtype * data);
loopLink * InitHeadNode();
#endif
