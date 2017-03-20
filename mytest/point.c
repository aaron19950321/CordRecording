#include<stdio.h>


int main()
{	
	int a = 1;
	int *p=&a;      //int *       ->int
	int **pp =&p;    //int **      ->int *
	

	printf("p %p\n *p %d\n **pp %d\n",p,*p,**pp);
    




    char str[100]="i am a boy!";
    char *pStr=str;
    char **ppStr=&pStr;

    printf("%c\n",**ppStr);

    ppStr++;

    printf("%c\n",**ppStr);
    return 0;
}
