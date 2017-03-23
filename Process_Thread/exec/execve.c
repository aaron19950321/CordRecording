/*************************************************************************
	> File Name: execev.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 23 Mar 2017 02:38:57 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main()
{
    char *agrv[] = {"aaa","bbb","ccc"};
    char *env[] = {"PWD=hello","world",NULL};

    if(-1 == execve("execle",agrv,env))
    {
        return -1;
    }
    return 0;
}
