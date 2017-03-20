/*************************************************************************
	> File Name: hash.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 20 Mar 2017 11:21:16 AM CST
 ************************************************************************/

#include<stdio.h>
typedef int Elemtype;
typedef struct hashNode{
    Elemtype data;
    int isHave;
}HashTable;
enum ISHAVE{
    FALSE = 0,
    TRUE
};
#define SIZE 13
int main()
{
    HashTable hash[SIZE]={0};
    int arry[] = {23,34,14,38,46,16,68,15,7,31,26};
    int p = 13;
    int index = 0;

    int i;
    for(i = 0;i < sizeof(arry)/sizeof(arry[0]);i++)
    {
        index = arry[i] % p;
        if(TRUE == hash[index].isHave)
        {
            //index++;
            while(TRUE == hash[index].isHave && index < SIZE)
            {
                index++;
            }
            if (SIZE <= index)
                return -1;
            hash[index].data = arry[i];
            hash[index].isHave = TRUE;
        }
        else
        {
            hash[index].data = arry[i];
            hash[index].isHave = TRUE;
        }
    }
    //sreach
    int sreach;
    printf("in:");
    scanf("%d",&sreach);
    index = sreach % p;

    if (TRUE == hash[index].isHave)
        return -1;
    if (hash[index].data == sreach)
    {
        printf("%d",index);
        return 0;
    }
    else
    {
        for(;index < SIZE;index++)
        {
            if (FALSE ==hash[index].isHave)
                return -1;
            if (hash[index].data == sreach)
            {
                printf("%d",index);
                return 0;
            }
        }
    }

}
