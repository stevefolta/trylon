#include "Trylon_.h"

UsingSym_(ClassNumberer)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(ClassNumberer__CCompiler)
struct ClassInfo ClassNumberer__CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 184, 1, Proto_(ClassNumberer__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(ClassNumberer), nil, nil };
struct object ClassNumberer__CCompiler = 
	{ &ClassNumberer__CCompiler__classInfo_, {nil} };


#define cur_num__fld_	(0)


obj_ create__ClassNumberer__CCompiler(obj_ this_)
{
	obj_ t0_;
	UsingInt_(0)
	UsingMethod_(cur_num_co_)

		{
		t0_ = Call_(cur_num_co_, this_, SmallInt_(0));
		}
	return nil;
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
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(cur_num) UsingMethod_(cur_num_co_)

		{
		obj_ result;
		t0_ = Call_(cur_num, this_);
		result = t0_;
		t0_ = Call_(cur_num, this_);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(cur_num_co_, this_, t1_);
		return result;
		}
	return nil;
}


