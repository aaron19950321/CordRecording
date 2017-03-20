/*************************************************************************
	> File Name: find_min_double.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 28 Feb 2017 10:28:54 PM CST
 ************************************************************************/

#include<stdio.h>

double FindMin(double *p,double *q);
int main()
{
    double min;
    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    min=FindMin(&a,&b);
    printf("min is %lf",min);
}

double FindMin(double *p,double *q)
{
    if(*p==*q) return 0;
    if(*p>*q)
        return *q;
    else
        return *p;
}
