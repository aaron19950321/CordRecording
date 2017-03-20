/*************************************************************************
	> File Name: SortArr.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Feb 2017 04:25:19 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int arr[10];
    int i,j;
    printf("enter numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0;i <9 ;i++)
    {
        for(j=0;j < 9-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                arr[j] = arr[j+1] + arr[j];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
