/*************************************************************************
	> File Name: DouPoint_arr.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 28 Feb 2017 10:19:35 AM CST
 ************************************************************************/

#include<stdio.h>


int main()
{
    char a[3][10];
    char *p[3]={a[0],a[1],a[2]};

    int i;

    for(i=0;i<3;i++)
        gets(p[i]);
    for(i=0;i<3;i++)
      //  puts(p[i]);
        puts(p++);
    return 0;
}
