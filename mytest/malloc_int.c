/*************************************************************************
	> File Name: malloc_int.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 01 Mar 2017 11:24:24 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 10
int *CreatInt(int *p);
int main()
{
    int *p;
    p=CreatInt(p);
    int i;
    for(i=0;i<M;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<M;i++)
    {
        printf("%d\t",*(p+i));
    }
    free(p);
    p=NULL;
}

int *CreatInt(int *p)
{
    p=(int *)malloc(sizeof(int)*M);
    if(p==NULL)
    {
        printf("malloc memory fail~");
        return NULL;
    }
    memset(p,0,sizeof(int)*M);    //!!!!notice!!!
    return p;
}
