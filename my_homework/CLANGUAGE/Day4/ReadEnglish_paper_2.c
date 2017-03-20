/*************************************************************************
	> File Name: ReadEnglish_paper_2.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Thu 09 Mar 2017 04:58:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    char str[100] = "asdacnnoLWUNaisdlanvCJLluwRTvubWTWBRRASDasldSDAbSAUIvaleuwfuvilbVLDNweOIQWvakjsdbLCSAvlwebvuil";
    int count['z'-'A'] = {0};

    char * p = str;

    while (*p)
    {
        count[*p - 'A']++;
        p++;
    }
    int i;
    for( i = 0;i < 26; i++ )
    {
        count[i] = count[i] + count[i + 'a' - 'A'];
        printf("%d   ",count[i]);
    }
    return 0;
}
