/*************************************************************************
	> File Name: de.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Mar 2017 04:50:47 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/shm.h>
int main(int argc,char *argv[])
{
    if (2 != argc)
    {
        printf("paramter!\r\n");
        exit(-1);
    }
    int shmid = atoi(argv[1]);
    shmctl(shmid,IPC_RMID,NULL);
    return 0;
}
