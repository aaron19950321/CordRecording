/*************************************************************************
	> File Name: ll.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 22 Mar 2017 08:32:20 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<time.h>

int main()
{
    DIR *pDir = opendir(".");
    if (NULL == pDir)
        return -1;
    else
        printf("open dir OK !\r\n");

    struct dirent * ptmp = NULL;
    struct stat stInfo;
    memset(&stInfo,0,sizeof(struct stat));
    int ret = -1;
    while(NULL != (ptmp = readdir(pDir)))
    {
        ret = stat(".",&stInfo);
        printf("%s\t%lo\t%d\t%lld\t%s",ptmp->d_name,(unsigned long)stInfo.st_mode,stInfo.st_uid,(long long)stInfo.st_size,ctime(&stInfo.st_mtime));

    }
}
