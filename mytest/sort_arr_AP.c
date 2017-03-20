/*************************************************************************
	> File Name: sort_arr_AP.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 28 Feb 2017 11:05:29 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define M 3
#define N 100

void bubble(char (*p)[]);

int main()
{
    char a[M][N];

    char (*p)[N]=a;

    int i;
    for(i=0;i<3;i++)
       // gets(*p+i);     //mistakes
        gets(*(p+i));
    bubble(p);
    for(i=0;i<3;i++)
       // puts(*p+i);
        puts(*(p+i));
}

void bubble(char (*p)[])
{
    int i,j;
    for(i = 0;i < M-1 ;i++)
    {
        for(j=0;j <M-1-i;j++)
        {
            if(strcmp(*(p+j),*(p+j+1)))
            {
                char tmp[M];
                strcpy(tmp,*(p+j));
                strcpy(*(p+j),*(p+j+1));
                strcpy(*(p+j+1),tmp);
            }
        }
    }
}

