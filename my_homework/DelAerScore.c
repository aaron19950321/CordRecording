/*************************************************************************
	> File Name: delete_score.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sat 25 Feb 2017 05:58:43 PM CST
 ************************************************************************/

#include<stdio.h>
#define M 10                   //the number of scores

int FindMaxOrMin(int max_bool,int *p);

int main()
{
    int i;
    int a[M]={0};
    int max,min;
    int sum=0;
    printf("please input %d scores:",M); //input
    for(i=0;i<M;i++)
    {
        scanf("%d",&a[i]);
    }

    max=FindMaxOrMin(1,a);              //remember the location
    min=FindMaxOrMin(0,a);

    printf("after process the scores is :"); //output
    for(i=0;i<M;i++)
    {
        if(i==max||i==min) continue;      //it can not display the max or min
        sum +=a[i];
    }
    printf("average is:%.2f\n",(float)sum/(M-2));

    return 0;

}

/*Fuction:to find max or min score*/
int FindMaxOrMin(int max_bool,int *p)
{
    int tmp;
    if(max_bool)
    {
        int i,Max=*p;
        for(i=0;i<M;i++)
        {
            if(Max<=*(p+i))
            {
                Max=*(p+i);
                tmp=i; 
            }
        }
    }
    else
    {
        int i,Min=*p;
        for(i=M-1;i>=0;i--)
        {
            if(Min>=*(p+i))
            {
                Min=*(p+i);
                tmp=i; 
            }
        }
        
    }
    return tmp;
}

