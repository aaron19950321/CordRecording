/*************************************************************************
	> File Name: client.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 30 Mar 2017 06:54:28 PM CST
 ************************************************************************/

#include"func.h"
#include"hdsokt.h"

#define BUFSIZE 50
int main()
{
    char sendbuf[BUFSIZE] ="";
    char recvbuf[BUFSIZE] ="";
    struct sockaddr_in addr;
    
    int s_fd = socket(AF_INET,SOCK_STREAM,0);
    if (s_fd < 0)
    {
        perror("socket");
        exit(-1);
    }
    int s_len = sizeof(addr);
    bzero(&addr, s_len);

    addr.sin_family = AF_INET;
    addr.sin_port = htons(6666);
    inet_pton(AF_INET,"127.0.0.1",&(addr.sin_addr));

    if (connect(s_fd,(struct sockaddr *)&addr,s_len) < 0)
    {
        perror("connect");
        exit(-1);
    }
    
    printf("please input strings\r\n");
    gets(sendbuf);

    send(s_fd,sendbuf,sizeof(sendbuf),0);

    recv(s_fd,recvbuf,sizeof(recvbuf),0);
    printf("MEG:%s\r\n",recvbuf);

    close(s_fd);
    return 0;
}
