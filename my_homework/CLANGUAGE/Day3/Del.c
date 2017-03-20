/*************************************************************************
	> File Name: Del.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 08 Mar 2017 11:04:27 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void del(char *c);

int main()
{
    char str[100]="abc///ab//bca";
    char *p=str;
//@@@@@@@@@@@@@@@function 1 @@@@@@@@@@@@@@@@

    const char * q="/";

    char * tmp;
    tmp = strtok(p,q);
    while(tmp)
    {
        printf("%s",tmp);
        tmp = strtok(NULL,q);
    }
//@@@@@@@@@@@@@@@@@function 2@@@@@@@@@@@@@@@@@
/*    while(*p)
    {
        if(*p=='/')
        {
            del(p);
            --p;
        }
        else
            p++;
    }
    puts(str);*/
    return 0;
}

void del(char *c)
{
    while(*c)
    {
        *c=*(c+1);
        c++;
    }
}
