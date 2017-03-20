/*************************************************************************
	> File Name: Mystrlen.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 26 Feb 2017 09:59:13 AM CST
 ************************************************************************/

#include<stdio.h>
#define M 100

int main()
{
    printf("pleas enter a string of characters~\n");
    char str[M];
    char *p=str;
    gets(str);

    int count=0;
    while(*p!='\0')
    {
        count++;
        p++;
    }

    printf("there are %d characters\n",count);
    return 0;
}
