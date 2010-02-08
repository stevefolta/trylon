#include "Trylon_.h"

UsingSym_(LocalResult)UsingClass_(X86Compiler)
UsingClass_(Result__X86Compiler)
UsingClass_(LocalResult__X86Compiler)
struct ClassInfo LocalResult__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 206, 1, Proto_(LocalResult__X86Compiler), Proto_(X86Compiler), Proto_(Result__X86Compiler), nil, Sym_(LocalResult), nil, nil };
struct object LocalResult__X86Compiler = 
	{ &LocalResult__X86Compiler__classInfo_, {nil} };



#define offset__fld_	(0)


obj_ create_co___LocalResult__X86Compiler(obj_ this_, obj_ index)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(1)
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(offset_co_) UsingMethod_(unary_minus)
	UsingSharedField_(word_size, X86Compiler) 

		{
		t0_ = Call_(_pl_, index, SmallInt_(1));
		t1_ = Call_(unary_minus, t0_);
		t2_ = Call_(_st_, t1_, SharedField_(word_size, X86Compiler));
		t3_ = Call_(offset_co_, this_, t2_);
		}
	return nil;
}


obj_ disp32__LocalResult__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(127)
	UsingMethod_(_lt_) UsingMethod_(offset) UsingMethod_(unary_minus)

		{
		t0_ = Call_(offset, this_);
		t1_ = Call_(unary_minus, SmallInt_(127));
		t2_ = Call_(_lt_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(offset, this_);
			return t0_;
			}
		return nil;
		}
	return nil;
}


obj_ disp8__LocalResult__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(127)
	UsingMethod_(_gt__eq_) UsingMethod_(offset) UsingMethod_(unary_minus)

		{
		t0_ = Call_(offset, this_);
		t1_ = Call_(unary_minus, SmallInt_(127));
		t2_ = Call_(_gt__eq_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(offset, this_);
			return t0_;
			}
		return nil;
		}
	return nil;
}


obj_ mod_rm__LocalResult__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(127)
	UsingInt_(133)
	UsingInt_(69)
	UsingMethod_(_lt_) UsingMethod_(offset) UsingMethod_(unary_minus)

		{
		t0_ = Call_(offset, this_);
		t1_ = Call_(unary_minus, SmallInt_(127));
		t2_ = Call_(_lt_, t0_, t1_);
		if (t2_)
			{
			return SmallInt_(133);
			}
		else
			{
			return SmallInt_(69);
			}
		}
	return nil;
}


obj_ new_co___LocalResult__X86Compiler(obj_ this_, obj_ index)
{
	UsingClass_(LocalResult__X86Compiler)
	obj_ obj = AllocObj_(LocalResult__X86Compiler);
	create_co___LocalResult__X86Compiler(obj, index);
	return obj;
}


