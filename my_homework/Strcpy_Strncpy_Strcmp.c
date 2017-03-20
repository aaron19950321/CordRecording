/*************************************************************************
	> File Name: Strcpy_Strncpy_Strcmp.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 26 Feb 2017 04:29:49 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define M 100

void ShowMenu();
void Mystrcpy(char *p,char *q);
void Mystrncpy(char *p,char *q,int n);
int Mystrcmp(char *p,char *q);
void GetStrings(char *p,char *q);
int Mystrncmp(char *p,char *q,int n);

int main()
{
    while(1)
    {
        char str1[M];
        char str2[M];
        char *q=str2;
        char *p=str1;
        int tmp;
        int n;

        ShowMenu();
        int choise;
        scanf("%d",&choise);
        system("clear");

        if(choise==1)
        {
            GetStrings(p,q);
            Mystrcpy(p,q);
            printf("after processing the first is %s ,the second is %s\n",p,q);
        }
        if(choise==2)
        {
            GetStrings(p,q);
            printf("input n:");
            scanf("%d",&n);
            Mystrncpy(p,q,n);
            printf("after processing the first is %s ,the second is %s\n",p,q);
        }
        if(choise==3)
        {
            GetStrings(p,q);
            tmp=Mystrcmp(p,q);
            if(tmp==1)
                printf("str1 > str2\n");
            if(tmp==-1)
                printf("str1 < str2\n");
            if(tmp==0)
                printf("str1 = str2\n");
        }
        if(choise==4)
        {
            GetStrings(p,q);
            printf("input n:");
            scanf("%d",&n);
            tmp=Mystrncmp(p,q,n);
            if(tmp==1)
                printf("str1 > str2\n");
            if(tmp==-1)
                printf("str1 < str2\n");
            if(tmp==0)
                printf("str1 = str2\n");
        }
        if(choise==5)
        {
            return 0;
        }
    }
    return 0;
}

void ShowMenu()
{
    printf("************************************************************\n");
    printf("\n");
    printf("\n");
    printf("     1.strcpy     2.strncpy    3.strcmp    4.strncmp   5.quit\n");
    printf("\n");
    printf("\n");
    printf("************************************************************\n");

    printf("\n");
    printf("\n");
    printf("choose a function :");
}

void Mystrcpy(char *p,char *q)
{
    while(*q)
        *(p++)=*(q++);
    *p='\0';
}

void Mystrncpy(char *p,char *q,int n)
{
    int i=0;
    while(*q)
    {
        i++;
        *(p++)=*(q++);
        if(i==n) break;
    }
    *p='\0';
}

int Mystrcmp(char *p,char *q)
{
    while(*(p++)==*(q++));
    if(*(--p)<*(--q)) return -1;
    if(*(--p)>*(--q)) return 1;
    if(*(--p)=*(--q)) return 0;
}
int Mystrncmp(char *p,char *q,int n)
{
    int count=0;
    while(*(p++)==*(q++))
    {
        count++;
        if(count==n) break;
    }
    if(*(--p)<*(--q)) return -1;
    if(*(--p)>*(--q)) return 1;
    if(*(--p)=*(--q)) return 0;
}

void GetStrings(char *p,char *q)
{
    printf("please a string of characters:\n");
    scanf("%s",p);
    printf("please a string of characters:\n");
    scanf("%s",q);
}
