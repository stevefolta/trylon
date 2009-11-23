#include "Trylon_.h"

UsingSym_(InputStream)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(InputStream__Standard)
struct ClassInfo InputStream__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 36, 0, Proto_(InputStream__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(InputStream), nil, nil };
struct object InputStream__Standard = 
	{ &InputStream__Standard__classInfo_, {} };




obj_ lines__InputStream__Standard(obj_ this_)
{
	extern obj_ new_co___StreamLinesReader__Standard(obj_ this_, obj_ stream);
	obj_ t0_;
	UsingClass_(StreamLinesReader__Standard)

		{
		t0_ = new_co___StreamLinesReader__Standard(Proto_(StreamLinesReader__Standard), this_);
		return t0_;
		}
	return nil;
}


obj_ read_buffer_co_length_co___InputStream__Standard(obj_ this_, obj_ buffer, obj_ length)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


