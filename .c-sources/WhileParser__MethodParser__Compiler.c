#include "Trylon_.h"

UsingSym_(WhileParser)UsingClass_(MethodParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(WhileParser__MethodParser__Compiler)
struct ClassInfo WhileParser__MethodParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 118, 0, Proto_(WhileParser__MethodParser__Compiler), Proto_(MethodParser__Compiler), Proto_(Object__Standard), nil, Sym_(WhileParser), nil, nil };
struct object WhileParser__MethodParser__Compiler = 
	{ &WhileParser__MethodParser__Compiler__classInfo_, {} };




obj_ create__WhileParser__MethodParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__WhileParser__MethodParser__Compiler(obj_ this_)
{
	UsingClass_(WhileParser__MethodParser__Compiler)
	obj_ obj = AllocObj_(WhileParser__MethodParser__Compiler);
	create__WhileParser__MethodParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___WhileParser__MethodParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co_body_co_comment_co___WhileStatement__Compiler(obj_ this_, obj_ condition, obj_ body, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(get_comment_co_) UsingMethod_(parse_block_co_) UsingMethod_(parse_expression_co_)
	UsingClass_(WhileStatement__Compiler)

		{
		obj_ body, comment, condition;
		t0_ = Call_(parse_expression_co_, parser, words);
		condition = t0_;
		t0_ = Call_(get_comment_co_, parser, words);
		comment = t0_;
		t0_ = Call_(block, line);
		t1_ = Call_(parse_block_co_, parser, t0_);
		body = t1_;
		t0_ = new_co_body_co_comment_co___WhileStatement__Compiler(Proto_(WhileStatement__Compiler), condition, body, comment);
		return t0_;
		}
	return nil;
}


