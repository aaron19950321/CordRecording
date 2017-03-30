/*************************************************************************
	> File Name: client.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 29 Mar 2017 01:53:57 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<strings.h>
#include<string.h>
#include<unistd.h>

#define BUFSIZE 50

int main()
{
    struct sockaddr_in s_addr;
    int sfd;
    int res;
    char sendbuf[BUFSIZE] = "";
    char recvbuf[BUFSIZE] = "";
    int s_len = sizeof(s_addr);

    bzero(&s_addr,s_len);
    //socket ;
    sfd = socket(AF_INET, SOCK_STREAM, 0);

    //set IP & port
    s_addr.sin_family = AF_INET;
    s_addr.sin_port = htons(6666);
    inet_pton(AF_INET,"192.168.0.172",&s_addr.sin_addr);


    res = connect(sfd,(struct sockaddr *)&s_addr, s_len);

    if (res != 0)
    {
        perror("connect");
        exit(-1);
    }

    //IO
    //send
    strcpy(sendbuf,"hello ! I'm aaron\n");
    write(sfd,sendbuf,sizeof(sendbuf));
    //recv
    read(sfd,recvbuf,sizeof(recvbuf));
    printf("recv :%s\n",recvbuf);
    close(sfd);
    return 0;

}
