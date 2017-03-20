/*************************************************************************
	> File Name: count.c
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Feb 2017 12:04:09 AM CST
 ************************************************************************/

#include<stdio.h>
#define M 100

int main()
{
    int a[M],i = 0;
    int count_old=0,count_even=0;
    int SumOld=0,SumEven=0;
    printf("please input some number:(knock enter by every step)");
    do
    {
        scanf("%d",&a[i]);
        i++;
    }while(a[i-1]!=0);                 //it can stop when you input '0'.
    i = i-2;                           //ignore the number 0.
    for(;i>=0;i--)
    {
        if(a[i]%2==0)
        {
            count_even++;
            SumEven +=a[i];
        }
        else
        {
            count_old++;
            SumOld +=a[i];
        }
    }
    printf("The number of old is %d ;The number of even is %d\n",count_old,count_even);
    /*Prevnet overflow from sum is 0*/
    if(SumOld==0) count_old=1;
    if(SumEven==0) count_even=1;
    printf("average of old and even is %.2f ,%.2f",SumOld/(float)count_old,SumEven/(float)count_even);
    return 0;
}
