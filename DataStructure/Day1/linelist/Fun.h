/*************************************************************************
	> File Name: Fun.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 10:29:06 AM CST
 ************************************************************************/

#ifndef _FUN_H_
#define _FUN_H_
void insert(LineList * Line,int Location,int num);
void show(LineList * Line);
pLineList InitList();
void menu();
void  destroy(pLineList pList);
void delete(pLineList plink,int location , data_t * DEL_data);
int sreach(pLineList plink, int num);
void update(pLineList plink,int location,int number);
#endif
