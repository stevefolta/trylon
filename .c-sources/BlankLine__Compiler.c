#include "Trylon_.h"

UsingSym_(BlankLine)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(BlankLine__Compiler)
struct ClassInfo BlankLine__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 143, 1, Proto_(BlankLine__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(BlankLine), nil, nil };
struct object BlankLine__Compiler = 
	{ &BlankLine__Compiler__classInfo_, {nil} };


#define comment__fld_	(0)



obj_ compile_co___BlankLine__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_blank_line_co_)

		{
		t0_ = Call_(compile_blank_line_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create__BlankLine__Compiler(obj_ this_)
{
	return nil;
}


obj_ emit_code_co___BlankLine__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	DefineString_(0, "")
	UsingMethod_(add_line_co_)

		{
		t0_ = Call_(add_line_co_, builder, Str_(0));
		}
	return nil;
}


obj_ ignored_for_else__BlankLine__Compiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ interpreted__BlankLine__Compiler(obj_ this_)
{

		{
		return nil;
		}
	return nil;
}


obj_ new__BlankLine__Compiler(obj_ this_)
{
	UsingClass_(BlankLine__Compiler)
	obj_ obj = AllocObj_(BlankLine__Compiler);
	create__BlankLine__Compiler(obj);
	return obj;
}


