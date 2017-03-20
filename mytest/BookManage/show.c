/*************************************************************************
	> File Name: show.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 10 Mar 2017 04:44:30 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructBook.h"
void Show(SBOOK * pbook,int * i)
{
    if(*pbook->name == 0)
        return;
    printf("book-%d's name is %s\n",*i,pbook->name);
    printf("book-%d's price is %f\n",*i,pbook->price);
    printf("book-%d's introduction is %s\n",*i,pbook->pSummary);
    printf("book-%d's lengh is %d\n",*i,pbook->len);
    printf("\n");
}
