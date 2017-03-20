/*************************************************************************
	> File Name: strncpy.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 24 Feb 2017 03:07:41 PM CST
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
    printf("input n :");
    scanf("%d",&n);

    int LenOfStr=strlen(StrA);
    if (n > LenOfStr)
    {
        printf("It is too long ~");
        return -1;
    }

    strncpy(StrA,StrB,n);

    puts(StrA);

    return 0;


}
