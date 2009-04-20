#include "Trylon_.h"

UsingSym_(File)UsingClass_(Standard)
UsingClass_(FileDirectoryEntry__Standard)
UsingClass_(File__Standard)
struct ClassInfo File__Standard__classInfo_ = 
	{ 47, 1, Proto_(File__Standard), Proto_(Standard), Proto_(FileDirectoryEntry__Standard), nil, Sym_(File) ,nil };
struct object File__Standard = 
	{ &File__Standard__classInfo_, {nil} };



#define path__fld_	(0)


#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


obj_ FileMissingException__File__Standard__accessor_(obj_ this_)
{
	UsingClass_(FileMissingException__File__Standard)
	return Proto_(FileMissingException__File__Standard);
}


obj_ FileOpenException__File__Standard__accessor_(obj_ this_)
{
	UsingClass_(FileOpenException__File__Standard)
	return Proto_(FileOpenException__File__Standard);
}


obj_ InStream__File__Standard__accessor_(obj_ this_)
{
	UsingClass_(InStream__File__Standard)
	return Proto_(InStream__File__Standard);
}


obj_ OutStream__File__Standard__accessor_(obj_ this_)
{
	UsingClass_(OutStream__File__Standard)
	return Proto_(OutStream__File__Standard);
}


obj_ contents__File__Standard(obj_ this_)
{
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	extern obj_ new_co_to_co___String__Standard(obj_ this_, obj_ start, obj_ stopper);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_pl_) UsingMethod_(close) UsingMethod_(read_buffer_co_length_co_) UsingMethod_(size) UsingMethod_(stream)
	UsingClass_(BytePtr__Standard)
	UsingClass_(String__Standard)

		{
		obj_ size, storage, stream;
		t0_ = Call_(size, this_);
		size = t0_;
		t0_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), size);
		storage = t0_;
		t0_ = Call_(stream, this_);
		stream = t0_;
		t0_ = Call_(read_buffer_co_length_co_, stream, storage, size);
		t0_ = Call_(close, stream);
		t0_ = Call_(_pl_, storage, size);
		t1_ = new_co_to_co___String__Standard(Proto_(String__Standard), storage, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ contents_of_co___File__Standard(obj_ this_, obj_ path)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(contents) UsingMethod_(new_co_)

		{
		t0_ = Call_(new_co_, this_, path);
		t1_ = Call_(contents, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ create_co___File__Standard(obj_ this_, obj_ path)
{
	obj_ t0_;
	UsingMethod_(path_co_)

		{
		t0_ = Call_(path_co_, this_, path);
		
		}
	return nil;
}


obj_ exists__File__Standard(obj_ this_)
{
struct stat	buf;
return Bool_(stat(CString_(Field_(path)), &buf) == 0);

}


obj_ new_co___File__Standard(obj_ this_, obj_ path)
{
	UsingClass_(File__Standard)
	obj_ obj = AllocObj_(File__Standard);
	create_co___File__Standard(obj, path);
	return obj;
}


obj_ output_stream__File__Standard(obj_ this_)
{
	extern obj_ new_co___OutStream__File__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(path)
	UsingClass_(OutStream__File__Standard)

		{
		t0_ = Call_(path, this_);
		t1_ = new_co___OutStream__File__Standard(Proto_(OutStream__File__Standard), t0_);
		return t1_;
		
		}
	return nil;
}


obj_ path__File__Standard(obj_ this_)
{
	return Field_(path);
}


obj_ path_co___File__Standard(obj_ this_, obj_ value)
{
	Field_(path) = value;
	return value;
}


obj_ remove__File__Standard(obj_ this_)
{
unlink(CString_(Field_(path)));


}


obj_ size__File__Standard(obj_ this_)
{
DefineInt_(0, 0);
struct stat buf;
int error = stat(CString_(Field_(path)), &buf);
if (error != 0)
	return Int_(0);
return BuildInt_(buf.st_size);

}


obj_ stream__File__Standard(obj_ this_)
{
	extern obj_ new_co___InStream__File__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(path)
	UsingClass_(InStream__File__Standard)

		{
		t0_ = Call_(path, this_);
		t1_ = new_co___InStream__File__Standard(Proto_(InStream__File__Standard), t0_);
		return t1_;
		}
	return nil;
}


