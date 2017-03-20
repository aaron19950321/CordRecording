/*************************************************************************
	> File Name: factorial.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 01 Mar 2017 08:25:36 PM CST
 ************************************************************************/

#include<stdio.h>
double factorial(double num);

int main()
{
    double a;
    scanf("%lf",&a);
    a=factorial(a);
    printf("%lf",a);
    return 0;
}

double factorial(double num)
{
    if(num==1)
        num=1;
    else
        num=num*factorial(num-1);
    return num;
}
