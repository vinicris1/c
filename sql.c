/*Compile with: gcc sql.c -lmysqlclient -o sql*/
#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

void main(){
    MYSQL conexao;
    int res;
    MYSQL_RES *resp;
    MYSQL_ROW linhas;
    MYSQL_FIELD *campos;
    int conta;

    mysql_init(&conexao);
    if(mysql_real_connect(&conexao, "localhost", "teste", "root","admin", 3306, NULL, 0)){
        printf("\n CONNECT SUCEFULLY \n");
    }else{
    	printf("Connection failure");
	}
}
