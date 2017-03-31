/*************************************************************************
	> File Name: looksocket.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 29 Mar 2017 11:31:52 AM CST
 ************************************************************************/

#include<stdio.h>
#include<netinet/in.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<sys/time.h>
#include<arpa/inet.h>
#include<strings.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>
#include<malloc.h>
#define BUFSIZE 50
void *thread_func(void *arg);

int main()
{
    //set socket
    int sfd = socket(AF_INET,SOCK_STREAM,0);
    int *c_fd;
    pthread_t pid;
    //to represent 
    struct sockaddr_in svr_addr, c_addr;        
    struct timeval tv;
    int s_len = sizeof(svr_addr);                   
    int c_len = sizeof(c_addr);
    //res for return
    int res;

    bzero(&svr_addr,s_len);
    bzero(&c_addr,c_len);

    tv.tv_sec = 5;
    tv.tv_usec = 0;

    //set ip address & port numbet 
    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port= htons(6666);
    inet_pton(AF_INET,"127.0.0.1",&svr_addr.sin_addr);
        //svr_addr.sin_addr.s_addr = INADDR_ANY;
    //bind 
    res = bind(sfd,(struct sockaddr *)&svr_addr,s_len);
    if (res != 0)
    {
        perror("bind");
        exit(-1);
    }

    //listen for connection
    listen(sfd, 5);
    printf("socket and bind success! \n please wait  a moment!\r\n");
    while(1)
    {
        c_fd = (int *)malloc(sizeof(int));
        //accept a connection
        *c_fd = accept(sfd,(struct sockaddr *)&c_addr, &c_len);
        setsockopt(*c_fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));    //time out
        pthread_create(&pid,NULL,thread_func,(void *)c_fd);
        //IO
    }
    close(sfd);
    return 0;
}

void *thread_func(void *arg)
{
    char sendbuf[BUFSIZE] = "";
    char recvbuf[BUFSIZE] = "";
    
    int c_fd = *((int *)arg);
    read(c_fd, recvbuf, sizeof(recvbuf));
    printf("Recv form client : %s\r\n",recvbuf);
    strcpy(sendbuf,"send success!");
    send(c_fd,sendbuf,BUFSIZE,0);
    close(c_fd);
}
