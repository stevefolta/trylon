#include "Trylon_.h"

UsingSym_(Iterator)UsingClass_(FileDirectory__Standard)
UsingClass_(Iterator__Standard)
UsingClass_(Iterator__FileDirectory__Standard)
struct ClassInfo Iterator__FileDirectory__Standard__classInfo_ = 
	{ 14, 2, Proto_(Iterator__FileDirectory__Standard), Proto_(FileDirectory__Standard), Proto_(Iterator__Standard), nil, Sym_(Iterator) ,nil };
struct object Iterator__FileDirectory__Standard = 
	{ &Iterator__FileDirectory__Standard__classInfo_, {nil, nil} };



#define _dt_directory_handle__fld_	(0)
#define current_name__fld_	(1)


#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>

#define directory	((DIR*) Field_(_dt_directory_handle))
UsingMethod_(go_forward)

obj_ _dt_directory_handle__Iterator__FileDirectory__Standard(obj_ this_)
{
	return Field_(_dt_directory_handle);
}


obj_ _dt_directory_handle_co___Iterator__FileDirectory__Standard(obj_ this_, obj_ value)
{
	Field_(_dt_directory_handle) = value;
	return value;
}


obj_ create_co___Iterator__FileDirectory__Standard(obj_ this_, obj_ path)
{
char* pathStr = CString_(path);
Field_(_dt_directory_handle) = (obj_) opendir(pathStr);

/* Grab the first name. */
Call_(go_forward, this_);

}


obj_ current_item__Iterator__FileDirectory__Standard(obj_ this_)
{
return Field_(current_name);

}


obj_ current_name__Iterator__FileDirectory__Standard(obj_ this_)
{
	return Field_(current_name);
}


obj_ current_name_co___Iterator__FileDirectory__Standard(obj_ this_, obj_ value)
{
	Field_(current_name) = value;
	return value;
}


obj_ go_forward__Iterator__FileDirectory__Standard(obj_ this_)
{
struct dirent* dirEntry;

if (directory == nil)
	return nil;

dirEntry = readdir(directory);
if (dirEntry == nil) {
	closedir(directory);
	Field_(_dt_directory_handle) = nil;
	Field_(current_name) = nil;
	}
else
	Field_(current_name) = BuildString_(dirEntry->d_name);




}


obj_ is_done__Iterator__FileDirectory__Standard(obj_ this_)
{
return Bool_(Field_(current_name) == nil);

}


obj_ iterator__Iterator__FileDirectory__Standard(obj_ this_)
{

		{
		return this_;
		
		
		
		
		}
	return nil;
}


obj_ new_co___Iterator__FileDirectory__Standard(obj_ this_, obj_ path)
{
	UsingClass_(Iterator__FileDirectory__Standard)
	obj_ obj = AllocObj_(Iterator__FileDirectory__Standard);
	create_co___Iterator__FileDirectory__Standard(obj, path);
	return obj;
}


