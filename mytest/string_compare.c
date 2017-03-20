/*************************************************************************
	> File Name: string_compare.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 24 Feb 2017 04:00:02 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

#define M 100
#define N 100

int main()
{
    char StrA[M];
    char StrB[N];

    printf("input two strings~");

    gets(StrA);
    gets(StrB);

    int n;
    printf("input n:");

    scanf("%d",&n);
    if (n<0 || n>strlen(StrB)+1 ||n>strlen(StrA)+1)
    {
        printf("elegal input");
        return -1;
    }

    int cmp;
    cmp=strncmp(StrA,StrB,n);
    if(cmp==0)printf("=");
    if(cmp<0)printf("<");
    if(cmp>0)printf(">");

}
