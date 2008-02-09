#include "Trylon_.h"

UsingSym_(Standard)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(Standard)
struct ClassInfo Standard__classInfo_ = 
	{ 0, 0, Proto_(Standard), Proto_(Main), Proto_(Object__Standard), nil, Sym_(Standard) ,nil };
struct object Standard = 
	{ &Standard__classInfo_, {} };




#include <stdio.h>

obj_ _dt__dt__dt___Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(etc_dt_)

		{
		/* Synonym for etc. */
		t0_ = Call_(etc_dt_, this_);
		
		
		}
	return nil;
}


obj_ BytePtr__Standard__accessor_(obj_ this_)
{
	UsingClass_(BytePtr__Standard)
	return Proto_(BytePtr__Standard);
}


obj_ CImplementation__Standard__accessor_(obj_ this_)
{
	UsingClass_(CImplementation__Standard)
	return Proto_(CImplementation__Standard);
}


obj_ Dictionary__Standard__accessor_(obj_ this_)
{
	UsingClass_(Dictionary__Standard)
	return Proto_(Dictionary__Standard);
}


obj_ Exception__Standard__accessor_(obj_ this_)
{
	UsingClass_(Exception__Standard)
	return Proto_(Exception__Standard);
}


obj_ ExistingFileStream__Standard__accessor_(obj_ this_)
{
	UsingClass_(ExistingFileStream__Standard)
	return Proto_(ExistingFileStream__Standard);
}


obj_ File__Standard__accessor_(obj_ this_)
{
	UsingClass_(File__Standard)
	return Proto_(File__Standard);
}


obj_ FileDirectory__Standard__accessor_(obj_ this_)
{
	UsingClass_(FileDirectory__Standard)
	return Proto_(FileDirectory__Standard);
}


obj_ FileDirectoryEntry__Standard__accessor_(obj_ this_)
{
	UsingClass_(FileDirectoryEntry__Standard)
	return Proto_(FileDirectoryEntry__Standard);
}


obj_ Float__Standard__accessor_(obj_ this_)
{
	UsingClass_(Float__Standard)
	return Proto_(Float__Standard);
}


obj_ Implementation__Standard__accessor_(obj_ this_)
{
	UsingClass_(Implementation__Standard)
	return Proto_(Implementation__Standard);
}


obj_ InputStream__Standard__accessor_(obj_ this_)
{
	UsingClass_(InputStream__Standard)
	return Proto_(InputStream__Standard);
}


obj_ Int__Standard__accessor_(obj_ this_)
{
	UsingClass_(Int__Standard)
	return Proto_(Int__Standard);
}


obj_ Iterator__Standard__accessor_(obj_ this_)
{
	UsingClass_(Iterator__Standard)
	return Proto_(Iterator__Standard);
}


obj_ LinesIterator__Standard__accessor_(obj_ this_)
{
	UsingClass_(LinesIterator__Standard)
	return Proto_(LinesIterator__Standard);
}


obj_ List__Standard__accessor_(obj_ this_)
{
	UsingClass_(List__Standard)
	return Proto_(List__Standard);
}


obj_ MessageException__Standard__accessor_(obj_ this_)
{
	UsingClass_(MessageException__Standard)
	return Proto_(MessageException__Standard);
}


obj_ Object__Standard__accessor_(obj_ this_)
{
	UsingClass_(Object__Standard)
	return Proto_(Object__Standard);
}


obj_ ObjectMap__Standard__accessor_(obj_ this_)
{
	UsingClass_(ObjectMap__Standard)
	return Proto_(ObjectMap__Standard);
}


obj_ OutputStream__Standard__accessor_(obj_ this_)
{
	UsingClass_(OutputStream__Standard)
	return Proto_(OutputStream__Standard);
}


obj_ SingleObjectIterator__Standard__accessor_(obj_ this_)
{
	UsingClass_(SingleObjectIterator__Standard)
	return Proto_(SingleObjectIterator__Standard);
}


obj_ String__Standard__accessor_(obj_ this_)
{
	UsingClass_(String__Standard)
	return Proto_(String__Standard);
}


