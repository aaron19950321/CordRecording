/*************************************************************************
	> File Name: pthread_creat.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 24 Mar 2017 11:07:39 AM CST
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>

sem_t sem1;
sem_t sem2;
void *ThreadFunc1(void *agrc)
{
    int i = 10;
    while(i--)
    {
        sem_wait(&sem1);
        printf("haha!\r\n");
        sleep(1);
        sem_post(&sem2);
    }
}
void *ThreadFunc2(void *agrc)
{
    int i = 10;
    while(i--)
    {
        sem_wait(&sem2);
        printf("hehe!\r\n");
        sleep(1);
        sem_post(&sem1);
    }
}


int main()
{
    pthread_t tID1 = 0;
    pthread_t tID2 = 0;

    if (-1 == sem_init(&sem1,0,1) || -1 == sem_init(&sem2,0,0))
    {
        return -1;
    }
    if (0 != pthread_create(&tID1,NULL,ThreadFunc1,NULL))
    {
        printf("creat failed! \r\n");
        return -1;
    }
    if (0 != pthread_create(&tID2,NULL,ThreadFunc2,NULL))
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
