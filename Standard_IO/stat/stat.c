/*************************************************************************
	> File Name: stat.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 22 Mar 2017 08:24:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>

int main()
{
    struct stat stInfo;
    memset(&stInfo,0,sizeof(struct stat));
    int ret = stat(".",&stInfo);

    if(0 == ret)
    {
        printf("%ld\r\n",stInfo.st_size);
    }
    return 0;
}
