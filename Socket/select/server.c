/*************************************************************************
	> File Name: server.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 30 Mar 2017 01:20:19 PM CST
 ************************************************************************/

#include"hdsokt.h"
#include"func.h"
int main()
{
    int sfd;                                //for listen
    int c_fd[99];                           //fd for communication
    fd_set rdset;                           //select <- fd
    char buf[50] = "";
    char *sendbuf = "hello client";
    int maxfd;
    int i;
    int count;
    int res;
    struct sockaddr_in svr_addr,ac_addr;    //ac_addr is after accept
    int c_len = sizeof(ac_addr);

    sfd = Initsocket(&svr_addr,6666,"127.0.0.1");

    //listen
    listen(sfd,5);

    //accept
    count = 0;
    for(i = 0; i<99 ;i++)
    {
        c_fd[i] = -1;
    }
    while(1)
    {
        FD_ZERO(&rdset);
        maxfd = 0;
        //listen -> select
        FD_SET(sfd,&rdset);
        maxfd = maxfd >= sfd ? maxfd : sfd;
        //communication -> select
        for(i = 0; i<count ; i++)
        {
            if(c_fd[i] != -1)
            {
                FD_SET(c_fd[i],&rdset);
                maxfd = maxfd >= c_fd[i] ? maxfd : c_fd[i];
            }
        }

        //select -> sntl sir
        res = select(maxfd+1 , &rdset , NULL,NULL,NULL);

        //process every status
        //1 connect news
        if(FD_ISSET(sfd, &rdset))
        {
            c_fd[count] = accept(sfd, (struct sockaddr *)&ac_addr, &c_len);
            if (c_fd[count] > 0)
            {
                count++;
            }
        }
        //2 client send data to server
        for (i = 0;i<count ;i++)
        {
            if(c_fd[i] != -1 && FD_ISSET(c_fd[i], &rdset))
            {
                //read
                res = recv(c_fd[i],buf,50,0);

                if (res == 0)
                {
                    printf("client quit\r\n");
                    close(c_fd[i]);
                    c_fd[i] = -1;
                }

                if (res == -1)
                {
                    perror("select");
                    close(c_fd[i]);
                    c_fd[i] = -1;
                }

                if(res > 0)
                {
                    printf("recv MSG: %s\r\n",buf);
                    send(c_fd[i],sendbuf,strlen(sendbuf),0);
                }
            }
        }
    }

}
