/*************************************************************************
	> File Name: GetItem.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 10 Mar 2017 04:43:54 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"StructBook.h"

void  GetItem(SBOOK * pbook,int * i)
{
    printf("please enter the name of book-%d:",*i+1);
    scanf("%s",pbook->name);

    printf("please enter the price of book-%d:",*i+1);
    scanf("%f",&pbook->price);

    printf("please enter the lengh of introduction:");
    scanf("%d",&pbook->len);

    pbook->pSummary = (char *)malloc(sizeof(SBOOK) * pbook->len);

    printf("please enter the introduction of book-%d:\n",*i+1);
    scanf("%s",pbook->pSummary);

}