obj_ StringBuilder__Standard__accessor_(obj_ this_)
{
	UsingClass_(StringBuilder__Standard)
	return Proto_(StringBuilder__Standard);
}


obj_ StringBytesIterator__Standard__accessor_(obj_ this_)
{
	UsingClass_(StringBytesIterator__Standard)
	return Proto_(StringBytesIterator__Standard);
}


obj_ StringUTF8Iterator__Standard__accessor_(obj_ this_)
{
	UsingClass_(StringUTF8Iterator__Standard)
	return Proto_(StringUTF8Iterator__Standard);
}


obj_ Symbol__Standard__accessor_(obj_ this_)
{
	UsingClass_(Symbol__Standard)
	return Proto_(Symbol__Standard);
}


obj_ System__Standard__accessor_(obj_ this_)
{
	UsingClass_(System__Standard)
	return Proto_(System__Standard);
}


obj_ True__Standard__accessor_(obj_ this_)
{
	UsingClass_(True__Standard)
	return Proto_(True__Standard);
}


obj_ Tuple__Standard__accessor_(obj_ this_)
{
	UsingClass_(Tuple__Standard)
	return Proto_(Tuple__Standard);
}


obj_ end_message__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(print_line)

		{
		t0_ = Call_(print_line, this_);
		
		
		}
	return nil;
}


obj_ error_co___Standard(obj_ this_, obj_ message)
{
	obj_ t0_;
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingClass_(MessageException__Standard)

		{
		/* Calling this is not only more concise than creating and throwing a */
		/* MessageException yourself, it also gives a handy place to set a breakpoint. */
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), message);
		Throw_(t0_);
		
		
		}
	return nil;
}


obj_ etc_dt___Standard(obj_ this_)
{

		{
		/* Calling this function serves as a placeholder. */
		return nil;
		
		}
	return nil;
}


obj_ print_line__Standard(obj_ this_)
{
	obj_ t0_;
	DefineString_(0, "\n")
	UsingMethod_(print_co_)

		{
		t0_ = Call_(print_co_, this_, Str_(0));
		
		}
	return nil;
}


obj_ print_line_co___Standard(obj_ this_, obj_ line)
{
	obj_ t0_;
	DefineString_(0, "\n")
	UsingMethod_(print_co_)

		{
		t0_ = Call_(print_co_, this_, line);
		t0_ = Call_(print_co_, this_, Str_(0));
		
		}
	return nil;
}


obj_ print_co___Standard(obj_ this_, obj_ strObj)
{
byte_ptr_ start, stopper;
UsingMethod_(string)
strObj = Call_(string, strObj);
start = StringStart_(strObj);
stopper = StringStopper_(strObj);
fwrite(start, stopper - start, 1, stdout);


}


obj_ references__Standard(obj_ this_)
{
	UsingClass_(True__Standard)

		{
			{
			
			
			}
		}
	return nil;
}


obj_ send_chunk_co___Standard(obj_ this_, obj_ message)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(print_co_) UsingMethod_(string)

		{
		ForStart_(0, message, item)
			{
			t0_ = Call_(string, item);
			t1_ = Call_(print_co_, this_, t0_);
			
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ send_co___Standard(obj_ this_, obj_ message)
{
	obj_ t0_;
	UsingMethod_(print_line) UsingMethod_(send_chunk_co_)

		{
		t0_ = Call_(send_chunk_co_, this_, message);
		t0_ = Call_(print_line, this_);
		
		}
	return nil;
}


obj_ virtual__Standard(obj_ this_)
{
	obj_ t0_;
	DefineString_(0, "Attempt to call a virtual function!")
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	UsingClass_(MessageException__Standard)

		{
		/* ## */
		/* This is a function you can call in "pure virtual" functions.  It */
		/* throws an exception at runtime, and in the future the compiler */
		/* may use it to detect classes with "pure virtual" functions, and warn */
		/* about attempts to instanciate them. */
		/* ## */
		
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
		Throw_(t0_);
		
		}
	return nil;
}


