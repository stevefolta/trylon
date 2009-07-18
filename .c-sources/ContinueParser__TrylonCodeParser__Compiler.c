#include "Trylon_.h"

UsingSym_(ContinueParser)UsingClass_(TrylonCodeParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(ContinueParser__TrylonCodeParser__Compiler)
struct ClassInfo ContinueParser__TrylonCodeParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 89, 0, Proto_(ContinueParser__TrylonCodeParser__Compiler), Proto_(TrylonCodeParser__Compiler), Proto_(Object__Standard), nil, Sym_(ContinueParser), nil, nil };
struct object ContinueParser__TrylonCodeParser__Compiler = 
	{ &ContinueParser__TrylonCodeParser__Compiler__classInfo_, {} };




obj_ create__ContinueParser__TrylonCodeParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__ContinueParser__TrylonCodeParser__Compiler(obj_ this_)
{
	UsingClass_(ContinueParser__TrylonCodeParser__Compiler)
	obj_ obj = AllocObj_(ContinueParser__TrylonCodeParser__Compiler);
	create__ContinueParser__TrylonCodeParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___ContinueParser__TrylonCodeParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co___ContinueStatement__Compiler(obj_ this_, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(get_comment_co_)
	UsingClass_(ContinueStatement__Compiler)

		{
		t0_ = Call_(get_comment_co_, parser, words);
		t1_ = new_co___ContinueStatement__Compiler(Proto_(ContinueStatement__Compiler), t0_);
		return t1_;
		}
	return nil;
}


