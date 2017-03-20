/*************************************************************************
	> File Name: Struct.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 10:23:25 AM CST
 ************************************************************************/

#ifndef _STRUCT_H_
#define _STRUCT_H_
#define SIZE 20
typedef int data_t;
typedef struct linelist{
    data_t count;
    int data[SIZE];
}LineList, *pLineList;
#endif
