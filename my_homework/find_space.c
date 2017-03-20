/*************************************************************************
	> File Name: find_space.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 26 Feb 2017 09:26:13 AM CST
 ************************************************************************/

#include<stdio.h>
#define M 100

int main()
{
    int count=0;                                 //the number of ' '

    printf("please enter a string of charachers:\n");
    char str[M]={0};
    char *p=str;
    gets(str);
    
    while(*p!='\0')
    {
        if(*p==' ')
            count++;
        p++;
    }

    printf("the number of ' ' is :%d\n",count);
    return 0;
}
