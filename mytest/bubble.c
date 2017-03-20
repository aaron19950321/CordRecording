/*************************************************************************
	> File Name: bubble.c
	> Author: 
	> Mail: 
	> Created Time: Tue 21 Feb 2017 09:25:34 PM PST
 ************************************************************************/

#include<stdio.h>
#define M 10
int main()
{
    int num[M] = {0};
    int *p_num = num;
    int i,j;

    for(i = 0;i < M;i++)
    {
        scanf("%d",p_num+i);
    }

    for(i = 0;i < M;i++)
    {
        printf("%d\t",*(p_num+i));
    }

    printf("\n");
    for(i = 0;i < M-1 ;i++)
    {
        for(j=0;j < M-1-i;j++)
        {
            if(num[j] > num[j+1])
            {
                num[j] = num[j+1] + num[j];
                num[j+1] = num[j] - num[j+1];
                num[j] = num[j] - num[j+1];
            }
        }
    }

    printf("after bubble \n");
    for(i = 0;i < M;i++)
    {
        printf("%d\t",*(p_num+i));
        if(i == M-1)
        printf("\n");
    }
    return 0;

}
