/*************************************************************************
	> File Name: binSearch.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Mon 20 Mar 2017 02:38:15 PM CST
 ************************************************************************/

#include<stdio.h>

int binSearch(sqList *pList, int k)
{
    int low = 0;
    int high = 0;
    int mid = 0;
    
    low = 1;
    high = pList->count - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if (pList->data[mid].age == k)
        {
            return mid;
        }
        else if (pList->data[mid].age > k)
        {
            high = mid - 1;         
        }
        else if (pList->data[mid].age < k)
        {
            low = mid + 1;          
        }
}
    return 0;
}
