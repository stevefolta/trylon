#include "Trylon_.h"

UsingSym_(ElseParser)UsingClass_(TrylonCodeParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(ElseParser__TrylonCodeParser__Compiler)
struct ClassInfo ElseParser__TrylonCodeParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 107, 0, Proto_(ElseParser__TrylonCodeParser__Compiler), Proto_(TrylonCodeParser__Compiler), Proto_(Object__Standard), nil, Sym_(ElseParser), nil, nil };
struct object ElseParser__TrylonCodeParser__Compiler = 
	{ &ElseParser__TrylonCodeParser__Compiler__classInfo_, {} };




obj_ create__ElseParser__TrylonCodeParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__ElseParser__TrylonCodeParser__Compiler(obj_ this_)
{
	UsingClass_(ElseParser__TrylonCodeParser__Compiler)
	obj_ obj = AllocObj_(ElseParser__TrylonCodeParser__Compiler);
	create__ElseParser__TrylonCodeParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___ElseParser__TrylonCodeParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new__IfParser__TrylonCodeParser__Compiler(obj_ this_);
	extern obj_ new_co___Comment__Compiler(obj_ this_, obj_ text);
	extern obj_ new_co___BlockStatement__Compiler(obj_ this_, obj_ block);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "if")
	UsingMethod_(_eq__eq_) UsingMethod_(attach_else_co_line_co_) UsingMethod_(block) UsingMethod_(else_target_co_) UsingMethod_(get_comment_co_) UsingMethod_(is_empty) UsingMethod_(next) UsingMethod_(parse_block_co_) UsingMethod_(parse_co_line_co_parser_co_) UsingMethod_(peek) UsingMethod_(prepend_co_)
	UsingClass_(BlockStatement__Compiler)
	UsingClass_(Comment__Compiler)
	UsingClass_(IfParser__TrylonCodeParser__Compiler)

		{
		obj_ statement;
		statement = nil;
		t0_ = Call_(is_empty, words);
		t1_ = Not_(t0_);
		if (t1_) {
			t2_ = Call_(peek, words);
			t3_ = Call_(_eq__eq_, t2_, Str_(0));
			t1_ = t3_;
			}
		if (t1_)
			{
			t0_ = Call_(next, words);
			t0_ = new__IfParser__TrylonCodeParser__Compiler(Proto_(IfParser__TrylonCodeParser__Compiler));
			t1_ = Call_(parse_co_line_co_parser_co_, t0_, words, line, parser);
			statement = t1_;
			}
		else
			{
			obj_ comment;
			t0_ = Call_(get_comment_co_, parser, words);
			comment = t0_;
			t0_ = Call_(block, line);
			t1_ = Call_(parse_block_co_, parser, t0_);
			statement = t1_;
			if (comment)
				{
				/*  "statement" will be a Block. */
				t0_ = new_co___Comment__Compiler(Proto_(Comment__Compiler), comment);
				t1_ = Call_(prepend_co_, statement, t0_);
				}
			t0_ = new_co___BlockStatement__Compiler(Proto_(BlockStatement__Compiler), statement);
			statement = t0_;
			}
		t0_ = Call_(attach_else_co_line_co_, parser, statement, line);
		t0_ = Call_(else_target_co_, parser, statement);
		 	/*  In case it's an "if" statement. */
		return nil;
		}
	return nil;
}


