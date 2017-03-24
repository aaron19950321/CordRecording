/*************************************************************************
	> File Name: pthread_arg.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 24 Mar 2017 11:07:39 AM CST
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *ThreadFunc(void *arg)
{
    if (NULL == arg)
        return (void *)NULL;
    int b = *(int *)arg;
    printf("haha b = %d \r\n",b);
}


int main()
{
    int a = 10;
    pthread_t tID = 0;
    if (0 != pthread_create(&tID,NULL,ThreadFunc,(void *)&a))
    {
        printf("creat failed! \r\n");
        return -1;
    }

    printf("hello\r\n");
    //sleep(10);   //arm to wait thread
    if (0 != pthread_join(tID,NULL))
    {
        printf("wait failed!\r\n");
        return -1;
    }
    return 0;
}
