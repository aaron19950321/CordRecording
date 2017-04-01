/*************************************************************************
	> File Name: firstUse.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Fri 31 Mar 2017 07:48:58 PM CST
 ************************************************************************/

#include<stdio.h>
#include<mysql/mysql.h>

int main()
{
    MYSQL conn;
    int res;
    mysql_init(&conn);     //init

    if (mysql_real_connect(&conn,"localhost","root","84219875","db_test",0,NULL,0));
    {
        printf("mysql was connected!\r\n");
    }

    res = mysql_query(&conn, "insert into Student values(3,'Lucy','132897');");
    if (res)
    {
        printf("insert failed!\r\n");
        mysql_close(&conn);
    }
    else
    {
        printf("insert success~\r\n");
    }




    mysql_close(&conn);
}
