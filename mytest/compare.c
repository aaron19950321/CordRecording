#include<stdio.h>

int main()
{
	int i,j,k;
	printf("i j k\n");
	scanf("%d %d %d",&i,&j,&k);
	if(i<j)
		if(j<k) printf("i<j<k\n");
		else /*i<j  j>k*/ 
			if(i<k) printf("i<k<j\n");
			else printf("k<i<j\n");
	else /*j<i */
		if(i<k) printf("j<i<k\n");
		else /*j<i k<i*/
			if(j<k) printf("j<k<i\n");
			else printf("k<j<i\n");
    return 0;
}
