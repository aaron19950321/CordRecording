/*************************************************************************
	> File Name: ReadEnglish_paper.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 09 Mar 2017 01:22:53 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    char str[] = "ajkbcjsabdAvCAlkVjsvASDlkajbsdvvKJlbkjcbaKSBAKJBCAB";
    char * p = str;
    int count[26] = {0};
    while(*p)
    {
        *p = *p | 0x20;
        count[*p - 'a']++;
        p++;
    }
    int i;
    for(i = 0;i < 26;i++)
        printf("%d   ",count[i]);
    return 0;
}

