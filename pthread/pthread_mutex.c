/*************************************************************************
	> File Name: pthread_creat.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 24 Mar 2017 11:07:39 AM CST
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

#define BUF_SIZE 11

pthread_mutex_t mutex;

void *ThreadFunc1(void *agrc)
{
    if(NULL == agrc)
    {
        return (void *)NULL;
    }
    char *pArr = (char *)agrc;
    pthread_mutex_lock(&mutex);
    static char buf[BUF_SIZE] = {0};
    int i = 0;
    for (i = 0 ; i < 10 ;i++)
    {
        buf[i] = pArr[i];
        sleep(1);
    }
    printf("%s\r\n",buf);
    pthread_mutex_unlock(&mutex);
}


int main()
{
    pthread_t tID1 = 0;
    pthread_t tID2 = 0;
    
    char arry1[] = {'a','b','c','d','e','f','h','i','j','k'};
    char arry2[] = {'1','2','3','4','5','6','7','8','9','0'};
    
    if (-1 == (pthread_mutex_init(&mutex,NULL)))
    {
        return -1;
    }

    if (0 != pthread_create(&tID1,NULL,ThreadFunc1,(void *)arry1))
    {
        printf("creat failed! \r\n");
        return -1;
    }
    if (0 != pthread_create(&tID2,NULL,ThreadFunc1,(void *)arry2))
    {
        printf("creat failed! \r\n");
        return -1;
    }

    printf("hello\r\n");
    //sleep(10);   //arm to wait thread
    pthread_join(tID1,NULL);
    pthread_join(tID2,NULL);

    return 0;
}
