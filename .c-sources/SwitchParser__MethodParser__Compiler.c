#include "Trylon_.h"

UsingSym_(SwitchParser)UsingClass_(MethodParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(SwitchParser__MethodParser__Compiler)
struct ClassInfo SwitchParser__MethodParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 115, 0, Proto_(SwitchParser__MethodParser__Compiler), Proto_(MethodParser__Compiler), Proto_(Object__Standard), nil, Sym_(SwitchParser), nil, nil };
struct object SwitchParser__MethodParser__Compiler = 
	{ &SwitchParser__MethodParser__Compiler__classInfo_, {} };




obj_ create__SwitchParser__MethodParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__SwitchParser__MethodParser__Compiler(obj_ this_)
{
	UsingClass_(SwitchParser__MethodParser__Compiler)
	obj_ obj = AllocObj_(SwitchParser__MethodParser__Compiler);
	create__SwitchParser__MethodParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___SwitchParser__MethodParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co_value_comment_co___SwitchStatement__Compiler(obj_ this_, obj_ expression, obj_ value_comment);
	extern obj_ new_co_in_co___SwitchOptionsParser__Compiler(obj_ this_, obj_ lines, obj_ context);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(block) UsingMethod_(cur_context) UsingMethod_(get_comment_co_) UsingMethod_(parse_expression_co_) UsingMethod_(parse_into_co_)
	UsingClass_(SwitchOptionsParser__Compiler)
	UsingClass_(SwitchStatement__Compiler)

		{
		obj_ comment, statement, value;
		t0_ = Call_(parse_expression_co_, parser, words);
		value = t0_;
		t0_ = Call_(get_comment_co_, parser, words);
		comment = t0_;
		t0_ = new_co_value_comment_co___SwitchStatement__Compiler(Proto_(SwitchStatement__Compiler), value, comment);
		statement = t0_;
		t0_ = Call_(block, line);
		t1_ = Call_(cur_context, parser);
		t2_ = new_co_in_co___SwitchOptionsParser__Compiler(Proto_(SwitchOptionsParser__Compiler), t0_, t1_);
		t3_ = Call_(parse_into_co_, t2_, statement);
		return statement;
		}
	return nil;
}


