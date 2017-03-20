/*************************************************************************
	> File Name: bubbleFucion.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 28 Feb 2017 10:21:52 PM CST
 ************************************************************************/

#include<stdio.h>
#define M 100
void bubble(int num[]);
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
    bubble(p_num);
    printf("after bubble \n");
    for(i = 0;i < M;i++)
    {
        printf("%d\t",*(p_num+i));
        if(i == M-1)
        printf("\n");
    }
    return 0;
    printf("after bubble \n");
    for(i = 0;i < M;i++)
    {
        printf("%d\t",*(p_num+i));
        if(i == M-1)
        printf("\n");
    }
    return 0;
}
void bubble(int num[])
{
    int i,j;
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
}
