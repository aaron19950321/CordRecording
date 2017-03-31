/*************************************************************************
	> File Name: multiBC.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 31 Mar 2017 02:53:45 PM CST
 ************************************************************************/

#include"udp.h"

int main()
{
    int sfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sfd < 0)
    {
        perror("socket");
        exit(-1);
    }

    //struct ip_mreq mreq;
    //bzero(&mreq,sizeof(mreq));

    struct sockaddr_in svr_addr;
    bzero(&svr_addr,sizeof(svr_addr));

    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = htons(6666);
    svr_addr.sin_addr.s_addr = inet_addr("224.224.224.224");



    int res;
    char buf[100] = "";
    while(1)
    {
        printf("input\r\n");
        gets(buf);

        res = sendto(sfd,buf,100,0,(struct sockaddr *)&svr_addr,sizeof(svr_addr));
        if (res < 0)
        {
            perror("sendto");
            exit(-1);
        }
        else
            printf("send success!\r\n");
    }
    close(sfd);
}
