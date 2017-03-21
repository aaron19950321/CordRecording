/*************************************************************************
	> File Name: test_fopen.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 21 Mar 2017 10:22:19 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main(int agrc,char **argc)
{
    FILE *fp;
    if ((fp = fopen("test","w+")) == NULL)
    {
        fprintf(stderr,"fopen() failed: %s\n",strerror(errno));
        return -1;
    }

    fclose(fp);
}
