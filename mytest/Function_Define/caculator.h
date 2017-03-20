/*************************************************************************
	> File Name: caculator.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 10 Mar 2017 10:55:31 AM CST
 ************************************************************************/

#ifndef _CACULATOR_H_
#define _CACULATOR_H_
typedef int FUNC (int, int);

int caculator(int Num1 ,int Num2 ,FUNC * pFunc);

int add(int,int);
int sub(int,int);

enum{
    ERROR = -1,
    OK = 0
};
#endif
