/*************************************************************************
	> File Name: array.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 24 Feb 2017 02:02:55 PM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
    char a[2][20];
    
    int i;
    for(i=0;i<2;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<2;i++)
    {
        puts(a[i]);
    }
    return 0;
}
