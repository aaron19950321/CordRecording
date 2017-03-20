/*************************************************************************
	> File Name: Fun.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 10:22:28 AM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"
#define SIZE 20
void insert(LineList * Line,int Location,int num)
{
    int i;
    if (Location > Line->count + 1
       ||(Location < 0)
       ||(Line->count == SIZE)
       )
    {
        printf("dont input number in a mistakeble way");
    }
    else
    {
        for(i = Line->count;i >= Location; i--)
            Line->data[i] = Line->data[i - 1];
        Line->data[Location - 1] = num;
        Line->count++;
    }
}
