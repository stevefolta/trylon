#include "Trylon_.h"

UsingSym_(DispatchRowSet)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(DispatchRowSet__CCompiler)
struct ClassInfo DispatchRowSet__CCompiler__classInfo_ = 
	{ 144, 4, Proto_(DispatchRowSet__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(DispatchRowSet) ,nil };
struct object DispatchRowSet__CCompiler = 
	{ &DispatchRowSet__CCompiler__classInfo_, {nil} };


#define root__fld_	(0)


obj_ Iterator__DispatchRowSet__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(Iterator__DispatchRowSet__CCompiler)
	return Proto_(Iterator__DispatchRowSet__CCompiler);
}


obj_ Node__DispatchRowSet__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(Node__DispatchRowSet__CCompiler)
	return Proto_(Node__DispatchRowSet__CCompiler);
}


obj_ add_co___DispatchRowSet__CCompiler(obj_ this_, obj_ row)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(insert_co_) UsingMethod_(root) UsingMethod_(root_co_)
	extern obj_ new_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ row);
	UsingClass_(Node__DispatchRowSet__CCompiler)

		{
		t0_ = Call_(root, this_);
		if (t0_)
			{
			t0_ = Call_(root, this_);
			t1_ = Call_(insert_co_, t0_, row);
			t2_ = Call_(root_co_, this_, t1_);
			}
		else
			{
			t0_ = new_co___Node__DispatchRowSet__CCompiler(Proto_(Node__DispatchRowSet__CCompiler), row);
			t1_ = Call_(root_co_, this_, t0_);
			
			
			}
		}
	return nil;
}


obj_ create__DispatchRowSet__CCompiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(root_co_)

		{
		t0_ = Call_(root_co_, this_, nil);
		
		
		}
	return nil;
}


obj_ iterator__DispatchRowSet__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(root)
	extern obj_ new_co___Iterator__DispatchRowSet__CCompiler(obj_ this_, obj_ root);
	UsingClass_(Iterator__DispatchRowSet__CCompiler)

		{
		t0_ = Call_(root, this_);
		t1_ = new_co___Iterator__DispatchRowSet__CCompiler(Proto_(Iterator__DispatchRowSet__CCompiler), t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ new__DispatchRowSet__CCompiler(obj_ this_)
{
	UsingClass_(DispatchRowSet__CCompiler)
	obj_ obj = AllocObj_(DispatchRowSet__CCompiler);
	create__DispatchRowSet__CCompiler(obj);
	return obj;
}


obj_ root__DispatchRowSet__CCompiler(obj_ this_)
{
	return Field_(root);
}


obj_ root_co___DispatchRowSet__CCompiler(obj_ this_, obj_ value)
{
	Field_(root) = value;
	return value;
}


