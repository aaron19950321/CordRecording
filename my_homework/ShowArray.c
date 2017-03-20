/*************************************************************************
	> File Name: ShowArray.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 26 Feb 2017 10:26:20 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define M 10

int main()
{
    int i,j;
    int arr[M][M];
    for(i=0;i<M;i++)
        for(j=0;j<M;j++)
            arr[i][j]=(int)random();
    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
                printf("address is %p,value is %d\n",&arr[i][j],arr[i][j]);
        printf("\n");
    }
    return 0;
}
