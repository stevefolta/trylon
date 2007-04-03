#include "Trylon_.h"
#include <mysql/mysql.h>

#define setup_result 	\
	MYSQL_RES* result = NULL; 	\
	obj_ raw_result = Field_(raw_result); 	\
	if (raw_result == NULL) 	\
		return NULL; 	\
	result = (MYSQL_RES*) BytePtrValue_(raw_result);

#define raw_result__fld_	0


obj_ close__MySQL__Result(obj_ this_)
{
	setup_result

	mysql_free_result(result);
	Field_(raw_result) = NULL;

	return NULL;
}


obj_ num_rows__MySQL__Result(obj_ this_)
{
	setup_result

	int numRows = mysql_num_rows(result);
	return BuildInt_(numRows);
}


obj_ fetch_row__MySQL__Result(obj_ this_)
{
	int numFields, whichField;
	unsigned long* fieldLengths;
	MYSQL_ROW row;
	obj_ tuple;
	extern obj_ new_co___Standard__Tuple(obj_);
	setup_result
	
	row = mysql_fetch_row(result);
	if (row == NULL)
		return NULL;

	// Put together a tuple with all the fields.
	numFields = mysql_num_fields(result);
	fieldLengths = mysql_fetch_lengths(result);
	tuple = new_co___Standard__Tuple(BuildInt_(numFields));
	for (whichField = 0; whichField < numFields; ++whichField) {
		obj_ rowValue;
		if (row[whichField] == NULL)
			rowValue = NULL;
		else
			rowValue = BuildStringOfLength_(row[whichField], fieldLengths[whichField]);
		tuple->fields[whichField + 1] = rowValue;
		}

	return tuple;
}



/*
	Copyright 2005 - 2007 Steve Folta.
	See the License file.
*/

