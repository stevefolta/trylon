#include "Trylon_.h"

UsingSym_(FileOpenException)UsingClass_(File__Standard)
UsingClass_(Exception__Standard)
UsingClass_(FileOpenException__File__Standard)
struct ClassInfo FileOpenException__File__Standard__classInfo_ = 
	{ 5, 1, Proto_(FileOpenException__File__Standard), Proto_(File__Standard), Proto_(Exception__Standard), nil, Sym_(FileOpenException) ,nil };
struct object FileOpenException__File__Standard = 
	{ &FileOpenException__File__Standard__classInfo_, {nil} };



#define path__fld_	(0)


obj_ create_co___FileOpenException__File__Standard(obj_ this_, obj_ path)
{
	obj_ t0_;
	UsingMethod_(path_co_)

		{
		t0_ = Call_(path_co_, this_, path);
		
		}
	return nil;
}


obj_ message__FileOpenException__File__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Couldn't open file: \"")
	DefineString_(1, "\"")
	UsingMethod_(_pl_) UsingMethod_(path)

		{
		t0_ = Call_(path, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		return t2_;
		
		
		
		}
	return nil;
}


obj_ new_co___FileOpenException__File__Standard(obj_ this_, obj_ path)
{
	UsingClass_(FileOpenException__File__Standard)
	obj_ obj = AllocObj_(FileOpenException__File__Standard);
	create_co___FileOpenException__File__Standard(obj, path);
	return obj;
}


obj_ path__FileOpenException__File__Standard(obj_ this_)
{
	return Field_(path);
}


obj_ path_co___FileOpenException__File__Standard(obj_ this_, obj_ value)
{
	Field_(path) = value;
	return value;
}


