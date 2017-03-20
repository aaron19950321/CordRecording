#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	char str2[100];
	char *p = str1;
	char *q = str2;

	printf("Please input two strings!\n");
    printf("the first string is:\n");
	gets(str1);
    printf("the second string is:\n");
	gets(str2);                  //value
	
	while (*p != '\0')	     //copy str1->str2
	{
		*q = *p;
		q++;
		p++;
	}
	*q = '\0';                  //finish
	printf("str1 is %s,str2 is %s\n",str1,str2);
    return 0;
}
