#include "Trylon_.h"

UsingSym_(ForParser)UsingClass_(TrylonCodeParser__Compiler)
UsingClass_(Object__Standard)
UsingClass_(ForParser__TrylonCodeParser__Compiler)
struct ClassInfo ForParser__TrylonCodeParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 91, 0, Proto_(ForParser__TrylonCodeParser__Compiler), Proto_(TrylonCodeParser__Compiler), Proto_(Object__Standard), nil, Sym_(ForParser), nil, nil };
struct object ForParser__TrylonCodeParser__Compiler = 
	{ &ForParser__TrylonCodeParser__Compiler__classInfo_, {} };




obj_ create__ForParser__TrylonCodeParser__Compiler(obj_ this_)
{
	return nil;
}


obj_ new__ForParser__TrylonCodeParser__Compiler(obj_ this_)
{
	UsingClass_(ForParser__TrylonCodeParser__Compiler)
	obj_ obj = AllocObj_(ForParser__TrylonCodeParser__Compiler);
	create__ForParser__TrylonCodeParser__Compiler(obj);
	return obj;
}


obj_ parse_co_line_co_parser_co___ForParser__TrylonCodeParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ parser)
{
	extern obj_ new_co___CompiledField__Compiler(obj_ this_, obj_ name);
	extern obj_ new_co_parent_co___ForContext__Compiler(obj_ this_, obj_ local, obj_ parent);
	extern obj_ new_co_collection_co_body_co_comment_co___ForStatement__Compiler(obj_ this_, obj_ local, obj_ collection, obj_ body, obj_ comment);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Bad name.")
	DefineString_(1, "in")
	DefineString_(2, "Missing \"in\".")
	UsingMethod_(_nt__eq_) UsingMethod_(block) UsingMethod_(context) UsingMethod_(context_co_) UsingMethod_(cur_context) UsingMethod_(error_co_) UsingMethod_(get_comment_co_) UsingMethod_(next) UsingMethod_(parse_block_co_) UsingMethod_(parse_expression_co_) UsingMethod_(pop_context_co_) UsingMethod_(push_context_co_)
	UsingClass_(CompiledField__Compiler)
	UsingClass_(ForContext__Compiler)
	UsingClass_(ForStatement__Compiler)
	UsingClass_(TrylonCodeParser__Compiler)

		{
		obj_ body, collection, comment, in_token, is_name, local, name;
		/*  Get the name of the local. */
		t0_ = Call_(next, words);
		name = t0_;
		is_name = name;
		t0_ = Not_(name);
		if (t0_)
			{
			t0_ = Call_(error_co_, parser, Str_(0));
			}
		t0_ = new_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), name);
		local = t0_;
		
		/*  "in". */
		t0_ = Call_(next, words);
		in_token = t0_;
		t0_ = Call_(_nt__eq_, in_token, Str_(1));
		if (t0_)
			{
			t0_ = Call_(error_co_, parser, Str_(2));
			}
		
		/*  Collection, comment. */
		t0_ = Call_(parse_expression_co_, parser, words);
		collection = t0_;
		t0_ = Call_(get_comment_co_, parser, words);
		comment = t0_;
		
		/*  Body. */
		t0_ = Call_(cur_context, parser);
		t1_ = new_co_parent_co___ForContext__Compiler(Proto_(ForContext__Compiler), local, t0_);
		t2_ = Call_(context_co_, Proto_(TrylonCodeParser__Compiler), t1_);
		t0_ = Call_(context, Proto_(TrylonCodeParser__Compiler));
		t1_ = Call_(push_context_co_, parser, t0_);
		t0_ = Call_(block, line);
		t1_ = Call_(parse_block_co_, parser, t0_);
		body = t1_;
		t0_ = Call_(context, Proto_(TrylonCodeParser__Compiler));
		t1_ = Call_(pop_context_co_, parser, t0_);
		
		t0_ = new_co_collection_co_body_co_comment_co___ForStatement__Compiler(Proto_(ForStatement__Compiler), local, collection, body, comment);
		return t0_;
		}
	return nil;
}


