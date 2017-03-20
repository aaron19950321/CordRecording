#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *p = str,*q;
	char t;
	gets(str);
	int count = strlen(str)/2;              //change count
	q = p + strlen(str) - 1;

	while(count--)
	{
		t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}
	puts(str);
    return 0;
}
