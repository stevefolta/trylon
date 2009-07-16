#include "Trylon_.h"

UsingSym_(ThrowParser)UsingClass_(TrylonCodeParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(ThrowParser__TrylonCodeParser__Compiler)
struct ClassInfo ThrowParser__TrylonCodeParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 101, 0, Proto_(ThrowParser__TrylonCodeParser__Compiler), Proto_(TrylonCodeParser__Compiler), Proto_(Object__Standard), nil, Sym_(ThrowParser), nil, nil };
struct object ThrowParser__TrylonCodeParser__Compiler = 
	{ &ThrowParser__TrylonCodeParser__Compiler__classInfo_, {} };




obj_ create__ThrowParser__TrylonCodeParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__ThrowParser__TrylonCodeParser__Compiler(obj_ this_)
{
	UsingClass_(ThrowParser__TrylonCodeParser__Compiler)
	obj_ obj = AllocObj_(ThrowParser__TrylonCodeParser__Compiler);
	create__ThrowParser__TrylonCodeParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___ThrowParser__TrylonCodeParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co_comment_co___ThrowStatement__Compiler(obj_ this_, obj_ value, obj_ comment);
	obj_ t0_;
	UsingMethod_(get_comment_co_) UsingMethod_(parse_expression_co_)
	UsingClass_(ThrowStatement__Compiler)

		{
		obj_ comment, value;
		t0_ = Call_(parse_expression_co_, parser, words);
		value = t0_;
		t0_ = Call_(get_comment_co_, parser, words);
		comment = t0_;
		t0_ = new_co_comment_co___ThrowStatement__Compiler(Proto_(ThrowStatement__Compiler), value, comment);
		return t0_;
		}
	return nil;
}


