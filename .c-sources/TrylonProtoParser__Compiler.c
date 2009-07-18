#include "Trylon_.h"

UsingSym_(TrylonProtoParser)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(TrylonProtoParser__Compiler)
struct ClassInfo TrylonProtoParser__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 180, 5, Proto_(TrylonProtoParser__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(TrylonProtoParser), nil, nil };
struct object TrylonProtoParser__Compiler = 
	{ &TrylonProtoParser__Compiler__classInfo_, {nil, nil, nil, nil, nil} };


#define lines__fld_	(0)
#define proto__fld_	(1)
#define context__fld_	(2)
#define line__fld_	(3)
#define words__fld_	(4)


obj_ create_co_into_co_context_co___TrylonProtoParser__Compiler(obj_ this_, obj_ lines, obj_ proto, obj_ context)
{
	obj_ t0_;
	UsingMethod_(context_co_) UsingMethod_(lines_co_) UsingMethod_(proto_co_)

		{
		t0_ = Call_(lines_co_, this_, lines);
		t0_ = Call_(proto_co_, this_, proto);
		t0_ = Call_(context_co_, this_, context);
		}
	return nil;
}


obj_ indent__TrylonProtoParser__Compiler(obj_ this_)
{
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(indent)
	UsingClass_(Main)

		{
		t0_ = status_reporter__Main(Proto_(Main));
		if (t0_)
			{
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(indent, t0_);
			}
		}
	return nil;
}


obj_ is_name_co___TrylonProtoParser__Compiler(obj_ this_, obj_ name)
{
	extern obj_ is_name_co___TrylonExpressionParser__Compiler(obj_ this_, obj_ word);
	obj_ t0_;
	UsingClass_(TrylonExpressionParser__Compiler)

		{
		t0_ = is_name_co___TrylonExpressionParser__Compiler(Proto_(TrylonExpressionParser__Compiler), name);
		return t0_;
		}
	return nil;
}


obj_ new_co_into_co_context_co___TrylonProtoParser__Compiler(obj_ this_, obj_ lines, obj_ proto, obj_ context)
{
	UsingClass_(TrylonProtoParser__Compiler)
	obj_ obj = AllocObj_(TrylonProtoParser__Compiler);
	create_co_into_co_context_co___TrylonProtoParser__Compiler(obj, lines, proto, context);
	return obj;
}


obj_ parse__TrylonProtoParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(lines) UsingMethod_(parse_block_co_)

		{
		t0_ = Call_(lines, this_);
		t1_ = Call_(parse_block_co_, this_, t0_);
		}
	return nil;
}


obj_ parse_arg_type__TrylonProtoParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "(")
	DefineString_(1, ")")
	DefineString_(2, "Missing \")\".")
	UsingMethod_(_nt__eq_) UsingMethod_(_eq__eq_) UsingMethod_(is_done) UsingMethod_(next) UsingMethod_(parse_error_co_) UsingMethod_(parse_type_spec) UsingMethod_(peek) UsingMethod_(words)

		{
		obj_ arg_type;
		arg_type = nil;
		t0_ = Call_(words, this_);
		t1_ = Call_(is_done, t0_);
		t2_ = Not_(t1_);
		if (t2_) {
			t3_ = Call_(words, this_);
			t4_ = Call_(peek, t3_);
			t5_ = Call_(_eq__eq_, t4_, Str_(0));
			t2_ = t5_;
			}
		if (t2_)
			{
			/*  Type is specified. */
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_type_spec, this_);
			arg_type = t0_;
			t0_ = Call_(words, this_);
			t1_ = Call_(peek, t0_);
			t2_ = Call_(_nt__eq_, t1_, Str_(1));
			if (t2_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(2));
				}
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			}
		return arg_type;
		}
	return nil;
}


obj_ parse_block_co___TrylonProtoParser__Compiler(obj_ this_, obj_ lines)
{
	obj_ t0_;
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(parse_line_co_)

		{
		if (lines)
			{
			ForStart_(0, lines, line)
				{
				t0_ = Call_(parse_line_co_, this_, line);
				}
			ForEnd_(0)
			}
		}
	return nil;
}


