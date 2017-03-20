/*************************************************************************
	> File Name: Findabc.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 08 Mar 2017 11:50:28 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="aabcabcbca";
    char str2[10]="abc";
    char *p=str2;
    char *q=strstr(str,p);
    int count=0;
    while(q)
    {
        count++;
        q=q+3;
        q=strstr(q,p);
    }
    printf("%d",count);
    return 0;
}
