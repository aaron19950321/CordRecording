/*************************************************************************
	> File Name: client.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sat 01 Apr 2017 11:19:36 AM CST
 ************************************************************************/

#include"udp.h"
#define BUFSIZE 50
int main()
{
    char rbuf[BUFSIZE] = "";
    char sbuf[BUFSIZE] = "";
    char name[20] = "";
    char pwd[10] = "";
    char *p = sbuf;
    int i = 0;
    int s_fd;

    struct sockaddr_in svr_addr;
    int s_len = sizeof(svr_addr);

    int res;

    s_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (s_fd < 0)
    {
        perror("socket");
        exit(-1);
    }

    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = htons(4321);
    svr_addr.sin_addr.s_addr = inet_addr("127.0.0.1");


    res = connect(s_fd, (struct sockaddr *)&svr_addr,s_len);
    if (res < 0)
    {
        perror("connect");
        exxit(-1);
    }

    printf("please input name and password!\r\n");
    scanf("%s%s",name,pwd);

    strcat()
}
