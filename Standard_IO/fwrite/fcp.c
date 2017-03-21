/*************************************************************************
	> File Name: fwrite.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 21 Mar 2017 02:37:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<errno.h>
#include<string.h>
#define BUF_SIZE 12

int main(int argc , char * argv[])
{
    //check parameter
    if (3 != argc)
    {
        printf("input src and dest File\r\n");
        return -1;
    }
    //open src
    FILE *src = fopen(argv[1],"r");
    if (NULL == src)
    {
        perror("open srcFile :");
        return -1;
    }
    else
        printf("open srcOK!\r\n");
    //open dest
    FILE *dest= fopen(argv[2],"w");
    if (NULL == dest)
    {
        perror("open destFile :");
        return -1;
    }
    else
        printf("open destOK!\r\n");
    //fread File
    int ret = 0;
    char buf[BUF_SIZE] = {0};
    while(!feof(src))
    {
        memset(buf,0,BUF_SIZE);
        ret = fread(buf,1,10,src);
        if (0 == ret || ferror(src))
        {
            printf("read failed\r\n");
            break;
        }
        else
            fwrite(buf,1,10,dest);
        
    }
    printf("write success!\r\n");
    //close src and dest
    fclose(src);
    fclose(dest);
    return 0;
}
