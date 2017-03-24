/*************************************************************************
	> File Name: pthread_creat.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 24 Mar 2017 11:07:39 AM CST
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *ThreadFunc(void *agrc)
{
    printf("haha!\r\n");
    pthread_exit("thread exit!");
}


int main()
{
    pthread_t tID = 0;
    if (0 != pthread_create(&tID,NULL,ThreadFunc,NULL))
    {
        printf("creat failed! \r\n");
        return -1;
    }

    printf("hello\r\n");
    //sleep(10);   //arm to wait thread
    char *value_ptr;
    if (0 != pthread_join(tID,(void *)&value_ptr))
    {
        printf("wait failed!\r\n");
        return -1;
    }
    printf("%s\r\n",value_ptr);
    return 0;
}