obj_ parse_error_co___TrylonProtoParser__Compiler(obj_ this_, obj_ message)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(parse_error_co_token_co_) UsingMethod_(peek) UsingMethod_(words)

		{
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		t2_ = Call_(parse_error_co_token_co_, this_, message, t1_);
		}
	return nil;
}


obj_ parse_error_co_token_co___TrylonProtoParser__Compiler(obj_ this_, obj_ message, obj_ token)
{
	extern obj_ new_co_token_co___ParseException__Compiler(obj_ this_, obj_ error_message, obj_ token);
	obj_ t0_;
	UsingClass_(ParseException__Compiler)

		{
		t0_ = new_co_token_co___ParseException__Compiler(Proto_(ParseException__Compiler), message, token);
		Throw_(t0_);
		}
	return nil;
}


obj_ parse_extension__TrylonProtoParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Parsing ")
	DefineString_(1, "...")
	UsingMethod_(_pl_) UsingMethod_(block) UsingMethod_(indent) UsingMethod_(line) UsingMethod_(name) UsingMethod_(parse_proto_contents_co_into_co_) UsingMethod_(parse_proto_spec) UsingMethod_(report_co_) UsingMethod_(require_eol) UsingMethod_(unindent) UsingMethod_(words)

		{
		obj_ extended_proto;
		/*  The prototype to extend. */
		t0_ = Call_(parse_proto_spec, this_);
		extended_proto = t0_;
		t0_ = Call_(words, this_);
		t1_ = Call_(require_eol, t0_);
		
		t0_ = Call_(name, extended_proto);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(report_co_, this_, t2_);
		t0_ = Call_(indent, this_);
		
		t0_ = Call_(line, this_);
		t1_ = Call_(block, t0_);
		t2_ = Call_(parse_proto_contents_co_into_co_, this_, t1_, extended_proto);
		
		t0_ = Call_(unindent, this_);
		}
	return nil;
}


obj_ parse_function__TrylonProtoParser__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(parse_function_co_is_primitive_co_)

		{
		t0_ = Call_(parse_function_co_is_primitive_co_, this_, nil, nil);
		return t0_;
		}
	return nil;
}


obj_ parse_function_co___TrylonProtoParser__Compiler(obj_ this_, obj_ initial_name)
{
	obj_ t0_;
	UsingMethod_(parse_function_co_is_primitive_co_)

		{
		t0_ = Call_(parse_function_co_is_primitive_co_, this_, initial_name, nil);
		return t0_;
		}
	return nil;
}


