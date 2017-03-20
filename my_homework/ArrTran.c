/*************************************************************************
	> File Name: ArrTran.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 26 Feb 2017 12:39:34 PM CST
 ************************************************************************/

#include<stdio.h>
#define M 5

int main()
{
    int i,j;
    int arr[M][M]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5}};
    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
    printf("after:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
            printf("%d\t",arr[j][i]);
        printf("\n");
    }

    return 0;
}

