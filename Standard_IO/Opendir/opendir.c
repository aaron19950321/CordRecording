/*************************************************************************
	> File Name: opendir.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 22 Mar 2017 08:19:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>

int main()
{
    DIR * pDir = opendir(".");
    if (NULL == pDir)
    {
        return -1;
    }
    printf("open dir OK!\r\n");

    struct dirent * pTmp = NULL;

    while(NULL !=(pTmp = readdir(pDir)))
    {
        printf("%s\r\n",pTmp->d_name);
    }

    closedir(pDir);
    return 0;
}
