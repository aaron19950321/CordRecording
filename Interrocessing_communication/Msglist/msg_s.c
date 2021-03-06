/*************************************************************************
	> File Name: msg_s.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 28 Mar 2017 10:55:54 AM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
#include<stdlib.h>
#define BUF_SIZE 20
typedef struct Mybuf
{
    long m_type;
    char m_buf[BUF_SIZE];
}Mybuf;

int main()
{
    key_t key = ftok(".",18);
    if (-1 == key)
    {
        perror("ftok");
        exit(-1);
    }
    int msgID;
    if ( (msgID = msgget(key,IPC_CREAT | 0666)) < 0)
    {
        perror("msgget");
        exit(-1);
    }

    Mybuf stBuf;
    memset(&stBuf,0,sizeof(Mybuf));
    stBuf.m_type = 2;
    strcpy(stBuf.m_buf,"hello world");
    if (0 == msgsnd(msgID,(void *)&stBuf,BUF_SIZE,0))
    {
        printf("send success!\r\n");
    }
    return 0;
}
