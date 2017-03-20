/*************************************************************************
	> File Name: main.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 10 Mar 2017 04:26:10 PM CST
 ************************************************************************/

#include<stdio.h>
#include"StructBook.h"
#include"Function.h"//GetItem , Show, menu ,InitBook
#include<stdlib.h>


int main()
{
    int choise,num,i;
    int del;
    SBOOK * pbook;
    printf("please input the number of books you want to create!");
    scanf("%d",&num);
    system("clear");
    pbook = InitBook(num);
    //SBOOK * bookarry[num] = {pbook,pbook+1,......};
    while(1)
    {
        menu();
        scanf("%d",&choise);
        switch(choise)
        {
            case 1 :system("clear");
                    for(i = 0;i < num;i++)
                        GetItem(pbook+i,&i);
                    break;
            case 2 :system("clear");
                    for(i = 0;i < num;i++)
                        Show(pbook+i,&i);
                    break;
            case 3 :system("clear");
                    printf("which book will be deleted?:\n");
                    scanf("%d",&del);
                    delete(pbook+del-1);
                    break;
            case 4 :exit(0);
                    break;
            default : 
                    return -1;
        }
    }
    return 0;
}
