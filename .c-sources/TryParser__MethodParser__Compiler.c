#include "Trylon_.h"

UsingSym_(TryParser)UsingClass_(MethodParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(TryParser__MethodParser__Compiler)
struct ClassInfo TryParser__MethodParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 117, 0, Proto_(TryParser__MethodParser__Compiler), Proto_(MethodParser__Compiler), Proto_(Object__Standard), nil, Sym_(TryParser), nil, nil };
struct object TryParser__MethodParser__Compiler = 
	{ &TryParser__MethodParser__Compiler__classInfo_, {} };




obj_ create__TryParser__MethodParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__TryParser__MethodParser__Compiler(obj_ this_)
{
	UsingClass_(TryParser__MethodParser__Compiler)
	obj_ obj = AllocObj_(TryParser__MethodParser__Compiler);
	create__TryParser__MethodParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___TryParser__MethodParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co_comment_co___TryStatement__Compiler(obj_ this_, obj_ body, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(get_comment_co_) UsingMethod_(parse_block_co_)
	UsingClass_(TryStatement__Compiler)

		{
		obj_ body, comment;
		t0_ = Call_(get_comment_co_, parser, words);
		comment = t0_;
		t0_ = Call_(block, line);
		t1_ = Call_(parse_block_co_, parser, t0_);
		body = t1_;
		t0_ = new_co_comment_co___TryStatement__Compiler(Proto_(TryStatement__Compiler), body, comment);
		return t0_;
		}
	return nil;
}