obj_ parse_function_co_is_primitive_co___TrylonProtoParser__Compiler(obj_ this_, obj_ initial_name, obj_ is_primitive)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	UsingSym_(__gt_)
	extern obj_ new_co_parent_co___MethodContext__Compiler(obj_ this_, obj_ arguments, obj_ parent);
	extern obj_ new_co_in_co___TrylonCodeParser__Compiler(obj_ this_, obj_ lines, obj_ context);
	extern obj_ new_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ return_type, obj_ on_proto, obj_ body, obj_ is_primitive);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, "~")
	DefineString_(1, "Missing argument name in ")
	DefineString_(2, ".")
	DefineString_(3, "Missing argument name in ")
	DefineString_(4, ".")
	DefineString_(5, ":")
	DefineString_(6, "Missing argument name.")
	DefineString_(7, ":")
	DefineString_(8, "Parsing ")
	DefineString_(9, "...")
	UsingMethod_(_nt__eq_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(block) UsingMethod_(context) UsingMethod_(ends_with_co_) UsingMethod_(flattened_block_text) UsingMethod_(is_done) UsingMethod_(is_name_co_) UsingMethod_(length) UsingMethod_(line) UsingMethod_(method_context_co_) UsingMethod_(next) UsingMethod_(parse) UsingMethod_(parse_arg_type) UsingMethod_(parse_error_co_) UsingMethod_(parse_error_co_token_co_) UsingMethod_(parse_type_spec) UsingMethod_(peek) UsingMethod_(report_co_) UsingMethod_(require_eol) UsingMethod_(substr_co_length_co_) UsingMethod_(words)
	UsingClass_(CompiledField__Compiler)
	UsingClass_(CompiledFunction__Compiler)
	UsingClass_(List__Standard)
	UsingClass_(MethodContext__Compiler)
	UsingClass_(TrylonCodeParser__Compiler)

		{
		obj_ arguments, body, method_context, name, new_function, return_type;
		/*  Get the name. */
		/*  We're allowing any name; we want to allow unops and binops and string  */
		/*  literals as well as names.  Ideally we should reject other names, but  */
		/*  currently we don't bother. */
		name = initial_name;
		t0_ = Not_(name);
		if (t0_)
			{
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			name = t1_;
			}
		
		/*  Get the arguments. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		arguments = t0_;
		t0_ = Call_(is_name_co_, this_, name);
		t1_ = Not_(t0_);
		if (t1_) {
			t2_ = Call_(_nt__eq_, name, Str_(0));
			t1_ = t2_;
			}
		if (t1_)
			{
			obj_ arg_name, arg_type;
			/*  Get the first argument. */
			t0_ = Call_(words, this_);
			t1_ = Call_(is_done, t0_);
			if (t1_)
				{
				t0_ = Call_(_pl_, Str_(1), name);
				t1_ = Call_(_pl_, t0_, Str_(2));
				t2_ = Call_(parse_error_co_, this_, t1_);
				}
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			arg_name = t1_;
			t0_ = Call_(is_name_co_, this_, arg_name);
			t1_ = Not_(t0_);
			if (t1_)
				{
				t0_ = Call_(_pl_, Str_(3), name);
				t1_ = Call_(_pl_, t0_, Str_(4));
				t2_ = Call_(parse_error_co_token_co_, this_, t1_, arg_name);
				}
			t0_ = Call_(parse_arg_type, this_);
			arg_type = t0_;
			t0_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), arg_name, arg_type);
			t1_ = Call_(append_co_, arguments, t0_);
			
			/*  Get additional arguments. */
			while (1) {
				ContinuePoint_(0)
				{
				obj_ is_keyword, token;
				/*  Are we looking at an argument? */
				t0_ = Call_(words, this_);
				t1_ = Call_(is_done, t0_);
				if (t1_)
					{
					Break_(0)
					}
				t0_ = Call_(words, this_);
				t1_ = Call_(peek, t0_);
				token = t1_;
				is_keyword = nil;
				t0_ = Call_(ends_with_co_, token, Str_(5));
				if (t0_)
					{
					is_keyword = true_;
					}
				else
					{
					t0_ = Call_(is_name_co_, this_, token);
					t1_ = Not_(t0_);
					if (t1_)
						{
						Break_(0)
						}
					}
				
				/*  Get the name. */
				if (is_keyword)
					{
					/*  Standard argument declaration ("keyword: name"). */
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					t2_ = Call_(_pl_, name, t1_);
					name = t2_;
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					arg_name = t1_;
					t0_ = Call_(is_name_co_, this_, arg_name);
					t1_ = Not_(t0_);
					if (t1_)
						{
						t0_ = Call_(parse_error_co_token_co_, this_, Str_(6), arg_name);
						}
					}
				else
					{
					/*  Special shortcut: just an argument name.  Equivalent to "name: name". */
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					t2_ = Call_(_pl_, t1_, Str_(7));
					t3_ = Call_(_pl_, name, t2_);
					name = t3_;
					t0_ = Call_(words, this_);
					t1_ = Call_(next, t0_);
					arg_name = t1_;
					t0_ = Call_(length, arg_name);
					t1_ = Call_(_, t0_, SmallInt_(1));
					t2_ = Call_(substr_co_length_co_, arg_name, SmallInt_(0), t1_);
					arg_name = t2_;
					}
				
				/*  Get the type and add the argument. */
				t0_ = Call_(parse_arg_type, this_);
				arg_type = t0_;
				t0_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), arg_name, arg_type);
				t1_ = Call_(append_co_, arguments, t0_);
				}
			}
			}
		
		/*  Get the return type. */
		return_type = nil;
		t0_ = Call_(words, this_);
		t1_ = Call_(is_done, t0_);
		t2_ = Not_(t1_);
		if (t2_) {
			t3_ = Call_(words, this_);
			t4_ = Call_(peek, t3_);
			t5_ = Call_(_eq__eq_, t4_, Sym_(__gt_));
			t2_ = t5_;
			}
		if (t2_)
			{
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_type_spec, this_);
			return_type = t0_;
			}
		
		t0_ = Call_(words, this_);
		t1_ = Call_(require_eol, t0_);
		
		t0_ = Call_(_pl_, Str_(8), name);
		t1_ = Call_(_pl_, t0_, Str_(9));
		t2_ = Call_(report_co_, this_, t1_);
		
		/*  Parse the body. */
		body = nil;
		method_context = nil;
		if (is_primitive)
			{
			t0_ = Call_(line, this_);
			t1_ = Call_(flattened_block_text, t0_);
			body = t1_;
			}
		else
			{
			t0_ = Call_(line, this_);
			t1_ = Call_(block, t0_);
			if (t1_)
				{
				obj_ parser;
				t0_ = Call_(context, this_);
				t1_ = new_co_parent_co___MethodContext__Compiler(Proto_(MethodContext__Compiler), arguments, t0_);
				method_context = t1_;
				t0_ = Call_(line, this_);
				t1_ = Call_(block, t0_);
				t2_ = new_co_in_co___TrylonCodeParser__Compiler(Proto_(TrylonCodeParser__Compiler), t1_, method_context);
				parser = t2_;
				t0_ = Call_(parse, parser);
				body = t0_;
				}
			else
				{
				body = nil;
				}
			}
		
		/*  Build the function and return it. */
		t0_ = Call_(context, this_);
		t1_ = new_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(Proto_(CompiledFunction__Compiler), name, arguments, return_type, t0_, body, is_primitive);
		new_function = t1_;
		if (method_context)
			{
			t0_ = Call_(method_context_co_, new_function, method_context);
			}
		return new_function;
		}
	return nil;
}


