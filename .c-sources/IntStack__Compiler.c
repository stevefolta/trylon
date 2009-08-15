#include "Trylon_.h"

UsingClass_(Cell__IntStack__Compiler) 
static obj_ tu0_[];
UsingSym_(IntStack)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(IntStack__Compiler)
struct ClassInfo IntStack__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 80, 1, Proto_(IntStack__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(IntStack), nil, ((obj_) tu0_) };
struct object IntStack__Compiler = 
	{ &IntStack__Compiler__classInfo_, {nil} };

	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(Cell__IntStack__Compiler) };

#define top_cell__fld_	(0)


obj_ Cell__IntStack__Compiler__accessor_(obj_ this_)
{
	UsingClass_(Cell__IntStack__Compiler)
	return Proto_(Cell__IntStack__Compiler);
}


obj_ create__IntStack__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(top_cell_co_)

		{
		t0_ = Call_(top_cell_co_, this_, nil);
		}
	return nil;
}


obj_ is_empty__IntStack__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(top_cell)

		{
		t0_ = Call_(top_cell, this_);
		t1_ = Not_(t0_);
		return t1_;
		}
	return nil;
}


obj_ new__IntStack__Compiler(obj_ this_)
{
	UsingClass_(IntStack__Compiler)
	obj_ obj = AllocObj_(IntStack__Compiler);
	create__IntStack__Compiler(obj);
	return obj;
}


obj_ pop__IntStack__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(next) UsingMethod_(top_cell) UsingMethod_(top_cell_co_) UsingMethod_(value)

		{
		obj_ value;
		t0_ = Call_(top_cell, this_);
		t1_ = Call_(value, t0_);
		value = t1_;
		t0_ = Call_(top_cell, this_);
		t1_ = Call_(next, t0_);
		t2_ = Call_(top_cell_co_, this_, t1_);
		return value;
		}
	return nil;
}


obj_ push_co___IntStack__Compiler(obj_ this_, obj_ value)
{
	extern obj_ new_co_next_co___Cell__IntStack__Compiler(obj_ this_, obj_ value, obj_ next);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(top_cell) UsingMethod_(top_cell_co_)
	UsingClass_(Cell__IntStack__Compiler)

		{
		t0_ = Call_(top_cell, this_);
		t1_ = new_co_next_co___Cell__IntStack__Compiler(Proto_(Cell__IntStack__Compiler), value, t0_);
		t2_ = Call_(top_cell_co_, this_, t1_);
		}
	return nil;
}


obj_ top__IntStack__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(top_cell) UsingMethod_(value)

		{
		t0_ = Call_(top_cell, this_);
		t1_ = Call_(value, t0_);
		return t1_;
		}
	return nil;
}


