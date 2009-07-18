#include "Trylon_.h"

UsingSym_(BreakParser)UsingClass_(TrylonCodeParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(BreakParser__TrylonCodeParser__Compiler)
struct ClassInfo BreakParser__TrylonCodeParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 86, 0, Proto_(BreakParser__TrylonCodeParser__Compiler), Proto_(TrylonCodeParser__Compiler), Proto_(Object__Standard), nil, Sym_(BreakParser), nil, nil };
struct object BreakParser__TrylonCodeParser__Compiler = 
	{ &BreakParser__TrylonCodeParser__Compiler__classInfo_, {} };




obj_ create__BreakParser__TrylonCodeParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__BreakParser__TrylonCodeParser__Compiler(obj_ this_)
{
	UsingClass_(BreakParser__TrylonCodeParser__Compiler)
	obj_ obj = AllocObj_(BreakParser__TrylonCodeParser__Compiler);
	create__BreakParser__TrylonCodeParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___BreakParser__TrylonCodeParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co___BreakStatement__Compiler(obj_ this_, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(get_comment_co_)
	UsingClass_(BreakStatement__Compiler)

		{
		t0_ = Call_(get_comment_co_, parser, words);
		t1_ = new_co___BreakStatement__Compiler(Proto_(BreakStatement__Compiler), t0_);
		return t1_;
		}
	return nil;
}


