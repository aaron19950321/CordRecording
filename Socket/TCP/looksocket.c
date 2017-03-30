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
    int s_len = sizeof(svr_addr);
    int c_len = sizeof(c_addr);
    //res for return
    int res;

    bzero(&svr_addr,s_len);
    bzero(&c_addr,c_len);

    //set ip address & port numbet 
    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port= htons(6666);
    inet_pton(AF_INET,"192.168.0.171",&svr_addr.sin_addr);
        //svr_addr.sin_addr.s_addr = INADDR_ANY;
    //bind 
    res = bind(sfd,(struct sockaddr *)&svr_addr,s_len);
    if (res != 0)
    {
        perror("bind");
        exit(-1);
    }
    printf("%d\r\n",res);

    //listen for connection
    listen(sfd, 5);

    while(1)
    {
        c_fd = (int *)malloc(sizeof(int));
        //accept a connection
        *c_fd = accept(sfd,(struct sockaddr *)&c_addr, &c_len);
        printf("%d\r\n",*c_fd);


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
    strcpy(sendbuf,"hello!");
    send(c_fd,sendbuf,BUFSIZE,0);
    close(c_fd);
}
