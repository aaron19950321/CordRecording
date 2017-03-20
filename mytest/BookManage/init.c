/*************************************************************************
	> File Name: init.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 12 Mar 2017 09:40:28 AM CST
 ************************************************************************/

#include<stdio.h>
#include"StructBook.h"
#include<string.h>
#include<stdlib.h>
SBOOK * InitBook(int NumberOfBook)
{
    SBOOK * pBook = (SBOOK *)malloc(sizeof(SBOOK) * NumberOfBook);
    memset(pBook,0,sizeof(SBOOK) * NumberOfBook);
    return pBook;
}
    /*
    SBOOK book1,book2,book3,book4,book5;
    memset(&book1,0,sizeof(book1));
    memset(&book2,0,sizeof(book2));
    memset(&book3,0,sizeof(book3));
    memset(&book4,0,sizeof(book4));
    memset(&book5,0,sizeof(book5));
    */
