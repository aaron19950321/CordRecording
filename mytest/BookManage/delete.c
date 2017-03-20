/*************************************************************************
	> File Name: delete.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 12 Mar 2017 03:09:05 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructBook.h"
#include<string.h>
void delete(SBOOK * pbook)
{
    memset(pbook,0,sizeof(SBOOK));
}
