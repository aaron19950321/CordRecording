/*************************************************************************
	> File Name: main.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 10 Mar 2017 11:37:44 AM CST
 ************************************************************************/

#include<stdio.h>
#include "caculator.h"
#include"menu.h"

int main()
{
    int choise = 0;
    int num1,num2;
    int ret;
    
    while(1)
    {
        menu();
        scanf("%d",&choise);
        scanf("%d%d",&num1,&num2);
        switch(choise)
        {
            case 1 : ret = caculator(num1,num2,add);
                        break;
            case 2 : ret = caculator(num1,num2,sub);
                        break;
            default :
                    ret = ERROR;
                        break;
        }
        printf("%d\n",ret);
    }
    return 0;
}
