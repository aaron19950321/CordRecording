/*************************************************************************
	> File Name: transfrom.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2017 04:58:32 PM PST
 ************************************************************************/

#include<stdio.h>
#define M 100

int main()
{
    int num,i;
    int remember[M];
    printf("please input a number:\n");
    scanf("%d",&num);
    printf("the binary system is\n");  
    for(i = 0;num>0;)
    {
        remember[i] = num % 2;
        num = num / 2;
        i++;
    }
    for(i=i-1;i >= 0;)
    {
        printf("%d\t",remember[i]);
        i--;
    }
    return 0;
}
