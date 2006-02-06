#include "Trylon_.h"
#include <mysql/mysql.h>

#define raw_connection__fld_	0

static void ThrowException(const char* message)
{
	extern obj_ new_co___MySQL__Exception(obj_);

	Throw_(new_co___MySQL__Exception(BuildString_(message)));
}

static char* Arg(obj_ arg)
{
	if (arg == NULL)
		return NULL;
	return MakeCString_(arg);
}

#define setup_mysql 	\
	MYSQL* mysql = NULL; 	\
	obj_ raw_connection = Field_(raw_connection); 	\
	if (raw_connection == NULL) 	\
		return NULL; 	\
	mysql = (MYSQL*) BytePtrValue_(raw_connection);


obj_ create_host_co_user_co_password_co_database_co___MySQL__Connection(
     	obj_ this_, obj_ host, obj_ user, obj_ password, obj_ database)
{
	MYSQL* connectResult;

	MYSQL* mysql = mysql_init(NULL);
	if (mysql == NULL)
		ThrowException("Couldn't initialize the MySQL connection.");

	connectResult = 
		mysql_real_connect(mysql, Arg(host), Arg(user), Arg(password), 
		                   Arg(database));
	if (connectResult == NULL) {
		mysql_close(mysql);
		ThrowException("MySQL connection failed.");
		}

	Field_(raw_connection) = BuildBytePtr_(mysql);

	return NULL;
}


obj_ close__MySQL__Connection(obj_ this_)
{
	setup_mysql

	mysql_close(mysql);
	Field_(raw_connection) = NULL;

	return NULL;
}


obj_ query__MySQL__Connection(obj_ this_, obj_ query)
{
	int queryResult;
	setup_mysql

	queryResult = mysql_query(mysql, MakeCString_(query));
	if (queryResult != 0)
		ThrowException("MySQL query failed.");

	return NULL;
}


obj_ store_result__MySQL__Connection(obj_ this_)
{
	extern obj_ new_co___MySQL__Result(obj_);
	setup_mysql
	
	MYSQL_RES* result = mysql_store_result(mysql);
	if (result == NULL)
		ThrowException("No result from MySQL query.");

	return new_co___MySQL__Result(BuildBytePtr_(result));
}


