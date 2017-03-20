/*************************************************************************
	> file name: function.h
	> author: aaron
	> mail: 60360329@163.com
	> created time: fri 10 mar 2017 04:40:14 pm cst
 ************************************************************************/

#ifndef _function_h_
#define _function_h_
#include"StructBook.h"
void  GetItem(SBOOK * pbook,int * i);
void Show(SBOOK * pbook,int * i);
void menu();
void delete(SBOOK * pbook);
SBOOK * InitBook(int NumberOfBook);
#endif
