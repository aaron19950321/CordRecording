/*************************************************************************
	> File Name: KMP.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Feb 2017 04:57:23 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define M 100
typedef struct seqstring{
    char string[M];
    int length;
}seqstring;

int notKmp(char *p,char *q);
void GetNext(seqstring p,int next[]);
int Kmp(seqstring t,seqstring p,int next[]);

int main()
{
    int location;
    char str1[M];
    char str2[M];
    char *p=str1;
    char *q=str2;
    printf("please enter two strings of characters:\n1.");
    gets(str1);
    printf("2.");
    gets(str2);
    location=notKmp(p,q);
    printf("location is %d\n",location);


    printf("*******Function 2********\n");
    seqstring t,y;
    int next[50];
    printf("please enter two strings of characters:\n1.");
    gets(t.string);
    printf("2.");
    gets(y.string);

    t.length=strlen(t.string);
    y.length=strlen(y.string);
    
    GetNext(y,next);
    printf("kmp'location is %d",Kmp(t,y,next));
    return 0;
}

int notKmp(char *p,char *q)
{
    int n=1,count=0;

    while(1)
    {
        while(*p!=*q)
        {
            if(*p=='\0') return 0;
            n++;
            p++;
        }
        while(*(p++)==*(q++))
        {
            if(*q=='\0')
                return n;
            if(*p=='\0')
                return 0;
            count++;
        }
        p-=count;
        q-=count;
    }
}

void GetNext(seqstring p,int next[])
{
    int i,j;
    next[0]=-1;      //symbol of processing
    i=0;
    j=-1;
    while(i<p.length)
        if(j==-1||p.string[i]==p.string[j])
        {
            i++;
            j++;
            next[i]=j;
        }
        else
            j=next[j];
}

int Kmp(seqstring t,seqstring p,int next[])
{
    int i,j;
    while(i<t.length&&j<p.length)
        if(j==-1||t.string[i]==p.string[j])
        {
            i++;
            j++;
        }
        else
        {
            j=next[j];
        }
    if(j==p.length)
        return i-p.length;
    else 
        return -1;
}

