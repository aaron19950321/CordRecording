/*************************************************************************
	> File Name: TestStrtok.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 08 Mar 2017 10:23:46 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="aaaaa/bbbb/ccccc";
    char *p="/";
    char *q;

    q=strtok(str,p);

    puts(q);

    return 0;
}
