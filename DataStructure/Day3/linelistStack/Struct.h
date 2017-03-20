/*************************************************************************
	> File Name: Struct.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 16 Mar 2017 1:58:25 PM CST
 ************************************************************************/

#ifndef _STRUCT_H_
#define _STRUCT_H_
enum{
    ERROR = -1,
    OK,
    FALSE = 0,
    TRUE,
};
#define SIZE 20
typedef int data_t;
typedef struct stackNode{
    int iTop;
    data_t data[SIZE];
}stack;
#endif
