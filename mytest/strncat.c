/*************************************************************************
    > File Name: strncat.c
    > Author: aaron
    > Mail: 60360329@163.com
    > Created Time: Fri 24 Feb 2017 02:45:34 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define LONGA 100
#define LONGB 100

int main()
{
    char StringA[LONGA];
    char StringB[LONGB];
    printf("please input some letters:");

    gets(StringA);
    gets(StringB);

    int ex_long=strlen(StringA);

    int n;

    printf("please input a number to copy:");
    scanf("%d",&n);

    if(ex_long+n>LONGA)
    {
        printf("overflow~");
        return -1;
    }

    strncat(StringA,StringB,n);
    
    printf("string is %s after strncat",StringA);

}
