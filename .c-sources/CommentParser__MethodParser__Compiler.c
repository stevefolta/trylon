#include "Trylon_.h"

UsingSym_(CommentParser)UsingClass_(MethodParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(CommentParser__MethodParser__Compiler)
struct ClassInfo CommentParser__MethodParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 109, 0, Proto_(CommentParser__MethodParser__Compiler), Proto_(MethodParser__Compiler), Proto_(Object__Standard), nil, Sym_(CommentParser), nil, nil };
struct object CommentParser__MethodParser__Compiler = 
	{ &CommentParser__MethodParser__Compiler__classInfo_, {} };




obj_ create__CommentParser__MethodParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__CommentParser__MethodParser__Compiler(obj_ this_)
{
	UsingClass_(CommentParser__MethodParser__Compiler)
	obj_ obj = AllocObj_(CommentParser__MethodParser__Compiler);
	create__CommentParser__MethodParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___CommentParser__MethodParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co___Comment__Compiler(obj_ this_, obj_ text);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(remainder)
	UsingClass_(Comment__Compiler)

		{
		t0_ = Call_(remainder, words);
		t1_ = new_co___Comment__Compiler(Proto_(Comment__Compiler), t0_);
		return t1_;
		}
	return nil;
}


