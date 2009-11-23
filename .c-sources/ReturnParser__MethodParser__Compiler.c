#include "Trylon_.h"

UsingSym_(ReturnParser)UsingClass_(MethodParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(ReturnParser__MethodParser__Compiler)
struct ClassInfo ReturnParser__MethodParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 116, 0, Proto_(ReturnParser__MethodParser__Compiler), Proto_(MethodParser__Compiler), Proto_(Object__Standard), nil, Sym_(ReturnParser), nil, nil };
struct object ReturnParser__MethodParser__Compiler = 
	{ &ReturnParser__MethodParser__Compiler__classInfo_, {} };




obj_ create__ReturnParser__MethodParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__ReturnParser__MethodParser__Compiler(obj_ this_)
{
	UsingClass_(ReturnParser__MethodParser__Compiler)
	obj_ obj = AllocObj_(ReturnParser__MethodParser__Compiler);
	create__ReturnParser__MethodParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___ReturnParser__MethodParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new__LiteralNil__Compiler(obj_ this_);
	extern obj_ new_co_comment_co___ReturnStatement__Compiler(obj_ this_, obj_ value, obj_ comment);
	obj_ t0_;
	UsingMethod_(get_comment_co_) UsingMethod_(parse_optional_expression_co_)
	UsingClass_(LiteralNil__Compiler)
	UsingClass_(ReturnStatement__Compiler)

		{
		obj_ comment, value;
		t0_ = Call_(parse_optional_expression_co_, parser, words);
		value = t0_;
		t0_ = Not_(value);
		if (t0_)
			{
			t0_ = new__LiteralNil__Compiler(Proto_(LiteralNil__Compiler));
			value = t0_;
			}
		t0_ = Call_(get_comment_co_, parser, words);
		comment = t0_;
		t0_ = new_co_comment_co___ReturnStatement__Compiler(Proto_(ReturnStatement__Compiler), value, comment);
		return t0_;
		}
	return nil;
}


