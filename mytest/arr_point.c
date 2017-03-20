/*************************************************************************
	> File Name: arr_point.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 28 Feb 2017 11:01:58 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    int (*p)[4]=a;

    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            printf("%d\t",*(*(p+i)+j));
    return 0;
}
