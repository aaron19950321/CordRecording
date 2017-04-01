/*************************************************************************
	> File Name: select.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sat 01 Apr 2017 10:07:28 AM CST
 ************************************************************************/

#include<stdio.h>
#include<mysql/mysql.h>
#include<string.h>
int main()
{
    MYSQL conn;

    MYSQL_RES *res_ptr;
    MYSQL_ROW sqlrow;
    MYSQL_FIELD *fd;

    char flds[10][10];
    int i = 0,
        j = 0,
        k = 0;  //for count
    int res;
    mysql_init(&conn);


    if (mysql_real_connect(&conn,"localhost","root","84219875","db_test",0,NULL,0))
    {
        printf("mysql connect\r\n\n");
    }


    res = mysql_query(&conn, "select * from Student");
    if (res)
    {
        printf("select failed\r\n");
        mysql_close(&conn);
    }
    else
    {
        res_ptr = mysql_store_result(&conn);            //the point at the result

        if (res_ptr)
        {
            printf("recv %lu rows\n",(unsigned long)mysql_num_rows(res_ptr));

        }

        while(fd = mysql_fetch_field(res_ptr))
        {
            strcpy(flds[i],fd->name);
            i++;
        }

        printf("find :\r\n");

        j = mysql_num_fields(res_ptr);     //how many fields in table
        for(i = 0; i < j; i++)
        {
            printf("%s\t",flds[i]);         //show fields
        }
        printf("\n");

        while(sqlrow = mysql_fetch_row(res_ptr))    //get row information into (MYSQLROW)sqlrow  
        {
            for(i = 0; i < j;i++)
            {
                printf("%s\t",sqlrow[i]);          //show row
            }
            printf("\n");
        }
        mysql_free_result(res_ptr);

        mysql_close(&conn);
    }
}
