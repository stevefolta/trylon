#include "Trylon_.h"

UsingSym_(IffParser)UsingClass_(MethodParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(IffParser__MethodParser__Compiler)
struct ClassInfo IffParser__MethodParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 114, 0, Proto_(IffParser__MethodParser__Compiler), Proto_(MethodParser__Compiler), Proto_(Object__Standard), nil, Sym_(IffParser), nil, nil };
struct object IffParser__MethodParser__Compiler = 
	{ &IffParser__MethodParser__Compiler__classInfo_, {} };




obj_ create__IffParser__MethodParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__IffParser__MethodParser__Compiler(obj_ this_)
{
	UsingClass_(IffParser__MethodParser__Compiler)
	obj_ obj = AllocObj_(IffParser__MethodParser__Compiler);
	create__IffParser__MethodParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___IffParser__MethodParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___BlockStatement__Compiler(obj_ this_, obj_ block);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "!")
	DefineString_(1, "\"iff\" statement is missing its word.")
	UsingMethod_(_eq__eq_) UsingMethod_(block) UsingMethod_(error_co_) UsingMethod_(get_comment_co_) UsingMethod_(has_symbol_co_) UsingMethod_(is_empty) UsingMethod_(next) UsingMethod_(parse_block_co_) UsingMethod_(peek)
	UsingClass_(BlockStatement__Compiler)
	UsingClass_(Main)

		{
		obj_ inverted, name, test_succeeded;
		inverted = nil;
		t0_ = Call_(peek, words);
		t1_ = Call_(_eq__eq_, t0_, Str_(0));
		if (t1_)
			{
			inverted = true_;
			t0_ = Call_(next, words);
			}
		t0_ = Call_(is_empty, words);
		if (t0_)
			{
			t0_ = Call_(error_co_, parser, Str_(1));
			}
		t0_ = Call_(next, words);
		name = t0_;
		t0_ = Call_(get_comment_co_, parser, words);
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(has_symbol_co_, t0_, name);
		test_succeeded = t1_;
		if (inverted)
			{
			t0_ = Not_(test_succeeded);
			test_succeeded = t0_;
			}
		if (test_succeeded)
			{
			t0_ = Call_(block, line);
			t1_ = Call_(parse_block_co_, parser, t0_);
			t2_ = new_co___BlockStatement__Compiler(Proto_(BlockStatement__Compiler), t1_);
			return t2_;
			}
		return nil;
		}
	return nil;
}