obj_ parse_iff__TrylonProtoParser__Compiler(obj_ this_)
{
	extern obj_ build_settings__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "!")
	DefineString_(1, "\"iff\" statement is missing its word.")
	UsingMethod_(_eq__eq_) UsingMethod_(block) UsingMethod_(has_symbol_co_) UsingMethod_(is_empty) UsingMethod_(line) UsingMethod_(next) UsingMethod_(parse_block_co_) UsingMethod_(parse_error_co_) UsingMethod_(peek) UsingMethod_(require_eol) UsingMethod_(words)
	UsingClass_(Main)

		{
		obj_ inverted, name, test_succeeded;
		t0_ = Call_(words, this_);
		t1_ = Call_(next, t0_);
		 	/*  Get past the "iff". */
		inverted = nil;
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		t2_ = Call_(_eq__eq_, t1_, Str_(0));
		if (t2_)
			{
			inverted = true_;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			}
		t0_ = Call_(words, this_);
		t1_ = Call_(is_empty, t0_);
		if (t1_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(1));
			}
		t0_ = Call_(words, this_);
		t1_ = Call_(next, t0_);
		name = t1_;
		t0_ = Call_(words, this_);
		t1_ = Call_(require_eol, t0_);
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(has_symbol_co_, t0_, name);
		test_succeeded = t1_;
		if (inverted)
			{
			t0_ = Not_(test_succeeded);
			test_succeeded = t0_;
			}
		if (test_succeeded)
			{
			t0_ = Call_(line, this_);
			t1_ = Call_(block, t0_);
			t2_ = Call_(parse_block_co_, this_, t1_);
			}
		}
	return nil;
}


