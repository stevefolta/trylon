#include "Trylon_.h"

UsingSym_(CatchParser)UsingClass_(MethodParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(CatchParser__MethodParser__Compiler)
struct ClassInfo CatchParser__MethodParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 113, 0, Proto_(CatchParser__MethodParser__Compiler), Proto_(MethodParser__Compiler), Proto_(Object__Standard), nil, Sym_(CatchParser), nil, nil };
struct object CatchParser__MethodParser__Compiler = 
	{ &CatchParser__MethodParser__Compiler__classInfo_, {} };




obj_ create__CatchParser__MethodParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__CatchParser__MethodParser__Compiler(obj_ this_)
{
	UsingClass_(CatchParser__MethodParser__Compiler)
	obj_ obj = AllocObj_(CatchParser__MethodParser__Compiler);
	create__CatchParser__MethodParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___CatchParser__MethodParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co___BlockStatement__Compiler(obj_ this_, obj_ block);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "#")
	UsingMethod_(_nt__eq_) UsingMethod_(attach_else_co_line_co_) UsingMethod_(block) UsingMethod_(get_comment_co_) UsingMethod_(is_empty) UsingMethod_(next) UsingMethod_(parse_block_co_) UsingMethod_(peek)
	UsingClass_(BlockStatement__Compiler)

		{
		obj_ body, comment;
		/*  Ignore words.  In Trylon 1, these would specify the type to catch.  But */
		/*  Trylon 2 catches all types always. */
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(is_empty, words);
			t1_ = Not_(t0_);
			if (t1_) {
				t2_ = Call_(peek, words);
				t3_ = Call_(_nt__eq_, t2_, Str_(0));
				t1_ = t3_;
				}
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(next, words);
			}
			}
		t0_ = Call_(get_comment_co_, parser, words);
		comment = t0_;
		t0_ = Call_(block, line);
		t1_ = Call_(parse_block_co_, parser, t0_);
		body = t1_;
		t0_ = new_co___BlockStatement__Compiler(Proto_(BlockStatement__Compiler), body);
		body = t0_;
		t0_ = Call_(attach_else_co_line_co_, parser, body, line);
		return nil;
		}
	return nil;
}


