/*************************************************************************
	> File Name: test.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 02 Mar 2017 11:12:35 AM CST
 ************************************************************************/

#include<stdio.h>

typedef struct Student{
    char name[10];
    int class;
    int age;
    int length;
    int weight;
}Student;


int  main()
{
    Student T1 = {"aaron",1,10,170,140};
    printf("%s,%d,%d,%d,%d",T1.name,T1.class,T1.age,T1.length,T1.weight);
}
