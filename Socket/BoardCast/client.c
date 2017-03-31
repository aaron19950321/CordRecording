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
    int res;
    struct sockaddr_in svr_addr,c_addr;
    int len = sizeof(svr_addr);
    int c_len = sizeof(c_addr);
    bzero(&svr_addr,len);
    bzero(&svr_addr,len);
    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = htons(6666);
    svr_addr.sin_addr.s_addr = INADDR_ANY;
    res = bind(sk_fd,(struct sockaddr *)&svr_addr,len);
    if (res < 0)
    {
        perror("bind");
        exit(-1);
    }
    char buf[100] = "";
    char bufip[20] = "";
    while(1)
    {
        recvfrom(sk_fd, buf, 100, 0,(struct sockaddr *)&c_addr, &len);
        printf("MSG %s\r\n ip is %s\r\n",buf,(inet_ntop(AF_INET, &c_addr.sin_addr.s_addr,bufip,sizeof(bufip))));
        memset(buf,0,sizeof(buf));

    }
    close(sk_fd);
    return 0;
}
