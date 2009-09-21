#include "Trylon_.h"

UsingSym_(OutStream)UsingClass_(File__Standard)
UsingClass_(OutputStream__Standard)
UsingClass_(OutStream__File__Standard)
struct ClassInfo OutStream__File__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 52, 1, Proto_(OutStream__File__Standard), Proto_(File__Standard), Proto_(OutputStream__Standard), nil, Sym_(OutStream), nil, nil };
struct object OutStream__File__Standard = 
	{ &OutStream__File__Standard__classInfo_, {nil} };



#define _dt_file__fld_	(0)


#include <stdio.h>
obj_ close__OutStream__File__Standard(obj_ this_)
{
if (Field_(_dt_file)) {
fclose((FILE*) Field_(_dt_file));
Field_(_dt_file) = nil;
}
}


obj_ create_co___OutStream__File__Standard(obj_ this_, obj_ path)
{
UsingClass_(FileOpenException__File__Standard);
extern obj_ new_co___FileOpenException__File__Standard(obj_, obj_);
FILE* result = fopen(CString_(path), "w+");
if (result == nil) {
obj_ exception =
new_co___FileOpenException__File__Standard(
Proto_(FileOpenException__File__Standard), path);
Throw_(exception);
}
Field_(_dt_file) = (obj_) result;
}


obj_ destroy__OutStream__File__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(close)

		{
		t0_ = Call_(close, this_);
		}
	return nil;
}


obj_ new_co___OutStream__File__Standard(obj_ this_, obj_ path)
{
	UsingClass_(OutStream__File__Standard)
	obj_ obj = AllocObj_(OutStream__File__Standard);
	create_co___OutStream__File__Standard(obj, path);
	RegisterFinalizer_(obj);
	return obj;
}


obj_ write_buffer_co_length_co___OutStream__File__Standard(obj_ this_, obj_ buffer, obj_ length)
{
return
BuildInt_(
fwrite(
BytePtrValue_(buffer), 1, IntValue_(length),
(FILE*) Field_(_dt_file)));
}


