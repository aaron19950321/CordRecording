/*************************************************************************
	> File Name: freopen.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 21 Mar 2017 04:39:45 PM CST
 ************************************************************************/

#include<stdio.h>

int main(int agrc,char * agrv[])
{
    if (2 != agrc)
    {
        printf("input a file!\r\n");
        return -1;
    }
    printf("1111111\r\n");
    FILE * pFile = freopen(agrv[1],"w",stdout);

    printf("2222222\r\n");
}
