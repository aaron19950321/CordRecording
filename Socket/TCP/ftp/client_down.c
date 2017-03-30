/*************************************************************************
    > File Name: client.c
    > Author: ZhangShifang
    > Mail: zsf@qq.com 
    > Created Time: 2017年03月29日 星期三 13时58分50秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
#include<strings.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>

int main()
{
	struct sockaddr_in s_addr;
	int sfd,fd,size;
	char sendbuf[50] = "";
	char recvbuf[50] = "";
	int res;
	int s_len = sizeof(s_addr);

	bzero(&s_addr,s_len);
	//socket
	sfd = socket(AF_INET,SOCK_STREAM,0);
	//set server's IP & port
	s_addr.sin_family = AF_INET;
	s_addr.sin_port = htons(6666);
	inet_pton(AF_INET,"127.0.0.1",&s_addr.sin_addr);


	res = connect(sfd,(struct sockaddr *)&s_addr,s_len);

    //recv file name
    res = read(sfd,recvbuf,sizeof(recvbuf));
	if(res < 0)
	{
		perror("read");
		exit(-1);
	}
	fd = open(recvbuf,O_RDWR | O_CREAT,0666);
	if (fd < 0)
	{
		perror("open");
		exit(-1);
	}
    //recv size
	read(sfd,&size,sizeof(size));
    memset(recvbuf,0,sizeof(recvbuf));
	while(size != 0)
	{
        while(*recvbuf == '\0')
            read(sfd,recvbuf,sizeof(recvbuf));
        write(fd,recvbuf,sizeof(recvbuf));
        size = size - 5;
        send(sfd,&size,sizeof(int),0);
        memset(recvbuf,0,sizeof(recvbuf));
	}
	printf("%s\r\n",recvbuf);

	close(sfd);
	return 0;
}