obj_ parse_line_co___TrylonProtoParser__Compiler(obj_ this_, obj_ line)
{
	extern obj_ new_co___CompiledField__Compiler(obj_ this_, obj_ name);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co_line_co_context_co___TrylonExpressionParser__Compiler(obj_ this_, obj_ words, obj_ line, obj_ context);
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "proto")
	DefineString_(1, "class")
	DefineString_(2, "fn")
	DefineString_(3, "function")
	DefineString_(4, "class-fn")
	DefineString_(5, "field")
	DefineString_(6, "fields")
	DefineString_(7, "superclass")
	DefineString_(8, "extend")
	DefineString_(9, "iff")
	DefineString_(10, "trylon")
	DefineString_(11, "trylid")
	DefineString_(12, "c-preamble")
	DefineString_(13, "primitive-fn")
	DefineString_(14, "c-fn")
	DefineString_(15, "#")
	DefineString_(16, "#")
	DefineString_(17, "c-preamble not allowed when not targeting C.")
	DefineString_(18, "#")
	DefineString_(19, "=")
	UsingMethod_(_eq__eq_) UsingMethod_(add_field_co_) UsingMethod_(add_function_co_) UsingMethod_(add_shared_field_co_) UsingMethod_(c_preamble_co_) UsingMethod_(context) UsingMethod_(current_item) UsingMethod_(flattened_block_text) UsingMethod_(go_forward) UsingMethod_(initial_value_co_) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(is_name_co_) UsingMethod_(iterator) UsingMethod_(line_co_) UsingMethod_(make_subclass_of_co_) UsingMethod_(next) UsingMethod_(parse_error_co_) UsingMethod_(parse_expression) UsingMethod_(parse_extension) UsingMethod_(parse_function) UsingMethod_(parse_function_co_) UsingMethod_(parse_function_co_is_primitive_co_) UsingMethod_(parse_iff) UsingMethod_(parse_member_proto) UsingMethod_(parse_type_spec) UsingMethod_(peek) UsingMethod_(proto) UsingMethod_(require_eol) UsingMethod_(source_name_co_) UsingMethod_(starts_with_co_) UsingMethod_(targeting_c) UsingMethod_(words) UsingMethod_(words_co_)
	UsingClass_(CompiledField__Compiler)
	UsingClass_(Main)
	UsingClass_(TrylonExpressionParser__Compiler)

		{
		t0_ = Call_(line_co_, this_, line);
		t0_ = Call_(words, line);
		t1_ = Call_(words_co_, this_, t0_);
		t0_ = Call_(words, this_);
		t1_ = Call_(is_done, t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(words, this_);
		t1_ = Call_(peek, t0_);
		Switch_(t1_)
		if (SwitchMatches_(Str_(0)) || SwitchMatches_(Str_(1)))
			{
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_member_proto, this_);
			}
		else if (SwitchMatches_(Str_(2)) || SwitchMatches_(Str_(3)) || SwitchMatches_(Str_(4)))
			{
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(proto, this_);
			t1_ = Call_(parse_function, this_);
			t2_ = Call_(add_function_co_, t0_, t1_);
			}
		else if (SwitchMatches_(Str_(5)) || SwitchMatches_(Str_(6)))
			{
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(words, this_);
			ForStart_(0, t0_, field_name)
				{
				obj_ field;
				t0_ = Call_(starts_with_co_, field_name, Str_(16));
				if (t0_)
					{
					Break_(0)
					}
				t0_ = new_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), field_name);
				field = t0_;
				t0_ = Call_(proto, this_);
				t1_ = Call_(add_field_co_, t0_, field);
				}
			ForEnd_(0)
			}
		else if (SwitchMatches_(Str_(7)))
			{
			obj_ superclass;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_type_spec, this_);
			superclass = t0_;
			t0_ = Call_(proto, this_);
			t1_ = Call_(make_subclass_of_co_, t0_, superclass);
			}
		else if (SwitchMatches_(Str_(8)))
			{
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(parse_extension, this_);
			}
		else if (SwitchMatches_(Str_(9)))
			{
			t0_ = Call_(parse_iff, this_);
			}
		else if (SwitchMatches_(Str_(10)) || SwitchMatches_(Str_(11)))
			{
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			/*  Likely followed by the name; grab that if possible. */
			t0_ = Call_(words, this_);
			t1_ = Call_(is_empty, t0_);
			t2_ = Not_(t1_);
			if (t2_) {
				t3_ = Call_(words, this_);
				t4_ = Call_(peek, t3_);
				t5_ = Call_(is_name_co_, this_, t4_);
				t2_ = t5_;
				}
			if (t2_)
				{
				t0_ = Call_(proto, this_);
				t1_ = Call_(words, this_);
				t2_ = Call_(next, t1_);
				t3_ = Call_(source_name_co_, t0_, t2_);
				}
			/*  Ignore the rest of the line. */
			}
		else if (SwitchMatches_(Str_(12)))
			{
			t0_ = build_settings__Main(Proto_(Main));
			t1_ = Call_(targeting_c, t0_);
			t2_ = Not_(t1_);
			if (t2_)
				{
				t0_ = Call_(parse_error_co_, this_, Str_(17));
				}
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(words, this_);
			t1_ = Call_(require_eol, t0_);
			t0_ = Call_(proto, this_);
			t1_ = Call_(flattened_block_text, line);
			t2_ = Call_(c_preamble_co_, t0_, t1_);
			}
		else if (SwitchMatches_(Str_(13)) || SwitchMatches_(Str_(14)))
			{
			obj_ function;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			t2_ = Call_(parse_function_co_is_primitive_co_, this_, t1_, true_);
			function = t2_;
			t0_ = Call_(proto, this_);
			t1_ = Call_(add_function_co_, t0_, function);
			}
		else if (SwitchMatches_(Str_(15)))
			{
			/*  A comment, just skip it. */
			}
		else
			{
			obj_ name;
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			name = t1_;
			t0_ = Call_(starts_with_co_, name, Str_(18));
			if (t0_)
				{
				/*  A comment, skip it. */
				return nil;
				}
			t0_ = Call_(words, this_);
			t1_ = Call_(is_done, t0_);
			t2_ = Not_(t1_);
			if (t2_) {
				t3_ = Call_(words, this_);
				t4_ = Call_(peek, t3_);
				t5_ = Call_(_eq__eq_, t4_, Str_(19));
				t2_ = t5_;
				}
			if (t2_)
				{
				obj_ field, initial_value, parser;
				/*  Declaring a shared variable. */
				/*  Get the initial value. */
				t0_ = Call_(words, this_);
				t1_ = Call_(next, t0_);
				t0_ = Call_(words, this_);
				t1_ = Call_(context, this_);
				t2_ = new_co_line_co_context_co___TrylonExpressionParser__Compiler(Proto_(TrylonExpressionParser__Compiler), t0_, line, t1_);
				parser = t2_;
				t0_ = Call_(parse_expression, parser);
				initial_value = t0_;
				
				/*  Add it. */
				t0_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), name, nil);
				field = t0_;
				t0_ = Call_(initial_value_co_, field, initial_value);
				t0_ = Call_(proto, this_);
				t1_ = Call_(add_shared_field_co_, t0_, field);
				}
			else
				{
				/*  Declaring a function. */
				t0_ = Call_(proto, this_);
				t1_ = Call_(parse_function_co_, this_, name);
				t2_ = Call_(add_function_co_, t0_, t1_);
				}
			
			}
		EndSwitch_
		}
	return nil;
}


