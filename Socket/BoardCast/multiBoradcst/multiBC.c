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

    struct ip_mreq mreq;
    bzero(&mreq,sizeof(mreq));

    mreq.imr_multiaddr.s_addr = inet_addr("224.224.224.224");
    mreq.imr_interface.s_addr = htonl(INADDR_ANY);

    int res = setsockopt(sfd,IPPROTO_IP, IP_ADD_MEMBERSHIP, &mreq, sizeof(mreq));

    if (res < 0)
    {
        perror("setsockopt");
        exit(-1);
    }

    struct sockaddr_in svr_addr;
    bzero(&svr_addr,sizeof(svr_addr));

    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = htons(6666);
    svr_addr.sin_addr.s_addr = INADDR_ANY;

    res = bind(sfd,(struct sockaddr *)&svr_addr,sizeof(svr_addr));
    if (res < 0)
    {
        perror("bind");
        exit(-1);
    }


    char buf[100] = "";
    struct sockaddr_in client_addr;
    int len =sizeof(client_addr);
    char bufip[20] = "";
    while(1)
    {
        bzero(&client_addr,len);
        res = recvfrom(sfd,buf,100,0,(struct sockaddr *)&client_addr,&len);
        if (res < 0)
        {
            perror("recvform");
            exit(-1);
        }
        else
        {
            printf("MSG: %s \r\nip is %s\r\n",buf,(inet_ntop(AF_INET, &client_addr.sin_addr.s_addr,bufip,sizeof(bufip))));
            memset(buf,0,sizeof(buf));
        }
    }
}
