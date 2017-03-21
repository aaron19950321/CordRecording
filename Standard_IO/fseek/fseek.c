/*************************************************************************
	> File Name: fseek.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 21 Mar 2017 03:26:05 PM CST
 ************************************************************************/

#include<stdio.h>
    //fseek---SEEK_SET, SEEK_CUR, or SEEK_END
#include<string.h>

#define BUF_SIZE 20

int main(int agrc,char * agrv[])
{
    if (2 != agrc)
    {
        return -1;
    }

    FILE * pFile = fopen(agrv[1],"r+");
    if (NULL == pFile)
        return -1;

    char buf[BUF_SIZE] = {0};
    printf("before %ld \r\n",ftell(pFile));
    fread(buf,1,20,pFile);
    printf("after %ld \r\n",ftell(pFile));

    //SET
    fseek(pFile,0,SEEK_SET);      
    memset(buf,0,BUF_SIZE);
    strcpy(buf,"SET");
    fwrite(buf,1,strlen(buf),pFile);
    //CUR
    fseek(pFile,1,SEEK_CUR);
    memset(buf,0,BUF_SIZE);
    strcpy(buf,"CUR");
    fwrite(buf,1,strlen(buf),pFile);
    //END
    memset(buf,0,BUF_SIZE);
    strcpy(buf,"END");
    fseek(pFile,0,SEEK_END);
    fwrite(buf,1,strlen(buf),pFile);
    //END

    fclose(pFile);
}
