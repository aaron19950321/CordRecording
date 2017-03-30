/*************************************************************************
	> File Name: looksocket.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Wed 29 Mar 2017 11:31:52 AM CST
 ************************************************************************/

#include<stdio.h>
#include"ftphead.h"
void *thread_func(void *arg);

int main()
{
    //set socket
    int sfd = socket(AF_INET,SOCK_STREAM,0);
    int *c_fd;
    pthread_t pid;
    //to represent 
    struct sockaddr_in svr_addr, c_addr;
    int s_len = sizeof(svr_addr);
    int c_len = sizeof(c_addr);
    //res for return
    int res;

    bzero(&svr_addr,s_len);
    bzero(&c_addr,c_len);

    //set ip address & port numbet 
    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port= htons(6666);
    inet_pton(AF_INET,"192.168.0.159",&svr_addr.sin_addr);
        //svr_addr.sin_addr.s_addr = INADDR_ANY;
    //bind 
    res = bind(sfd,(struct sockaddr *)&svr_addr,s_len);
    if (res != 0)
    {
        perror("bind");
        exit(-1);
    }

    //listen for connection
    listen(sfd, 5);


    c_fd = (int *)malloc(sizeof(int));
    //accept a connection
    *c_fd = accept(sfd,(struct sockaddr *)&c_addr, &c_len);
    if (*c_fd < 0)
    {
        perror("accept");
        exit(-1);
    }
    else
        printf("accept success!\r\n");
    if (pthread_create(&pid,NULL,thread_func,(void *)c_fd) != 0)
    {
        perror("pthread_create");
        exit(-1);
    }
    if (pthread_join(pid,NULL) < 0)
    {
        perror("pthread_join");
        exit(-1);
    }

    close(sfd);

    return 0;
}

void *thread_func(void *arg)
{
    char sendbuf[BUFSIZE] = "";
    char sendbufOfchar[5] = "";
    int c_fd = *((int *)arg);
    int ret;
    printf("pthread_create success!\r\n");

    //open File
    int fd = open("../document.txt",O_RDONLY, 0666);
    if (fd < 0)
    {
        perror("open");
        exit(-1);
    }
    else
    {
        printf("open file success",fd);
    }
    //get size
    int size = lseek(fd, 0, SEEK_END);
    if (size < 0)
    {
        perror("lseek");
        exit(-1);
    }
    lseek(fd,0,SEEK_SET);
    if(NULL == strcpy(sendbuf,"document.txt"))
    {
        perror("strcpy");
        exit(-1);
    }
    //send file name
    ret = send(c_fd,sendbuf,sizeof(sendbuf),0);
    if (ret < 0)
    {
        perror("send");
        exit(-1);
    }
    else
        printf("File name was sent!\r\n");
    //send size
    ret = send(c_fd,&size,sizeof(int),0);
    if (ret < 0)
    {
        perror("send");
        exit(-1);
    }
    while (size)
    {
        ret = read(fd,sendbufOfchar,sizeof(sendbufOfchar));
        printf("take %d charachters\r\n",ret);
        send(c_fd,sendbufOfchar,sizeof(sendbufOfchar),0);
        read(c_fd, &size,sizeof(int));
        printf("size is %d\r\n",size);
        memset(sendbufOfchar,0,sizeof(sendbufOfchar));
    }
    printf("down!\r\n");
    close(c_fd);
}
