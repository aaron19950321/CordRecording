/*************************************************************************
	> File Name: test.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sat 11 Mar 2017 08:50:50 PM CST
 ************************************************************************/
//auto malloc the book memery
//
//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
    char name[20];
    int num;
    char * introduction;
}stu;
int main()
{
    //stu st = {0};
    //stu * pst = &st;
    //st.introduction = (char *)malloc(sizeof(char) * 20);
    //st.introduction = (char *)malloc(sizeof(char) * st.num);
    //stu * st = (stu *)malloc(sizeof(stu));
    
    int num;
    printf("input number that  you want to have:\n");
    scanf("%d",&num);
    stu * st = (stu *)malloc(sizeof(stu) * num);
    while(num--)
    {
        scanf("%s",st->name);
        scanf("%d",&st->num);
        st->introduction = (char *)malloc(sizeof(char) * st->num);
        scanf("%s",st->introduction);
        printf("%s\n",st->name);
        printf("%d\n",st->num);
        printf("%s\n",st->introduction);
        st++;
    }
}
