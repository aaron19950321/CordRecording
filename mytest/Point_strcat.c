/*************************************************************************
	> File Name: Point_strcat.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Feb 2017 01:51:22 PM CST
 ************************************************************************/

#include<stdio.h>
#define M 100
int main()
{
    int count=0;
    char str1[M];
    char str2[M];
    printf("pleasr enter a string of characters:\n1.");
    gets(str1);
    printf("pleasr enter a string of characters:\n2.");
    gets(str2);


    char *p=str1;
    char *q=str2;

    while(*(p++))
        count++;
    --p;                    //point at the end of str1
    while(*q)
    {
        count++;
        *(p++)=*(q++);
        if(count==M) return -1;
    }
    *p = '\0';
    printf("************\n");
    puts(str1);
}
