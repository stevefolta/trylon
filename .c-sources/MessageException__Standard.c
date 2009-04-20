#include "Trylon_.h"

UsingSym_(MessageException)UsingClass_(Standard)
UsingClass_(Exception__Standard)
UsingClass_(MessageException__Standard)
struct ClassInfo MessageException__Standard__classInfo_ = 
	{ 3, 1, Proto_(MessageException__Standard), Proto_(Standard), Proto_(Exception__Standard), nil, Sym_(MessageException) ,nil };
struct object MessageException__Standard = 
	{ &MessageException__Standard__classInfo_, {nil} };



#define the_message__fld_	(0)


obj_ create_co___MessageException__Standard(obj_ this_, obj_ message)
{
	obj_ t0_;
	UsingMethod_(the_message_co_)

		{
		t0_ = Call_(the_message_co_, this_, message);
		
		}
	return nil;
}


obj_ message__MessageException__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(the_message)

		{
		t0_ = Call_(the_message, this_);
		return t0_;
		
		
		
		}
	return nil;
}


obj_ new_co___MessageException__Standard(obj_ this_, obj_ message)
{
	UsingClass_(MessageException__Standard)
	obj_ obj = AllocObj_(MessageException__Standard);
	create_co___MessageException__Standard(obj, message);
	return obj;
}


obj_ the_message__MessageException__Standard(obj_ this_)
{
	return Field_(the_message);
}


obj_ the_message_co___MessageException__Standard(obj_ this_, obj_ value)
{
	Field_(the_message) = value;
	return value;
}


