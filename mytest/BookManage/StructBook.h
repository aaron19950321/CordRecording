/*************************************************************************
	> File Name: StructBook.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 10 Mar 2017 04:28:05 PM CST
 ************************************************************************/

#ifndef _STRUCTBOOK_H_
#define _STRUCTBOOK_H_

#define SIZE 32
typedef struct {
    char name[SIZE];
    float price;
    int len;
    char * pSummary;
}SBOOK;

#endif
