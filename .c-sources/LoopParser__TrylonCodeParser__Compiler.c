#include "Trylon_.h"

UsingSym_(LoopParser)UsingClass_(TrylonCodeParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(LoopParser__TrylonCodeParser__Compiler)
struct ClassInfo LoopParser__TrylonCodeParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 111, 0, Proto_(LoopParser__TrylonCodeParser__Compiler), Proto_(TrylonCodeParser__Compiler), Proto_(Object__Standard), nil, Sym_(LoopParser), nil, nil };
struct object LoopParser__TrylonCodeParser__Compiler = 
	{ &LoopParser__TrylonCodeParser__Compiler__classInfo_, {} };




obj_ create__LoopParser__TrylonCodeParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__LoopParser__TrylonCodeParser__Compiler(obj_ this_)
{
	UsingClass_(LoopParser__TrylonCodeParser__Compiler)
	obj_ obj = AllocObj_(LoopParser__TrylonCodeParser__Compiler);
	create__LoopParser__TrylonCodeParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___LoopParser__TrylonCodeParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co_comment_co___LoopStatement__Compiler(obj_ this_, obj_ body, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(get_comment_co_) UsingMethod_(parse_block_co_)
	UsingClass_(LoopStatement__Compiler)

		{
		obj_ body, comment;
		t0_ = Call_(get_comment_co_, parser, words);
		comment = t0_;
		t0_ = Call_(block, line);
		t1_ = Call_(parse_block_co_, parser, t0_);
		body = t1_;
		t0_ = new_co_comment_co___LoopStatement__Compiler(Proto_(LoopStatement__Compiler), body, comment);
		return t0_;
		}
	return nil;
}


