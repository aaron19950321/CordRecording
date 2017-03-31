/*************************************************************************
	> File Name: initsocket.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 30 Mar 2017 10:39:05 AM CST
 ************************************************************************/

#include"udp.h"
#define BUFSIZE 50
int main()
{
    int s_fd;
    char sendbuf[BUFSIZE] = "";
    char recvbuf[BUFSIZE] = "";
    struct sockaddr_in svr_addr;
    int s_len;
    s_len = sizeof(svr_addr);

    bzero(&svr_addr,s_len);


    //socket
    if ((s_fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
    {
        perror("socket");
        exit(-1);
    }

    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = htons(8888);
    svr_addr.sin_addr.s_addr = inet_addr("192.168.0.255");

    
    //recvform sendto 

    int ret;
    bzero(recvbuf,sizeof(recvbuf));
    strcpy(sendbuf,"hello server,192.168.0.142   aaron");
    sendto(s_fd, sendbuf, sizeof(sendbuf),0, (struct sockaddr *)&svr_addr, sizeof(svr_addr));
    ret = recvfrom(s_fd,recvbuf,sizeof(recvbuf),0,(struct sockaddr *)&svr_addr,&s_len);
    if (ret < 0)
    {
        perror("recvfrom");
        exit(-1);
    }
    else
    {   
        printf("send success ! \r\n");
    }
    close(s_fd);
}
