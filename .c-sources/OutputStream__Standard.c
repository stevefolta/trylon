#include "Trylon_.h"

UsingSym_(OutputStream)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(OutputStream__Standard)
struct ClassInfo OutputStream__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 65, 0, Proto_(OutputStream__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(OutputStream), nil, nil };
struct object OutputStream__Standard = 
	{ &OutputStream__Standard__classInfo_, {} };




obj_ end_message__OutputStream__Standard(obj_ this_)
{
	obj_ t0_;
	DefineString_(0, "\n")
	UsingMethod_(write_co_)

		{
		t0_ = Call_(write_co_, this_, Str_(0));
		}
	return nil;
}


obj_ send_chunk_co___OutputStream__Standard(obj_ this_, obj_ message_chunk)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(string) UsingMethod_(write_co_)

		{
		ForStart_(0, message_chunk, item)
			{
			t0_ = Call_(string, item);
			t1_ = Call_(write_co_, this_, t0_);
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ send_co___OutputStream__Standard(obj_ this_, obj_ message)
{
	obj_ t0_;
	UsingMethod_(end_message) UsingMethod_(send_chunk_co_)

		{
		t0_ = Call_(send_chunk_co_, this_, message);
		t0_ = Call_(end_message, this_);
		}
	return nil;
}


obj_ write_all_co___OutputStream__Standard(obj_ this_, obj_ collection)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(string) UsingMethod_(write_co_)

		{
		ForStart_(0, collection, item)
			{
			t0_ = Call_(string, item);
			t1_ = Call_(write_co_, this_, t0_);
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ write_buffer_co_length_co___OutputStream__Standard(obj_ this_, obj_ buffer, obj_ length)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ write_line__OutputStream__Standard(obj_ this_)
{
	obj_ t0_;
	DefineString_(0, "\n")
	UsingMethod_(write_co_)

		{
		t0_ = Call_(write_co_, this_, Str_(0));
		}
	return nil;
}


obj_ write_line_co___OutputStream__Standard(obj_ this_, obj_ line)
{
	obj_ t0_;
	DefineString_(0, "\n")
	UsingMethod_(write_co_)

		{
		t0_ = Call_(write_co_, this_, line);
		t0_ = Call_(write_co_, this_, Str_(0));
		}
	return nil;
}


obj_ write_co___OutputStream__Standard(obj_ this_, obj_ string)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(length) UsingMethod_(start) UsingMethod_(write_buffer_co_length_co_)

		{
		t0_ = Call_(start, string);
		t1_ = Call_(length, string);
		t2_ = Call_(write_buffer_co_length_co_, this_, t0_, t1_);
		}
	return nil;
}


