/*************************************************************************
	> File Name: sendBrdCast.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 31 Mar 2017 01:29:51 PM CST
 ************************************************************************/
#include"udp.h"
int main()
{
    int sk_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sk_fd < 0)
    {
        perror("socket");
        exit(-1);
    }
    int on = 1;
    int res;
    res = setsockopt(sk_fd,SOL_SOCKET, SO_BROADCAST, &on, sizeof(on));
    if (res < 0)
    {
        perror("setsockopt");
        exit(-1);
    }
    struct sockaddr_in svr_addr;
    int len = sizeof(svr_addr);
    bzero(&svr_addr,len);
    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = htons(6666);
    svr_addr.sin_addr.s_addr = inet_addr("192.168.0.255");
    char buf[100] = "";
    while(1)
    {
        gets(buf);
        sendto(sk_fd, buf, 100, 0,(struct sockaddr *)&svr_addr, len);
        memset(buf,0,sizeof(buf));

    }
    close(sk_fd);
    return 0;
}