obj_ parse_member_proto__TrylonProtoParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Missing class name.")
	DefineString_(1, "\"")
	DefineString_(2, "\" is not a valid class name.")
	DefineString_(3, "Parsing ")
	DefineString_(4, "...")
	UsingMethod_(_pl_) UsingMethod_(add_proto_co_) UsingMethod_(block) UsingMethod_(context) UsingMethod_(indent) UsingMethod_(is_name_co_) UsingMethod_(line) UsingMethod_(next) UsingMethod_(parse_error_co_) UsingMethod_(parse_proto_contents_co_into_co_) UsingMethod_(report_co_) UsingMethod_(unindent) UsingMethod_(words)

		{
		obj_ member_proto, name;
		t0_ = Call_(words, this_);
		t1_ = Call_(next, t0_);
		name = t1_;
		t0_ = Not_(name);
		if (t0_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(0));
			}
		t0_ = Call_(is_name_co_, this_, name);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(_pl_, Str_(1), name);
			t1_ = Call_(_pl_, t0_, Str_(2));
			t2_ = Call_(parse_error_co_, this_, t1_);
			}
		
		t0_ = Call_(_pl_, Str_(3), name);
		t1_ = Call_(_pl_, t0_, Str_(4));
		t2_ = Call_(report_co_, this_, t1_);
		t0_ = Call_(indent, this_);
		
		/*  Create (or get) the proto. */
		t0_ = Call_(context, this_);
		t1_ = Call_(add_proto_co_, t0_, name);
		member_proto = t1_;
		
		/*  Read the contents (if any). */
		t0_ = Call_(line, this_);
		t1_ = Call_(block, t0_);
		t2_ = Call_(parse_proto_contents_co_into_co_, this_, t1_, member_proto);
		
		t0_ = Call_(unindent, this_);
		}
	return nil;
}


