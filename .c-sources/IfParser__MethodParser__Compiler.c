#include "Trylon_.h"

UsingSym_(IfParser)UsingClass_(MethodParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(IfParser__MethodParser__Compiler)
struct ClassInfo IfParser__MethodParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 113, 0, Proto_(IfParser__MethodParser__Compiler), Proto_(MethodParser__Compiler), Proto_(Object__Standard), nil, Sym_(IfParser), nil, nil };
struct object IfParser__MethodParser__Compiler = 
	{ &IfParser__MethodParser__Compiler__classInfo_, {} };




obj_ create__IfParser__MethodParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__IfParser__MethodParser__Compiler(obj_ this_)
{
	UsingClass_(IfParser__MethodParser__Compiler)
	obj_ obj = AllocObj_(IfParser__MethodParser__Compiler);
	create__IfParser__MethodParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___IfParser__MethodParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co_body_co_comment_co___IfStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(get_comment_co_) UsingMethod_(parse_block_co_) UsingMethod_(parse_expression_co_)
	UsingClass_(IfStatement__Compiler)

		{
		obj_ body, comment, expression;
		t0_ = Call_(parse_expression_co_, parser, words);
		expression = t0_;
		t0_ = Call_(get_comment_co_, parser, words);
		comment = t0_;
		t0_ = Call_(block, line);
		t1_ = Call_(parse_block_co_, parser, t0_);
		body = t1_;
		t0_ = new_co_body_co_comment_co___IfStatement__Compiler(Proto_(IfStatement__Compiler), expression, body, comment);
		return t0_;
		}
	return nil;
}


