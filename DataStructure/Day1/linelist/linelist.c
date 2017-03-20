/*************************************************************************
	> File Name: linelist.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 14 Mar 2017 10:09:48 AM CST
 ************************************************************************/

#include<stdio.h>
#include"Struct.h"
#include"Fun.h"
#include<stdlib.h>
int main()
{
    pLineList pList = InitList();
    if (pList == NULL)
    {
        printf("Created error");
        return -1;
    }
    int choice;
    while(1)
    {
        menu();
        int location,number,tmp;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                printf("please enter the location and the number you want to insert:\n");
                printf("location:");
                scanf("%d",&location);
                printf("number:");
                scanf("%d",&number);
                insert(pList,location,number);
                break;
            case 2 : 
                show(pList);
                break;
            case 3 :
                printf("please enter the location and the number you want to delete:\n");
                printf("location:");
                scanf("%d",&location);
                delete(pList,location,&tmp);
                break;
            case 4 :
                destroy(pList);
                pList = NULL;
                break;
            case 5 :
                printf("please enter the location and the number you want to find:\n");
                scanf("%d",&number);
                tmp = sreach(pList,number) + 1;
                printf("location is %d\n",tmp);
                break;
            case 6 :
                printf("please enter the location and the number you want to insert:\n");
                printf("location:");
                scanf("%d",&location);
                printf("number:");
                scanf("%d",&number);
                update(pList,location,number);
                break;
            default :
                exit(0);
        }
    }
    return 0;
}
