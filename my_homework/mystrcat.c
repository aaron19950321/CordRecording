/*************************************************************************
	> File Name: mystrcat.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 01 Mar 2017 07:37:36 PM CST
 ************************************************************************/

#include<stdio.h>
#define M 15
void mystrcat(char *p,char *q);
int main()
{
    char str1[M],str2[M];
    gets(str1);
    gets(str2);
    mystrcat(str1,str2);
    puts(str1);
    return 0;
}

void mystrcat(char *p,char *q)
{
    while(*p++);
    --p;
    while(*q)
        *p++=*q++;
    *p='\0';
}
