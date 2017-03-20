#include<stdio.h>


int max(int a, int b);

void main()
{
	int a,b,c;
	printf("input tree numbers:");
	scanf("%d%d%d",&a,&b,&c);
	printf("max is %d\n",max(max(a,b),c));
}


int max(int a, int b)
{
	return (a>b?a:b);
}
