/*************************************************************************
	> File Name: caculator.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 10 Mar 2017 10:53:01 AM CST
 ************************************************************************/

#include<stdio.h>
#include"caculator.h"


int add(int Num1 , int Num2)
{
    return Num1 + Num2;
}

int sub(int Num1,int Num2)
{
    return Num1 - Num2;
}

int caculator(int Num1,int Num2,FUNC * pFunc)
{
    if(NULL == pFunc)
        return ERROR;
    else
        return pFunc(Num1,Num2);
}