obj_ parse_proto_contents_co_into_co___TrylonProtoParser__Compiler(obj_ this_, obj_ block, obj_ proto)
{
	extern obj_ new_co_into_co_context_co___TrylonProtoParser__Compiler(obj_ this_, obj_ lines, obj_ proto, obj_ context);
	obj_ t0_;
	UsingMethod_(parse)
	UsingClass_(TrylonProtoParser__Compiler)

		{
		obj_ parser;
		t0_ = new_co_into_co_context_co___TrylonProtoParser__Compiler(Proto_(TrylonProtoParser__Compiler), block, proto, proto);
		parser = t0_;
		t0_ = Call_(parse, parser);
		}
	return nil;
}


obj_ parse_proto_spec__TrylonProtoParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "Unknown prototype.")
	DefineString_(1, "Unknown prototype.")
	DefineString_(2, "Missing the type in a type specifier.")
	UsingMethod_(context) UsingMethod_(get_subproto_co_) UsingMethod_(is_a_co_) UsingMethod_(is_empty) UsingMethod_(is_name_co_) UsingMethod_(lookup_function_co_) UsingMethod_(next) UsingMethod_(parse_error_co_) UsingMethod_(parse_error_co_token_co_) UsingMethod_(peek) UsingMethod_(proto) UsingMethod_(words)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ cur_context, type;
		type = nil;
		t0_ = Call_(context, this_);
		cur_context = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(words, this_);
			t1_ = Call_(is_empty, t0_);
			t2_ = Not_(t1_);
			if (t2_) {
				t3_ = Call_(words, this_);
				t4_ = Call_(peek, t3_);
				t5_ = Call_(is_name_co_, this_, t4_);
				t2_ = t5_;
				}
			if (!(t2_))
				Break_(0)
			{
			obj_ name;
			/*  Find the prototype. */
			t0_ = Call_(words, this_);
			t1_ = Call_(next, t0_);
			name = t1_;
			t0_ = Not_(type);
			if (t0_)
				{
				obj_ type_function;
				/*  The first name can be anything in scope. */
				t0_ = Call_(lookup_function_co_, cur_context, name);
				type_function = t0_;
				t0_ = Not_(type_function);
				if ((t0_) == nil) {
					t1_ = Call_(is_a_co_, type_function, Proto_(ProtoFunction__Compiler));
					t2_ = Not_(t1_);
					t0_ = t2_;
					}
				if (t0_)
					{
					t0_ = Call_(parse_error_co_token_co_, this_, Str_(0), name);
					}
				t0_ = Call_(proto, type_function);
				type = t0_;
				}
			else
				{
				/*  Other names must be subprotos of the proto specified so far. */
				t0_ = Call_(get_subproto_co_, cur_context, name);
				type = t0_;
				t0_ = Not_(type);
				if (t0_)
					{
					t0_ = Call_(parse_error_co_token_co_, this_, Str_(1), name);
					}
				}
			cur_context = type;
			}
			}
		
		/*  Make sure we got a proto. */
		t0_ = Not_(type);
		if (t0_)
			{
			t0_ = Call_(parse_error_co_, this_, Str_(2));
			}
		
		return type;
		}
	return nil;
}


obj_ parse_type_spec__TrylonProtoParser__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "A type specifier was given, but is not a prototype.")
	UsingMethod_(is_a_co_) UsingMethod_(name) UsingMethod_(parse_error_co_token_co_) UsingMethod_(parse_proto_spec)
	UsingClass_(CompiledProto__Compiler)

		{
		obj_ okay, type;
		t0_ = Call_(parse_proto_spec, this_);
		type = t0_;
		
		/*  Make sure we got a proto. */
		t0_ = Call_(is_a_co_, type, Proto_(CompiledProto__Compiler));
		okay = t0_;
		t0_ = Not_(okay);
		if (t0_)
			{
			t0_ = Call_(name, type);
			t1_ = Call_(parse_error_co_token_co_, this_, Str_(0), t0_);
			}
		
		return type;
		}
	return nil;
}


obj_ report_co___TrylonProtoParser__Compiler(obj_ this_, obj_ message)
{

		{
		}
	return nil;
}


obj_ unindent__TrylonProtoParser__Compiler(obj_ this_)
{
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(unindent)
	UsingClass_(Main)

		{
		t0_ = status_reporter__Main(Proto_(Main));
		if (t0_)
			{
			t0_ = status_reporter__Main(Proto_(Main));
			t1_ = Call_(unindent, t0_);
			}
		}
	return nil;
}


