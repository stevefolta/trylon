#include "Trylon_.h"

UsingSym_(InStream)UsingClass_(File__Standard)
UsingClass_(InputStream__Standard)
UsingClass_(InStream__File__Standard)
struct ClassInfo InStream__File__Standard__classInfo_ = 
	{ 50, 4, Proto_(InStream__File__Standard), Proto_(File__Standard), Proto_(InputStream__Standard), nil, Sym_(InStream) ,nil };
struct object InStream__File__Standard = 
	{ &InStream__File__Standard__classInfo_, {nil} };



#define _dt_file__fld_	(0)


#include <stdio.h>

obj_ _dt_file__InStream__File__Standard(obj_ this_)
{
	return Field_(_dt_file);
}


obj_ _dt_file_co___InStream__File__Standard(obj_ this_, obj_ value)
{
	Field_(_dt_file) = value;
	return value;
}


obj_ close__InStream__File__Standard(obj_ this_)
{
if (Field_(_dt_file))
	fclose((FILE*) Field_(_dt_file));

}


obj_ create_co___InStream__File__Standard(obj_ this_, obj_ path)
{
UsingClass_(FileMissingException__File__Standard)
extern obj_ new_co___FileMissingException__File__Standard(obj_, obj_);
FILE* result = fopen(CString_(path), "r");
if (result == nil) {
	obj_ exception =
		new_co___FileMissingException__File__Standard(
			Proto_(FileMissingException__File__Standard), path);
	Throw_(exception);
	}
Field_(_dt_file) = (obj_) result;

}


obj_ destroy__InStream__File__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(close)

		{
		t0_ = Call_(close, this_);
		
		
		}
	return nil;
}


obj_ new_co___InStream__File__Standard(obj_ this_, obj_ path)
{
	UsingClass_(InStream__File__Standard)
	obj_ obj = AllocObj_(InStream__File__Standard);
	create_co___InStream__File__Standard(obj, path);
	return obj;
}


obj_ read_buffer_co_length_co___InStream__File__Standard(obj_ this_, obj_ buffer, obj_ length)
{
return
	BuildInt_(
		fread(
			BytePtrValue_(buffer), 1, IntValue_(length),
			(FILE*) Field_(_dt_file)));



}


