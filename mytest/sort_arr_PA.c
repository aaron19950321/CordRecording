/*************************************************************************
	> File Name: sort_arr_PA.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 28 Feb 2017 10:35:58 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define M 3 
#define N 100
void bubble(char *num[]);
int main()
{
    char str[M][N];

    char *p[M];
    int i;
    for(i=0;i<M;i++)
        p[i]=str[i];               //point at str_array

    for(i=0;i<M;i++)
        gets(p[i]);
    bubble(p);
    for(i=0;i<M;i++)
        puts(p[i]);
}

void bubble(char *num[])
{
    int i,j;
    for(i = 0;i < M-1 ;i++)
    {
        for(j=0;j < M-1-i;j++)
        {
            if(strcmp(num[j+1],num[j]))
            {
                char tmp[N];
                strcpy(tmp,num[j+1]);
                strcpy(num[j+1],num[j]);
                strcpy(num[j],tmp);
            }
        }
    }
}
