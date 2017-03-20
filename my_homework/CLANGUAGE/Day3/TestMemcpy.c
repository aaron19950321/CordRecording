/*************************************************************************
	> File Name: TestMemcpy.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 08 Mar 2017 10:34:57 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *p;
    p=(char *)malloc(100);
    char *str="aaaa";

    memcpy(p,str,sizeof(str));
    puts(p);
    free(p);
    return 0;
}
