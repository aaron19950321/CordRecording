/*************************************************************************
	> File Name: FindMax_array.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 26 Feb 2017 12:52:26 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define M 3
#define N 4
int main()
{
    int arr[M][N],i,j;
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
            arr[i][j]=(int)random();
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int max=arr[0][0];
    int col,row;
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
        {
            if(max<=arr[i][j])
            {
                max=arr[i][j];
                col=i+1;
                row=j+1;
            }
        }
    printf("max is %d,column is %d ,row is %d\n",max,col,row);
    return 0;
}
