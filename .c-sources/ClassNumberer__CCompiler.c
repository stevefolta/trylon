#include "Trylon_.h"

UsingSym_(ClassNumberer)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(ClassNumberer__CCompiler)
struct ClassInfo ClassNumberer__CCompiler__classInfo_ = 
	{ 142, 4, Proto_(ClassNumberer__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(ClassNumberer) ,nil };
struct object ClassNumberer__CCompiler = 
	{ &ClassNumberer__CCompiler__classInfo_, {nil} };


#define cur_num__fld_	(0)


obj_ create__ClassNumberer__CCompiler(obj_ this_)
{
	obj_ t0_;
	DefineInt_(0, 0)
	UsingMethod_(cur_num_co_)

		{
		t0_ = Call_(cur_num_co_, this_, Int_(0));
		
		}
	return nil;
}


obj_ cur_num__ClassNumberer__CCompiler(obj_ this_)
{
	return Field_(cur_num);
}


obj_ cur_num_co___ClassNumberer__CCompiler(obj_ this_, obj_ value)
{
	Field_(cur_num) = value;
	return value;
}


obj_ new__ClassNumberer__CCompiler(obj_ this_)
{
	UsingClass_(ClassNumberer__CCompiler)
	obj_ obj = AllocObj_(ClassNumberer__CCompiler);
	create__ClassNumberer__CCompiler(obj);
	return obj;
}


obj_ next_number__ClassNumberer__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	UsingMethod_(_pl_) UsingMethod_(cur_num) UsingMethod_(cur_num_co_)

		{
		obj_ result;
		t0_ = Call_(cur_num, this_);
		result = t0_;
		t0_ = Call_(cur_num, this_);
		t1_ = Call_(_pl_, t0_, Int_(0));
		t2_ = Call_(cur_num_co_, this_, t1_);
		return result;
		
		
		}
	return nil;
}


