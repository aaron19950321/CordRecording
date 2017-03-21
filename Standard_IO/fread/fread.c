/*************************************************************************
	> File Name: fread.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 21 Mar 2017 02:06:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<errno.h>
#include<string.h>

#define BUF_SIZE 10
int main(int argc,char *agrv[])
{
    //check
    if (2 != argc)
    {
        printf("please input file name\r\n");
        return -1;
    }

    //open
    FILE * pFlie = fopen(agrv[1],"r");
    if (NULL == pFlie)
    {
        printf("open error %d  %s \r\n",errno,strerror(errno));
        return -1;
    }
    else
        printf("open success\r\n");

    //read
    printf("%d %d\r\n",feof(pFlie),ferror(pFlie));  //feof->end of FILE  return int(status)  
    char buf[BUF_SIZE] = {0};
    while(!feof(pFlie))
    {
        memset(buf,0,BUF_SIZE);
        int ret = fread(buf,1,10,pFlie);
        if(0 == ret || ferror(pFlie))
        {
            printf("read Failed\r\n");
            break;
        }
        else
            printf("%s",buf);
    }
    //close
    fclose(pFlie);
    return 0;
}
