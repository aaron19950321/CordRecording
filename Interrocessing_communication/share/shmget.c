/*************************************************************************
	> File Name: shmget.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 27 Mar 2017 04:08:36 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 2048

int main()
{
    int shmid;
    char *shmadd;
    //get key
    key_t key = ftok(".",1);
    if (-1 == key)
    {
        perror("ftok");
        exit(-1);
    }
    //shm get
    //IPC_CREAT | 0666
    if ((shmid = shmget(key,BUFSIZE,IPC_CREAT | 0666)) < 0)
    {
        perror("shmget");
        exit(-1);
    }
    else
        printf("create shm success!\r\n");
    //shm attach
    if((shmadd = (char *)shmat(shmid,NULL,0)) < 0)
    {
        perror("shmat");
        exit(-1);
    }
    else
        printf("shmat success!\r\n");
    //memset
    memset(shmadd,0,BUFSIZE);
    strcpy(shmadd,"hello aaaaaaaa aaron");
    return 0;
}
