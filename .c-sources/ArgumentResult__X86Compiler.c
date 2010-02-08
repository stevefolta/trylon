#include "Trylon_.h"

UsingSym_(ArgumentResult)UsingClass_(X86Compiler)
UsingClass_(Result__X86Compiler)
UsingClass_(ArgumentResult__X86Compiler)
struct ClassInfo ArgumentResult__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 207, 1, Proto_(ArgumentResult__X86Compiler), Proto_(X86Compiler), Proto_(Result__X86Compiler), nil, Sym_(ArgumentResult), nil, nil };
struct object ArgumentResult__X86Compiler = 
	{ &ArgumentResult__X86Compiler__classInfo_, {nil} };



#define offset__fld_	(0)


obj_ create_co___ArgumentResult__X86Compiler(obj_ this_, obj_ index)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(2)
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(offset_co_)
	UsingSharedField_(word_size, X86Compiler) 

		{
		t0_ = Call_(_pl_, index, SmallInt_(2));
		t1_ = Call_(_st_, t0_, SharedField_(word_size, X86Compiler));
		t2_ = Call_(offset_co_, this_, t1_);
		}
	return nil;
}


obj_ disp32__ArgumentResult__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(127)
	UsingMethod_(_gt_) UsingMethod_(offset)

		{
		t0_ = Call_(offset, this_);
		t1_ = Call_(_gt_, t0_, SmallInt_(127));
		if (t1_)
			{
			t0_ = Call_(offset, this_);
			return t0_;
			}
		return nil;
		}
	return nil;
}


obj_ disp8__ArgumentResult__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(127)
	UsingMethod_(_lt_) UsingMethod_(offset)

		{
		t0_ = Call_(offset, this_);
		t1_ = Call_(_lt_, t0_, SmallInt_(127));
		if (t1_)
			{
			t0_ = Call_(offset, this_);
			return t0_;
			}
		return nil;
		}
	return nil;
}


obj_ mod_rm__ArgumentResult__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(127)
	UsingInt_(133)
	UsingInt_(69)
	UsingMethod_(_gt_) UsingMethod_(offset)

		{
		t0_ = Call_(offset, this_);
		t1_ = Call_(_gt_, t0_, SmallInt_(127));
		if (t1_)
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


obj_ new_co___ArgumentResult__X86Compiler(obj_ this_, obj_ index)
{
	UsingClass_(ArgumentResult__X86Compiler)
	obj_ obj = AllocObj_(ArgumentResult__X86Compiler);
	create_co___ArgumentResult__X86Compiler(obj, index);
	return obj;
}


