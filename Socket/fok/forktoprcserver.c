/*************************************************************************
	> File Name: forktoprcserver.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 31 Mar 2017 11:25:23 AM CST
 ************************************************************************/

#include"udp.h"
#include<signal.h>
#include<sys/wait.h>
#define BUFSIZE 50


void handle(int signo)
{
    while(waitpid(-1, NULL, WNOHANG) > 0);
}
int  main()
{
    char recvbuf[BUFSIZE] = "";
    char sendbuf[BUFSIZE] = "";

    int s_fd , ac_fd;
    struct sockaddr_in svr_addr, ac_addr;

    int s_len = sizeof(svr_addr);
    int ac_len = sizeof(ac_addr);

    int res;

    s_fd = socket(AF_INET, SOCK_STREAM, 0);
    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = htons(4321);
    svr_addr.sin_addr.s_addr = INADDR_ANY;

    signal(SIGCHLD, handle);

    res = bind(s_fd, (struct sockaddr *)&svr_addr, s_len);
    if (res < 0)
    {
        perror("bind");
        exit(-1);
    }

    listen(s_fd, 5);


    while(1)
    {
        ac_fd = accept(s_fd, (struct sockaddr *)&ac_addr, &ac_len);

        if (fork() == 0)
        {
            close(s_fd);
            recv(ac_fd,recvbuf,sizeof(recvbuf),0);
            printf("recv:%s\r\n",recvbuf);

            strcpy(sendbuf,"hello client!");
            send(ac_fd,sendbuf,sizeof(sendbuf),0);
            close(ac_fd);
            exit(-1);
        }
    }
    close(s_fd);
    return 0;
}

