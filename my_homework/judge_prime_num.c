/*************************************************************************
	> File Name: judge_prime_num.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 01 Mar 2017 08:01:53 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int FunctionPrimeNum(int n);
int main()
{
    int num;
    printf("input:");
    scanf("%d",&num);
    num=FunctionPrimeNum(num);
    if(num)
        printf("it is a prime number ~\n");
    else
        printf("it isn't a prime number~~\n");
}

int FunctionPrimeNum(int n)
{
    int i,count=0;
    if(n==2)
        return 1;
    for(i=(int)sqrt(n);i<n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count)
        return 0;
    else
        return 1;
}
