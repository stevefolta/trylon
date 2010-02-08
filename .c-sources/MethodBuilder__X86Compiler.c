#include "Trylon_.h"

UsingClass_(Buffer__MethodBuilder__X86Compiler) UsingClass_(Label__MethodBuilder__X86Compiler) UsingClass_(LabelRef__MethodBuilder__X86Compiler) UsingClass_(Loop__MethodBuilder__X86Compiler) 
static obj_ tu0_[];
UsingSym_(MethodBuilder)UsingClass_(X86Compiler)
UsingClass_(Object__Standard)
UsingClass_(MethodBuilder__X86Compiler)
struct ClassInfo MethodBuilder__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 93, 14, Proto_(MethodBuilder__X86Compiler), Proto_(X86Compiler), Proto_(Object__Standard), nil, Sym_(MethodBuilder), nil, ((obj_) tu0_) };
struct object MethodBuilder__X86Compiler = 
	{ &MethodBuilder__X86Compiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil} };

	UsingInt_(4)
	UsingInt_(512)
	UsingInt_(32)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(4), Proto_(Buffer__MethodBuilder__X86Compiler), Proto_(Label__MethodBuilder__X86Compiler), Proto_(LabelRef__MethodBuilder__X86Compiler), Proto_(Loop__MethodBuilder__X86Compiler) };

#define function__fld_	(0)
#define code_tree__fld_	(1)
#define refs__fld_	(2)
#define out_ptr__fld_	(3)
#define buffer_limit__fld_	(4)
#define buffers__fld_	(5)
#define offset__fld_	(6)
#define dispatch_fn__fld_	(7)
#define postamble_label__fld_	(8)
#define argument_indices__fld_	(9)
#define cur_num_locals__fld_	(10)
#define num_locals__fld_	(11)
#define loop_stack__fld_	(12)
#define cur_caught_exception__fld_	(13)

DeclareSharedField_(buffer_size, MethodBuilder__X86Compiler, SmallInt_(512))
DeclareSharedField_(buffer_slop_space, MethodBuilder__X86Compiler, SmallInt_(32))
DeclareSharedField_(literals, MethodBuilder__X86Compiler, nil)

obj_ Buffer__MethodBuilder__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(Buffer__MethodBuilder__X86Compiler)
	return Proto_(Buffer__MethodBuilder__X86Compiler);
}


obj_ Label__MethodBuilder__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(Label__MethodBuilder__X86Compiler)
	return Proto_(Label__MethodBuilder__X86Compiler);
}


obj_ LabelRef__MethodBuilder__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(LabelRef__MethodBuilder__X86Compiler)
	return Proto_(LabelRef__MethodBuilder__X86Compiler);
}


obj_ Loop__MethodBuilder__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(Loop__MethodBuilder__X86Compiler)
	return Proto_(Loop__MethodBuilder__X86Compiler);
}


obj_ alloc_obj_from_class_info_addr__MethodBuilder__X86Compiler(obj_ this_)
{
return BuildBytePtr_(&AllocObjFromClassInfo_);
return nil;
}


obj_ allocate_stack_struct_co___MethodBuilder__X86Compiler(obj_ this_, obj_ size)
{
	extern obj_ new_co___LocalResult__X86Compiler(obj_ this_, obj_ index);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(3)
	UsingInt_(4)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_dv_) UsingMethod_(_gt_) UsingMethod_(cur_num_locals) UsingMethod_(cur_num_locals_co_) UsingMethod_(num_locals) UsingMethod_(num_locals_co_)
	UsingClass_(LocalResult__X86Compiler)

		{
		obj_ num_slots;
		t0_ = Call_(_pl_, size, SmallInt_(3));
		t1_ = Call_(_dv_, t0_, SmallInt_(4));
		num_slots = t1_;
		t0_ = Call_(cur_num_locals, this_);
		t1_ = Call_(_pl_, t0_, num_slots);
		t2_ = Call_(cur_num_locals_co_, this_, t1_);
		t0_ = Call_(cur_num_locals, this_);
		t1_ = Call_(num_locals, this_);
		t2_ = Call_(_gt_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(cur_num_locals, this_);
			t1_ = Call_(num_locals_co_, this_, t0_);
			}
		
		/*  We'll return it as a local.  Since the stack grows downward, we want to use */
		/*  the index of the *last* slot it occupies. */
		t0_ = Call_(cur_num_locals, this_);
		t1_ = Call_(_, t0_, SmallInt_(1));
		t2_ = new_co___LocalResult__X86Compiler(Proto_(LocalResult__X86Compiler), t1_);
		return t2_;
		}
	return nil;
}


obj_ assemble_buffers__MethodBuilder__X86Compiler(obj_ this_)
{
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(buffer_size) UsingMethod_(buffer_size_co_) UsingMethod_(buffers) UsingMethod_(copy_from_co_length_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(last_item) UsingMethod_(out_ptr) UsingMethod_(ptr) UsingMethod_(used_size) UsingMethod_(used_size_co_)
	UsingClass_(BytePtr__Standard)

		{
		obj_ buffer, code, code_size, dest;
		/*  Complete the last buffer. */
		t0_ = Call_(buffers, this_);
		t1_ = Call_(last_item, t0_);
		buffer = t1_;
		t0_ = Call_(out_ptr, this_);
		t1_ = Call_(ptr, buffer);
		t2_ = Call_(_, t0_, t1_);
		t3_ = Call_(used_size_co_, buffer, t2_);
		
		/*  Assemble the buffers into the final code. */
		code_size = SmallInt_(0);
		t0_ = Call_(buffers, this_);
		ForStart_(0, t0_, buffer)
			{
			t0_ = Call_(used_size, buffer);
			t1_ = Call_(_pl_, code_size, t0_);
			code_size = t1_;
			}
		ForEnd_(0)
		t0_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), code_size);
		code = t0_;
		dest = code;
		t0_ = Call_(buffers, this_);
		ForStart_(1, t0_, buffer)
			{
			t0_ = Call_(used_size, buffer);
			t1_ = Call_(buffer_size_co_, this_, t0_);
			t0_ = Call_(ptr, buffer);
			t1_ = Call_(buffer_size, this_);
			t2_ = Call_(copy_from_co_length_co_, dest, t0_, t1_);
			t0_ = Call_(buffer_size, this_);
			t1_ = Call_(_pl_, dest, t0_);
			dest = t1_;
			}
		ForEnd_(1)
		
		return code;
		}
	return nil;
}


obj_ buffer_size__MethodBuilder__X86Compiler(obj_ this_)
{
	return SharedField_(buffer_size, MethodBuilder__X86Compiler);
}


obj_ buffer_size_co___MethodBuilder__X86Compiler(obj_ this_, obj_ value)
{
	SetSharedField_(buffer_size, MethodBuilder__X86Compiler, value);
	return value;
}


obj_ buffer_slop_space__MethodBuilder__X86Compiler(obj_ this_)
{
	return SharedField_(buffer_slop_space, MethodBuilder__X86Compiler);
}


obj_ buffer_slop_space_co___MethodBuilder__X86Compiler(obj_ this_, obj_ value)
{
	SetSharedField_(buffer_slop_space, MethodBuilder__X86Compiler, value);
	return value;
}


obj_ build_field_getter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ index)
{
	extern obj_ new__MethodBuilder__X86Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(emit_field_getter_co_)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		t0_ = new__MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler));
		t1_ = Call_(emit_field_getter_co_, t0_, index);
		return t1_;
		}
	return nil;
}


obj_ build_field_setter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ index)
{
	extern obj_ new__MethodBuilder__X86Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(emit_field_setter_co_)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		t0_ = new__MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler));
		t1_ = Call_(emit_field_setter_co_, t0_, index);
		return t1_;
		}
	return nil;
}


obj_ build_location_getter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ ptr)
{
	extern obj_ new__MethodBuilder__X86Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(emit_location_getter_co_)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		t0_ = new__MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler));
		t1_ = Call_(emit_location_getter_co_, t0_, ptr);
		return t1_;
		}
	return nil;
}


obj_ build_location_setter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ ptr)
{
	extern obj_ new__MethodBuilder__X86Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(emit_location_setter_co_)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		t0_ = new__MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler));
		t1_ = Call_(emit_location_setter_co_, t0_, ptr);
		return t1_;
		}
	return nil;
}


obj_ build_new_function_co___MethodBuilder__X86Compiler(obj_ this_, obj_ function)
{
	extern obj_ live_proto_for_co___ClassBuilder__X86Compiler(obj_ this_, obj_ class_context);
	extern obj_ new_co___ExistingClass__Compiler(obj_ this_, obj_ proto);
	extern obj_ new_co_parent_co___MethodContext__Compiler(obj_ this_, obj_ arguments, obj_ parent);
	extern obj_ new_co___Block__Compiler(obj_ this_, obj_ parent);
	extern obj_ new_co___CompiledField__Compiler(obj_ this_, obj_ name);
	extern obj_ new_co___LiteralExpression__X86Compiler(obj_ this_, obj_ value);
	extern obj_ message_co_to_co_with_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	extern obj_ new_co___LocalSetter__Compiler(obj_ this_, obj_ local);
	extern obj_ new_co_arguments_co___FunctionCall__Compiler(obj_ this_, obj_ function, obj_ arguments);
	extern obj_ with_co___List__Standard(obj_ this_, obj_ value);
	extern obj_ new_co___ExpressionStatement__Compiler(obj_ this_, obj_ expression);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___ArgumentFunction__Compiler(obj_ this_, obj_ arg);
	extern obj_ new_co_arguments_co___FunctionCall__Compiler(obj_ this_, obj_ function, obj_ arguments);
	extern obj_ new_co___LocalGetter__Compiler(obj_ this_, obj_ local);
	extern obj_ new_co_arguments_co___FunctionCall__Compiler(obj_ this_, obj_ function, obj_ arguments);
	extern obj_ message_co_to_co_with_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	extern obj_ new_co___ExpressionStatement__Compiler(obj_ this_, obj_ expression);
	extern obj_ new_co___ReturnStatement__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ return_type, obj_ on_proto, obj_ body, obj_ is_primitive);
	extern obj_ new_co_code_co___MethodBuilder__X86Compiler(obj_ this_, obj_ function, obj_ code_tree);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(3)
	DefineString_(0, "obj")
	DefineString_(1, "raw-new")
	DefineString_(2, "create")
	UsingMethod_(_pl_) UsingMethod_(add_local_co_) UsingMethod_(append_co_) UsingMethod_(arguments) UsingMethod_(creator) UsingMethod_(current_item) UsingMethod_(emit_method) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(substr_co_)
	UsingClass_(ArgumentFunction__Compiler)
	UsingClass_(Block__Compiler)
	UsingClass_(ClassBuilder__X86Compiler)
	UsingClass_(CompiledField__Compiler)
	UsingClass_(CompiledFunction__Compiler)
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(ExpressionStatement__Compiler)
	UsingClass_(FunctionCall__Compiler)
	UsingClass_(List__Standard)
	UsingClass_(LiteralExpression__X86Compiler)
	UsingClass_(LocalGetter__Compiler)
	UsingClass_(LocalSetter__Compiler)
	UsingClass_(MethodBuilder__X86Compiler)
	UsingClass_(MethodContext__Compiler)
	UsingClass_(ReturnStatement__Compiler)
	UsingClass_(Send__Compiler)
	UsingClass_(empty__Standard)

		{
		obj_ arg_exprs, args, block, class_, class_literal, compiled_function, create_name, local_get, local_getter, local_set, local_setter, method_context, name, obj_local, parent_context, send;
		t0_ = Call_(name, function);
		name = t0_;
		t0_ = Call_(creator, function);
		t1_ = Call_(arguments, t0_);
		args = t1_;
		t0_ = Call_(on_proto, function);
		parent_context = t0_;
		t0_ = live_proto_for_co___ClassBuilder__X86Compiler(Proto_(ClassBuilder__X86Compiler), parent_context);
		class_ = t0_;
		
		/*  Build a pseudo-Trylon function. */
		t0_ = new_co___ExistingClass__Compiler(Proto_(ExistingClass__Compiler), class_);
		parent_context = t0_;
		t0_ = new_co_parent_co___MethodContext__Compiler(Proto_(MethodContext__Compiler), args, parent_context);
		method_context = t0_;
		t0_ = new_co___Block__Compiler(Proto_(Block__Compiler), method_context);
		block = t0_;
		/*  "obj = class raw-new" */
		t0_ = new_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), Str_(0));
		obj_local = t0_;
		t0_ = Call_(add_local_co_, block, obj_local);
		t0_ = new_co___LiteralExpression__X86Compiler(Proto_(LiteralExpression__X86Compiler), class_);
		class_literal = t0_;
		t0_ = message_co_to_co_with_co___Send__Compiler(Proto_(Send__Compiler), Str_(1), class_literal, Proto_(empty__Standard));
		send = t0_;
		t0_ = new_co___LocalSetter__Compiler(Proto_(LocalSetter__Compiler), obj_local);
		local_setter = t0_;
		t0_ = with_co___List__Standard(Proto_(List__Standard), send);
		t1_ = new_co_arguments_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), local_setter, t0_);
		local_set = t1_;
		t0_ = new_co___ExpressionStatement__Compiler(Proto_(ExpressionStatement__Compiler), local_set);
		t1_ = Call_(append_co_, block, t0_);
		/*  "obj create: arg arg: arg" */
		t0_ = new__List__Standard(Proto_(List__Standard));
		arg_exprs = t0_;
		ForStart_(0, args, arg)
			{
			obj_ arg_get, arg_getter;
			t0_ = new_co___ArgumentFunction__Compiler(Proto_(ArgumentFunction__Compiler), arg);
			arg_getter = t0_;
			t0_ = new_co_arguments_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), arg_getter, Proto_(empty__Standard));
			arg_get = t0_;
			t0_ = Call_(append_co_, arg_exprs, arg_get);
			}
		ForEnd_(0)
		t0_ = new_co___LocalGetter__Compiler(Proto_(LocalGetter__Compiler), obj_local);
		local_getter = t0_;
		t0_ = new_co_arguments_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), local_getter, Proto_(empty__Standard));
		local_get = t0_;
		t0_ = Call_(substr_co_, name, SmallInt_(3));
		t1_ = Call_(_pl_, Str_(2), t0_);
		create_name = t1_;
		t0_ = message_co_to_co_with_co___Send__Compiler(Proto_(Send__Compiler), create_name, local_get, arg_exprs);
		send = t0_;
		t0_ = new_co___ExpressionStatement__Compiler(Proto_(ExpressionStatement__Compiler), send);
		t1_ = Call_(append_co_, block, t0_);
		/*  "return obj" */
		t0_ = new_co___ReturnStatement__Compiler(Proto_(ReturnStatement__Compiler), local_get);
		t1_ = Call_(append_co_, block, t0_);
		
		/*  Compile it. */
		/*  We need a CompiledFunction, really just for the arguments. */
		t0_ = new_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(Proto_(CompiledFunction__Compiler), name, args, nil, parent_context, block, nil);
		compiled_function = t0_;
		t0_ = new_co_code_co___MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler), compiled_function, block);
		t1_ = Call_(emit_method, t0_);
		return t1_;
		}
	return nil;
}


obj_ build_object_returner_co___MethodBuilder__X86Compiler(obj_ this_, obj_ object)
{
	extern obj_ new__MethodBuilder__X86Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(emit_object_returner_co_)
	UsingClass_(MethodBuilder__X86Compiler)

		{
		t0_ = new__MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler));
		t1_ = Call_(emit_object_returner_co_, t0_, object);
		return t1_;
		}
	return nil;
}


obj_ compile_argument_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func)
{
	extern obj_ new_co___ArgumentResult__X86Compiler(obj_ this_, obj_ index);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(argument_indices) UsingMethod_(at_co_) UsingMethod_(name)
	UsingClass_(ArgumentResult__X86Compiler)

		{
		t0_ = Call_(argument_indices, this_);
		t1_ = Call_(name, func);
		t2_ = Call_(at_co_, t0_, t1_);
		t3_ = new_co___ArgumentResult__X86Compiler(Proto_(ArgumentResult__X86Compiler), t2_);
		return t3_;
		}
	return nil;
}


obj_ compile_blank_line_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


obj_ compile_block_statement_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(compile_block_co_)

		{
		t0_ = Call_(block, stmt);
		t1_ = Call_(compile_block_co_, this_, t0_);
		return t1_;
		}
	return nil;
}


obj_ compile_block_co___MethodBuilder__X86Compiler(obj_ this_, obj_ block)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_info_co_) UsingMethod_(compile_co_) UsingMethod_(cur_num_locals) UsingMethod_(cur_num_locals_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(locals) UsingMethod_(new_local) UsingMethod_(statements) UsingMethod_(values)

		{
		obj_ exterior_num_locals;
		/*  Set up locals. */
		t0_ = Call_(cur_num_locals, this_);
		exterior_num_locals = t0_;
		t0_ = Call_(locals, block);
		if (t0_)
			{
			t0_ = Call_(locals, block);
			t1_ = Call_(values, t0_);
			ForStart_(0, t1_, local)
				{
				t0_ = Call_(new_local, this_);
				t1_ = Call_(compile_info_co_, local, t0_);
				}
			ForEnd_(0)
			}
		
		/*  Body. */
		t0_ = Call_(statements, block);
		ForStart_(1, t0_, stmt)
			{
			t0_ = Call_(compile_co_, stmt, this_);
			}
		ForEnd_(1)
		
		/*  Clean up locals. */
		t0_ = Call_(cur_num_locals_co_, this_, exterior_num_locals);
		}
	return nil;
}


obj_ compile_bool_literal_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func)
{
	extern obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(value)
	UsingClass_(LiteralResult__X86Compiler)

		{
		t0_ = Call_(value, func);
		if (t0_)
			{
			t0_ = new_co___LiteralResult__X86Compiler(Proto_(LiteralResult__X86Compiler), true_);
			return t0_;
			}
		t1_ = new_co___LiteralResult__X86Compiler(Proto_(LiteralResult__X86Compiler), nil);
		return t1_;
		}
	return nil;
}


obj_ compile_bool_literal_co___MethodBuilder__X86Compiler(obj_ this_, obj_ literal)
{
	extern obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(value)
	UsingClass_(LiteralResult__X86Compiler)

		{
		/*  Don't need to keep these on the list. */
		t0_ = Call_(value, literal);
		t1_ = new_co___LiteralResult__X86Compiler(Proto_(LiteralResult__X86Compiler), t0_);
		return t1_;
		}
	return nil;
}


obj_ compile_break_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(break_label) UsingMethod_(emit_jmp_co_) UsingMethod_(first_item) UsingMethod_(loop_stack)

		{
		t0_ = Call_(loop_stack, this_);
		t1_ = Call_(first_item, t0_);
		t2_ = Call_(break_label, t1_);
		t3_ = Call_(emit_jmp_co_, this_, t2_);
		}
	return nil;
}


obj_ compile_caught_exception_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "Internal compiler error: no cur-caught-exception.")
	UsingMethod_(cur_caught_exception)
	UsingClass_(Standard)

		{
		t0_ = Call_(cur_caught_exception, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = error_co___Standard(Proto_(Standard), Str_(0));
			}
		t0_ = Call_(cur_caught_exception, this_);
		return t0_;
		}
	return nil;
}


obj_ compile_char_literal_co___MethodBuilder__X86Compiler(obj_ this_, obj_ literal)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_literal_co_) UsingMethod_(value)

		{
		t0_ = Call_(value, literal);
		t1_ = Call_(compile_literal_co_, this_, t0_);
		return t1_;
		}
	return nil;
}


obj_ compile_comment_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


obj_ compile_continue_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(continue_label) UsingMethod_(emit_jmp_co_) UsingMethod_(first_item) UsingMethod_(loop_stack)

		{
		t0_ = Call_(loop_stack, this_);
		t1_ = Call_(first_item, t0_);
		t2_ = Call_(continue_label, t1_);
		t3_ = Call_(emit_jmp_co_, this_, t2_);
		}
	return nil;
}


obj_ compile_dict_literal_co___MethodBuilder__X86Compiler(obj_ this_, obj_ literal)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(at_co_put_co_) UsingMethod_(compile_literal_co_) UsingMethod_(compile_co_) UsingMethod_(current_item) UsingMethod_(dict) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(pairs) UsingMethod_(value)
	UsingClass_(Dictionary__Standard)

		{
		obj_ dict;
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		dict = t0_;
		t0_ = Call_(dict, literal);
		t1_ = Call_(pairs, t0_);
		ForStart_(0, t1_, pair)
			{
			obj_ value_result;
			/*  We know the result will be a LiteralResult. */
			t0_ = Call_(value, pair);
			t1_ = Call_(compile_co_, t0_, this_);
			value_result = t1_;
			t0_ = Call_(name, pair);
			t1_ = Call_(value, value_result);
			t2_ = Call_(at_co_put_co_, dict, t0_, t1_);
			}
		ForEnd_(0)
		t0_ = Call_(compile_literal_co_, this_, dict);
		return t0_;
		}
	return nil;
}


obj_ compile_expression_statement_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_co_) UsingMethod_(cur_num_locals) UsingMethod_(cur_num_locals_co_) UsingMethod_(expression)

		{
		obj_ exterior_num_locals, result;
		t0_ = Call_(cur_num_locals, this_);
		exterior_num_locals = t0_;
		t0_ = Call_(expression, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		result = t1_;
		t0_ = Call_(cur_num_locals_co_, this_, exterior_num_locals);
		return result;
		}
	return nil;
}


obj_ compile_float_literal_co___MethodBuilder__X86Compiler(obj_ this_, obj_ literal)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_literal_co_) UsingMethod_(value)

		{
		t0_ = Call_(value, literal);
		t1_ = Call_(compile_literal_co_, this_, t0_);
		return t1_;
		}
	return nil;
}


obj_ compile_for_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	UsingSym_(iterator)
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	UsingSym_(is_done)
	UsingSym_(nz)
	UsingSym_(current_item)
	UsingSym_(go_forward)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(collection) UsingMethod_(compile_info_co_) UsingMethod_(compile_co_) UsingMethod_(cur_num_locals) UsingMethod_(cur_num_locals_co_) UsingMethod_(define_co_) UsingMethod_(emit_cond_jmp_co_to_co_) UsingMethod_(emit_jmp_co_) UsingMethod_(emit_move_to_co_from_co_) UsingMethod_(emit_send_of_co_to_co_with_co_) UsingMethod_(emit_test_co_) UsingMethod_(end_loop) UsingMethod_(local) UsingMethod_(new_local) UsingMethod_(offset) UsingMethod_(start_loop_continue_co_break_co_)
	UsingClass_(Label__MethodBuilder__X86Compiler)
	UsingClass_(empty__Standard)

		{
		obj_ again, collection_result, done_result, end, exterior_num_locals, interior_num_locals, iterator_call_result, iterator_result, local_result, test, value_result;
		/*  Set up the iterator and the local. */
		t0_ = Call_(cur_num_locals, this_);
		exterior_num_locals = t0_;
		t0_ = Call_(new_local, this_);
		iterator_result = t0_;
		t0_ = Call_(new_local, this_);
		local_result = t0_;
		t0_ = Call_(local, stmt);
		t1_ = Call_(compile_info_co_, t0_, local_result);
		
		/*  Emit the creation of the iterator. */
		t0_ = Call_(cur_num_locals, this_);
		interior_num_locals = t0_;
		t0_ = Call_(collection, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		collection_result = t1_;
		t0_ = Call_(emit_send_of_co_to_co_with_co_, this_, Sym_(iterator), collection_result, Proto_(empty__Standard));
		iterator_call_result = t0_;
		t0_ = Call_(emit_move_to_co_from_co_, this_, iterator_result, iterator_call_result);
		t0_ = Call_(cur_num_locals_co_, this_, interior_num_locals);
		
		/*  Start the loop. */
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		again = t0_;
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		end = t0_;
		t0_ = Call_(start_loop_continue_co_break_co_, this_, again, end);
		
		/*  The test. */
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		test = t0_;
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, test, t0_);
		t0_ = Call_(emit_send_of_co_to_co_with_co_, this_, Sym_(is_done), iterator_result, Proto_(empty__Standard));
		done_result = t0_;
		t0_ = Call_(emit_test_co_, this_, done_result);
		t0_ = Call_(emit_cond_jmp_co_to_co_, this_, Sym_(nz), end);
		
		/*  The body. */
		t0_ = Call_(emit_send_of_co_to_co_with_co_, this_, Sym_(current_item), iterator_result, Proto_(empty__Standard));
		value_result = t0_;
		t0_ = Call_(emit_move_to_co_from_co_, this_, local_result, value_result);
		t0_ = Call_(body, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		
		/*  Go around again. */
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, again, t0_);
		t0_ = Call_(emit_send_of_co_to_co_with_co_, this_, Sym_(go_forward), iterator_result, Proto_(empty__Standard));
		t0_ = Call_(emit_jmp_co_, this_, test);
		
		/*  End the loop. */
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, end, t0_);
		t0_ = Call_(end_loop, this_);
		
		/*  Finish up. */
		t0_ = Call_(cur_num_locals_co_, this_, exterior_num_locals);
		}
	return nil;
}


obj_ compile_function_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ call)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(arguments) UsingMethod_(compile_call_co_with_co_) UsingMethod_(function)

		{
		t0_ = Call_(function, call);
		t1_ = Call_(arguments, call);
		t2_ = Call_(compile_call_co_with_co_, t0_, this_, t1_);
		return t2_;
		}
	return nil;
}


obj_ compile_function_on_this_call_co_with_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func, obj_ arguments)
{
	extern obj_ new_co___ArgumentResult__X86Compiler(obj_ this_, obj_ index);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	UsingMethod_(emit_send_of_co_to_co_with_co_) UsingMethod_(intern) UsingMethod_(name)
	UsingClass_(ArgumentResult__X86Compiler)

		{
		obj_ this_result;
		t0_ = new_co___ArgumentResult__X86Compiler(Proto_(ArgumentResult__X86Compiler), SmallInt_(0));
		this_result = t0_;
		t0_ = Call_(name, func);
		t1_ = Call_(intern, t0_);
		t2_ = Call_(emit_send_of_co_to_co_with_co_, this_, t1_, this_result, arguments);
		return t2_;
		}
	return nil;
}


obj_ compile_if_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	UsingSym_(z)
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(compile_co_) UsingMethod_(condition) UsingMethod_(cur_num_locals) UsingMethod_(cur_num_locals_co_) UsingMethod_(define_co_) UsingMethod_(else_block) UsingMethod_(emit_cond_jmp_co_to_co_) UsingMethod_(emit_jmp_co_) UsingMethod_(emit_test_co_) UsingMethod_(offset)
	UsingClass_(Label__MethodBuilder__X86Compiler)

		{
		obj_ condition_result, end, pre_cond_num_locals;
		t0_ = Call_(cur_num_locals, this_);
		pre_cond_num_locals = t0_;
		t0_ = Call_(condition, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		condition_result = t1_;
		t0_ = Call_(cur_num_locals_co_, this_, pre_cond_num_locals);
		t0_ = Call_(emit_test_co_, this_, condition_result);
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		end = t0_;
		t0_ = Call_(emit_cond_jmp_co_to_co_, this_, Sym_(z), end);
		t0_ = Call_(body, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		t0_ = Call_(else_block, stmt);
		if (t0_)
			{
			obj_ final_end;
			/*  End the body by jumping past the else-branch */
			t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
			final_end = t0_;
			t0_ = Call_(emit_jmp_co_, this_, final_end);
			
			/*  "end" currently means the end of the "if" branch; the conditional needs */
			/*  to jump there. */
			t0_ = Call_(offset, this_);
			t1_ = Call_(define_co_, end, t0_);
			
			/*  Repurpose "end", so "final-end" is defined correctly. */
			end = final_end;
			
			/*  Emit the "else" clause. */
			t0_ = Call_(else_block, stmt);
			t1_ = Call_(compile_co_, t0_, this_);
			}
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, end, t0_);
		}
	return nil;
}


obj_ compile_int_literal_co___MethodBuilder__X86Compiler(obj_ this_, obj_ literal)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_literal_co_) UsingMethod_(value)

		{
		t0_ = Call_(value, literal);
		t1_ = Call_(compile_literal_co_, this_, t0_);
		return t1_;
		}
	return nil;
}


obj_ compile_literal_nil_co___MethodBuilder__X86Compiler(obj_ this_, obj_ literal)
{
	extern obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value);
	obj_ t0_;
	UsingClass_(LiteralResult__X86Compiler)

		{
		/*  Don't need to keep this on the list. */
		t0_ = new_co___LiteralResult__X86Compiler(Proto_(LiteralResult__X86Compiler), nil);
		return t0_;
		}
	return nil;
}


obj_ compile_literal_co___MethodBuilder__X86Compiler(obj_ this_, obj_ value)
{
	extern obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(literals)
	UsingClass_(LiteralResult__X86Compiler)

		{
		/*  We keep all literals in the "literals" list so the GC won't throw them out. */
		t0_ = Call_(literals, this_);
		t1_ = Call_(append_co_, t0_, value);
		t0_ = new_co___LiteralResult__X86Compiler(Proto_(LiteralResult__X86Compiler), value);
		return t0_;
		}
	return nil;
}


obj_ compile_local_getter_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_info) UsingMethod_(local)

		{
		t0_ = Call_(local, func);
		t1_ = Call_(compile_info, t0_);
		return t1_;
		}
	return nil;
}


obj_ compile_local_setter_call_co_with_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_info) UsingMethod_(compile_co_) UsingMethod_(emit_move_to_co_from_co_) UsingMethod_(first_item) UsingMethod_(local)

		{
		obj_ local_result, value_result;
		t0_ = Call_(first_item, arguments);
		t1_ = Call_(compile_co_, t0_, this_);
		value_result = t1_;
		t0_ = Call_(local, func);
		t1_ = Call_(compile_info, t0_);
		local_result = t1_;
		t0_ = Call_(emit_move_to_co_from_co_, this_, local_result, value_result);
		return local_result;
		}
	return nil;
}


obj_ compile_loop_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(compile_co_) UsingMethod_(define_co_) UsingMethod_(emit_jmp_co_) UsingMethod_(end_loop) UsingMethod_(offset) UsingMethod_(start_loop_continue_co_break_co_)
	UsingClass_(Label__MethodBuilder__X86Compiler)

		{
		obj_ end, start;
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		start = t0_;
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, start, t0_);
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		end = t0_;
		t0_ = Call_(start_loop_continue_co_break_co_, this_, start, end);
		t0_ = Call_(body, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		t0_ = Call_(emit_jmp_co_, this_, start);
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, end, t0_);
		t0_ = Call_(end_loop, this_);
		}
	return nil;
}


obj_ compile_nil_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func)
{
	obj_ t0_;
	UsingInt_(49)
	UsingInt_(192)
	UsingMethod_(emit_co_)
	UsingClass_(CallResult__X86Compiler)

		{
		/*  Using "xor eax,eax". */
		t0_ = Call_(emit_co_, this_, SmallInt_(49));
		t0_ = Call_(emit_co_, this_, SmallInt_(192));
		return Proto_(CallResult__X86Compiler);
		}
	return nil;
}


obj_ compile_nil_test_co___MethodBuilder__X86Compiler(obj_ this_, obj_ expr)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_co_) UsingMethod_(is_nil) UsingMethod_(object) UsingMethod_(to_boolean_co_reverse_sense_co_)

		{
		obj_ object_result;
		t0_ = Call_(object, expr);
		t1_ = Call_(compile_co_, t0_, this_);
		object_result = t1_;
		t0_ = Call_(is_nil, expr);
		t1_ = Call_(to_boolean_co_reverse_sense_co_, this_, object_result, t0_);
		return t1_;
		}
	return nil;
}


obj_ compile_primitive_function_call_co_with_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(compile_send_of_co_to_proto_co_with_co_using_co_) UsingMethod_(name) UsingMethod_(on_proto)

		{
		t0_ = Call_(name, func);
		t1_ = Call_(on_proto, func);
		t2_ = Call_(compile_send_of_co_to_proto_co_with_co_using_co_, func, t0_, t1_, arguments, this_);
		return t2_;
		}
	return nil;
}


obj_ compile_proto_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func)
{
	extern obj_ build_co___ClassBuilder__X86Compiler(obj_ this_, obj_ class_context);
	extern obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(proto)
	UsingClass_(ClassBuilder__X86Compiler)
	UsingClass_(LiteralResult__X86Compiler)

		{
		obj_ proto;
		t0_ = Call_(proto, func);
		t1_ = build_co___ClassBuilder__X86Compiler(Proto_(ClassBuilder__X86Compiler), t0_);
		proto = t1_;
		t0_ = new_co___LiteralResult__X86Compiler(Proto_(LiteralResult__X86Compiler), proto);
		return t0_;
		}
	return nil;
}


obj_ compile_return_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_co_) UsingMethod_(emit_jmp_co_) UsingMethod_(postamble_label) UsingMethod_(to_eax_co_) UsingMethod_(value)

		{
		obj_ result;
		t0_ = Call_(value, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		result = t1_;
		t0_ = Call_(to_eax_co_, this_, result);
		t0_ = Call_(postamble_label, this_);
		t1_ = Call_(emit_jmp_co_, this_, t0_);
		}
	return nil;
}


obj_ compile_send_co___MethodBuilder__X86Compiler(obj_ this_, obj_ send)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(arguments) UsingMethod_(compile_co_) UsingMethod_(emit_send_of_co_to_co_with_co_) UsingMethod_(intern) UsingMethod_(name) UsingMethod_(object)

		{
		obj_ object_result;
		t0_ = Call_(object, send);
		t1_ = Call_(compile_co_, t0_, this_);
		object_result = t1_;
		t0_ = Call_(name, send);
		t1_ = Call_(intern, t0_);
		t2_ = Call_(arguments, send);
		t3_ = Call_(emit_send_of_co_to_co_with_co_, this_, t1_, object_result, t2_);
		return t3_;
		}
	return nil;
}


obj_ compile_set_argument_call_co_with_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func, obj_ arguments)
{
	extern obj_ new_co___ArgumentResult__X86Compiler(obj_ this_, obj_ index);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(argument_indices) UsingMethod_(at_co_) UsingMethod_(compile_co_) UsingMethod_(emit_move_to_co_from_co_) UsingMethod_(first_item) UsingMethod_(name)
	UsingClass_(ArgumentResult__X86Compiler)

		{
		obj_ arg_result, index, value_result;
		t0_ = Call_(argument_indices, this_);
		t1_ = Call_(name, func);
		t2_ = Call_(at_co_, t0_, t1_);
		index = t2_;
		t0_ = Call_(first_item, arguments);
		t1_ = Call_(compile_co_, t0_, this_);
		value_result = t1_;
		t0_ = new_co___ArgumentResult__X86Compiler(Proto_(ArgumentResult__X86Compiler), index);
		arg_result = t0_;
		t0_ = Call_(emit_move_to_co_from_co_, this_, arg_result, value_result);
		return arg_result;
		}
	return nil;
}


obj_ compile_shared_field_getter_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(compile_send_of_co_to_proto_co_with_co_using_co_) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(empty__Standard)

		{
		/*  We could get more efficient here, but instead will just emit a send to the */
		/*  proto. */
		t0_ = Call_(name, func);
		t1_ = Call_(on_proto, func);
		t2_ = Call_(compile_send_of_co_to_proto_co_with_co_using_co_, func, t0_, t1_, Proto_(empty__Standard), this_);
		return t2_;
		}
	return nil;
}


obj_ compile_shared_field_setter_call_co_with_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(compile_send_of_co_to_proto_co_with_co_using_co_) UsingMethod_(name) UsingMethod_(on_proto)

		{
		/*  We could get more efficient here, but instead will just emit a send to the */
		/*  proto. */
		t0_ = Call_(name, func);
		t1_ = Call_(on_proto, func);
		t2_ = Call_(compile_send_of_co_to_proto_co_with_co_using_co_, func, t0_, t1_, arguments, this_);
		return t2_;
		}
	return nil;
}


obj_ compile_short_circuit_and_co___MethodBuilder__X86Compiler(obj_ this_, obj_ expr)
{
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	UsingSym_(z)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_co_) UsingMethod_(define_co_) UsingMethod_(emit_cond_jmp_co_to_co_) UsingMethod_(emit_test_co_) UsingMethod_(expr1) UsingMethod_(expr2) UsingMethod_(offset) UsingMethod_(to_eax_co_)
	UsingClass_(CallResult__X86Compiler)
	UsingClass_(Label__MethodBuilder__X86Compiler)

		{
		obj_ end, first_result, second_result;
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		end = t0_;
		t0_ = Call_(expr1, expr);
		t1_ = Call_(compile_co_, t0_, this_);
		first_result = t1_;
		t0_ = Call_(to_eax_co_, this_, first_result);
		first_result = t0_;
		t0_ = Call_(emit_test_co_, this_, first_result);
		t0_ = Call_(emit_cond_jmp_co_to_co_, this_, Sym_(z), end);
		t0_ = Call_(expr2, expr);
		t1_ = Call_(compile_co_, t0_, this_);
		second_result = t1_;
		t0_ = Call_(to_eax_co_, this_, second_result);
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, end, t0_);
		return Proto_(CallResult__X86Compiler);
		}
	return nil;
}


obj_ compile_short_circuit_not_co___MethodBuilder__X86Compiler(obj_ this_, obj_ expr)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_co_) UsingMethod_(expr) UsingMethod_(to_boolean_co_reverse_sense_co_)

		{
		obj_ object_result;
		t0_ = Call_(expr, expr);
		t1_ = Call_(compile_co_, t0_, this_);
		object_result = t1_;
		t0_ = Call_(to_boolean_co_reverse_sense_co_, this_, object_result, true_);
		return t0_;
		}
	return nil;
}


obj_ compile_short_circuit_or_co___MethodBuilder__X86Compiler(obj_ this_, obj_ expr)
{
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	UsingSym_(nz)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_co_) UsingMethod_(define_co_) UsingMethod_(emit_cond_jmp_co_to_co_) UsingMethod_(emit_test_co_) UsingMethod_(expr1) UsingMethod_(expr2) UsingMethod_(offset) UsingMethod_(to_eax_co_)
	UsingClass_(CallResult__X86Compiler)
	UsingClass_(Label__MethodBuilder__X86Compiler)

		{
		obj_ end, first_result, second_result;
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		end = t0_;
		t0_ = Call_(expr1, expr);
		t1_ = Call_(compile_co_, t0_, this_);
		first_result = t1_;
		t0_ = Call_(to_eax_co_, this_, first_result);
		first_result = t0_;
		t0_ = Call_(emit_test_co_, this_, first_result);
		t0_ = Call_(emit_cond_jmp_co_to_co_, this_, Sym_(nz), end);
		t0_ = Call_(expr2, expr);
		t1_ = Call_(compile_co_, t0_, this_);
		second_result = t1_;
		t0_ = Call_(to_eax_co_, this_, second_result);
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, end, t0_);
		return Proto_(CallResult__X86Compiler);
		}
	return nil;
}


obj_ compile_string_literal_co___MethodBuilder__X86Compiler(obj_ this_, obj_ literal)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(compile_literal_co_) UsingMethod_(value)

		{
		t0_ = Call_(value, literal);
		t1_ = Call_(compile_literal_co_, this_, t0_);
		return t1_;
		}
	return nil;
}


obj_ compile_super_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ super_call)
{
	UsingSym_(_dt_superclass)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(104)
	UsingInt_(184)
	UsingInt_(2)
	UsingInt_(255)
	UsingInt_(208)
	UsingInt_(2)
	UsingInt_(2)
	UsingInt_(255)
	UsingInt_(208)
	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(255), SmallInt_(208) };
static obj_ tu1_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(255), SmallInt_(208) };
	UsingMethod_(_pl_) UsingMethod_(arguments) UsingMethod_(compile_this_call_co_) UsingMethod_(dispatch_fn) UsingMethod_(emit_pop_aligned_args_co_) UsingMethod_(emit_pop_args_co_) UsingMethod_(emit_ptr_co_) UsingMethod_(emit_push_co_) UsingMethod_(emit_send_of_co_to_co_with_co_) UsingMethod_(emit_co_) UsingMethod_(intern) UsingMethod_(name) UsingMethod_(num_items) UsingMethod_(object_ptr) UsingMethod_(push_args_co_)
	UsingClass_(CallResult__X86Compiler)
	UsingClass_(Tuple__Standard)
	UsingClass_(empty__Standard)

		{
		obj_ exterior_stack_alignment, object_result, superclass_result;
		/*  Push method args. */
		exterior_stack_alignment = nil;
		t0_ = Call_(compile_this_call_co_, this_, nil);
		object_result = t0_;
		t0_ = Call_(arguments, super_call);
		t1_ = Call_(push_args_co_, this_, t0_);
		t0_ = Call_(emit_push_co_, this_, object_result);
		
		/*  Get the superclass. */
		t0_ = Call_(emit_send_of_co_to_co_with_co_, this_, Sym_(_dt_superclass), object_result, Proto_(empty__Standard));
		superclass_result = t0_;
		
		/*  Call Dispatch_() on the superclass. */
		t0_ = Call_(emit_push_co_, this_, superclass_result);
			{
			/*  "push symbol" */
			t0_ = Call_(emit_co_, this_, SmallInt_(104));
			t0_ = Call_(name, super_call);
			t1_ = Call_(intern, t0_);
			t2_ = Call_(object_ptr, t1_);
			t3_ = Call_(emit_ptr_co_, this_, t2_);
			}
		/*  "mov eax, dispatch-fn" */
		t0_ = Call_(emit_co_, this_, SmallInt_(184));
		t0_ = Call_(dispatch_fn, this_);
		t1_ = Call_(emit_ptr_co_, this_, t0_);
		/*  "call eax" */
		t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
		t0_ = Call_(emit_pop_args_co_, this_, SmallInt_(2));
		
		/*  Call the method. */
		/*  "call eax" */
		t0_ = Call_(emit_co_, this_, ((obj_) tu1_));
		t0_ = Call_(arguments, super_call);
		t1_ = Call_(num_items, t0_);
		t2_ = Call_(_pl_, t1_, SmallInt_(1));
		t3_ = Call_(emit_pop_aligned_args_co_, this_, t2_);
		return Proto_(CallResult__X86Compiler);
		}
	return nil;
}


obj_ compile_switch_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ with_co___List__Standard(obj_ this_, obj_ value);
	UsingSym_(_eq__eq_)
	UsingSym_(z)
	UsingSym_(nz)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingInt_(0)
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(body) UsingMethod_(clauses) UsingMethod_(compile_co_) UsingMethod_(cur_num_locals) UsingMethod_(cur_num_locals_co_) UsingMethod_(current_item) UsingMethod_(define_co_) UsingMethod_(else_clause) UsingMethod_(emit_cond_jmp_co_to_co_) UsingMethod_(emit_jmp_co_) UsingMethod_(emit_send_of_co_to_co_with_co_) UsingMethod_(emit_test_co_) UsingMethod_(expression) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(num_items) UsingMethod_(offset) UsingMethod_(stash_co_) UsingMethod_(values)
	UsingClass_(Label__MethodBuilder__X86Compiler)
	UsingClass_(List__Standard)

		{
		obj_ exit, exterior_num_locals, interior_num_locals, next_clause, value_result;
		/*  Value. */
		t0_ = Call_(cur_num_locals, this_);
		exterior_num_locals = t0_;
		t0_ = Call_(cur_num_locals, this_);
		interior_num_locals = t0_;
		t0_ = Call_(expression, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		value_result = t1_;
		t0_ = Call_(stash_co_, this_, value_result);
		value_result = t0_;
		t0_ = Call_(cur_num_locals_co_, this_, interior_num_locals);
		
		/*  Set up labels. */
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		next_clause = t0_;
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		exit = t0_;
		
		/*  Clauses. */
		t0_ = Call_(clauses, stmt);
		ForStart_(0, t0_, clause)
			{
			obj_ clause_body, values_left;
			t0_ = Call_(offset, this_);
			t1_ = Call_(define_co_, next_clause, t0_);
			t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
			next_clause = t0_;
			t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
			clause_body = t0_;
			t0_ = Call_(values, clause);
			t1_ = Call_(num_items, t0_);
			values_left = t1_;
			/*  Tests. */
			t0_ = Call_(values, clause);
			ForStart_(1, t0_, value)
				{
				obj_ args, test_result;
				t0_ = Call_(_, values_left, SmallInt_(1));
				values_left = t0_;
				t0_ = Call_(cur_num_locals, this_);
				interior_num_locals = t0_;
				t0_ = with_co___List__Standard(Proto_(List__Standard), value);
				args = t0_;
				t0_ = Call_(emit_send_of_co_to_co_with_co_, this_, Sym_(_eq__eq_), value_result, args);
				test_result = t0_;
				t0_ = Call_(cur_num_locals_co_, this_, interior_num_locals);
				t0_ = Call_(emit_test_co_, this_, test_result);
				t0_ = Call_(_eq__eq_, values_left, SmallInt_(0));
				if (t0_)
					{
					/*  This is the last test. */
					t0_ = Call_(emit_cond_jmp_co_to_co_, this_, Sym_(z), next_clause);
					/*  Body follows immediately. */
					}
				else
					{
					t0_ = Call_(emit_cond_jmp_co_to_co_, this_, Sym_(nz), clause_body);
					/*  Next test follows immediately. */
					}
				}
			ForEnd_(1)
			/*  Body. */
			t0_ = Call_(offset, this_);
			t1_ = Call_(define_co_, clause_body, t0_);
			t0_ = Call_(body, clause);
			t1_ = Call_(compile_co_, t0_, this_);
			t0_ = Call_(emit_jmp_co_, this_, exit);
			}
		ForEnd_(0)
		
		/*  "else" clause. */
		t0_ = Call_(else_clause, stmt);
		if (t0_)
			{
			t0_ = Call_(offset, this_);
			t1_ = Call_(define_co_, next_clause, t0_);
			next_clause = nil;
			 	/*  So it doesn't get redefined below. */
			t0_ = Call_(else_clause, stmt);
			t1_ = Call_(body, t0_);
			t2_ = Call_(compile_co_, t1_, this_);
			}
		
		/*  Exit. */
		if (next_clause)
			{
			t0_ = Call_(offset, this_);
			t1_ = Call_(define_co_, next_clause, t0_);
			}
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, exit, t0_);
		
		t0_ = Call_(cur_num_locals_co_, this_, exterior_num_locals);
		}
	return nil;
}


obj_ compile_symbol_literal_co___MethodBuilder__X86Compiler(obj_ this_, obj_ literal)
{
	extern obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(intern) UsingMethod_(name)
	UsingClass_(LiteralResult__X86Compiler)

		{
		/*  Don't need to keep these on the list. */
		t0_ = Call_(name, literal);
		t1_ = Call_(intern, t0_);
		t2_ = new_co___LiteralResult__X86Compiler(Proto_(LiteralResult__X86Compiler), t1_);
		return t2_;
		}
	return nil;
}


obj_ compile_this_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ func)
{
	extern obj_ new_co___ArgumentResult__X86Compiler(obj_ this_, obj_ index);
	obj_ t0_;
	UsingInt_(0)
	UsingClass_(ArgumentResult__X86Compiler)

		{
		t0_ = new_co___ArgumentResult__X86Compiler(Proto_(ArgumentResult__X86Compiler), SmallInt_(0));
		return t0_;
		}
	return nil;
}


obj_ compile_throw_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(1)
	UsingMethod_(compile_co_) UsingMethod_(emit_c_call_co_) UsingMethod_(emit_pop_aligned_args_co_) UsingMethod_(emit_push_co_) UsingMethod_(throw_fn_addr) UsingMethod_(value)

		{
		obj_ value_result;
		t0_ = Call_(value, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		value_result = t1_;
		t0_ = Call_(emit_push_co_, this_, value_result);
		t0_ = Call_(throw_fn_addr, this_);
		t1_ = Call_(emit_c_call_co_, this_, t0_);
		t0_ = Call_(emit_pop_aligned_args_co_, this_, SmallInt_(1));
		}
	return nil;
}


obj_ compile_try_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	UsingSym_(nz)
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(141)
	UsingInt_(80)
	UsingInt_(1)
	UsingInt_(141)
	UsingInt_(80)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(139)
	UsingInt_(5)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(139), SmallInt_(5) };
	UsingMethod_(allocate_stack_struct_co_) UsingMethod_(body) UsingMethod_(compile_co_) UsingMethod_(cur_caught_exception) UsingMethod_(cur_caught_exception_co_) UsingMethod_(current_exception_addr) UsingMethod_(define_co_) UsingMethod_(else_clause) UsingMethod_(emit_c_call_co_) UsingMethod_(emit_cond_jmp_co_to_co_) UsingMethod_(emit_jmp_co_) UsingMethod_(emit_move_to_co_from_co_) UsingMethod_(emit_opcode_extensions_for_co_) UsingMethod_(emit_pop_aligned_args_co_) UsingMethod_(emit_pop_args_co_) UsingMethod_(emit_ptr_co_) UsingMethod_(emit_test_co_) UsingMethod_(emit_co_) UsingMethod_(exception_catcher_size) UsingMethod_(new_local) UsingMethod_(offset) UsingMethod_(pop_exception_fn_addr) UsingMethod_(push_exception_fn_addr) UsingMethod_(setjmp_fn_addr)
	UsingClass_(CallResult__X86Compiler)
	UsingClass_(Label__MethodBuilder__X86Compiler)
	UsingClass_(Tuple__Standard)

		{
		obj_ catch_clause, catcher, end;
		/*  Allocate the catcher. */
		t0_ = Call_(exception_catcher_size, this_);
		t1_ = Call_(allocate_stack_struct_co_, this_, t0_);
		catcher = t1_;
		
		/*  Call PushException_(). */
		/*  "lea eax, catcher" */
		t0_ = Call_(emit_co_, this_, SmallInt_(141));
		t0_ = Call_(emit_opcode_extensions_for_co_, this_, catcher);
		/*  "push eax" */
		t0_ = Call_(emit_co_, this_, SmallInt_(80));
		/*  "call PushException_()" */
		t0_ = Call_(push_exception_fn_addr, this_);
		t1_ = Call_(emit_c_call_co_, this_, t0_);
		t0_ = Call_(emit_pop_args_co_, this_, SmallInt_(1));
		
		/*  Call setjmp(). */
		/*  "lea eax, catcher" -- we happen to know that the jmp_buf is at offset zero. */
		t0_ = Call_(emit_co_, this_, SmallInt_(141));
		t0_ = Call_(emit_opcode_extensions_for_co_, this_, catcher);
		/*  "push eax" */
		t0_ = Call_(emit_co_, this_, SmallInt_(80));
		/*  "call setjmp()" */
		t0_ = Call_(setjmp_fn_addr, this_);
		t1_ = Call_(emit_c_call_co_, this_, t0_);
		t0_ = Call_(emit_pop_aligned_args_co_, this_, SmallInt_(1));
		
		/*  Test setjmp() result. */
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		catch_clause = t0_;
		t0_ = Call_(emit_test_co_, this_, Proto_(CallResult__X86Compiler));
		t0_ = Call_(emit_cond_jmp_co_to_co_, this_, Sym_(nz), catch_clause);
		
		/*  Body. */
		t0_ = Call_(body, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		/*  Call PopException_(). */
		t0_ = Call_(pop_exception_fn_addr, this_);
		t1_ = Call_(emit_c_call_co_, this_, t0_);
		/*  "jmp end". */
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		end = t0_;
		t0_ = Call_(emit_jmp_co_, this_, end);
		
		/*  "else" clause. */
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, catch_clause, t0_);
		t0_ = Call_(else_clause, stmt);
		if (t0_)
			{
			obj_ exterior_caught_exception;
			/*  Set up the "exception" local. */
			t0_ = Call_(cur_caught_exception, this_);
			exterior_caught_exception = t0_;
			t0_ = Call_(new_local, this_);
			t1_ = Call_(cur_caught_exception_co_, this_, t0_);
			/*  Call PopException_(). */
			t0_ = Call_(pop_exception_fn_addr, this_);
			t1_ = Call_(emit_c_call_co_, this_, t0_);
			/*  "mov eax, currentException_" */
			t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
			t0_ = Call_(current_exception_addr, this_);
			t1_ = Call_(emit_ptr_co_, this_, t0_);
			/*  "mov exception, eax" */
			t0_ = Call_(cur_caught_exception, this_);
			t1_ = Call_(emit_move_to_co_from_co_, this_, t0_, Proto_(CallResult__X86Compiler));
			/*  "else" clause body. */
			t0_ = Call_(else_clause, stmt);
			t1_ = Call_(body, t0_);
			t2_ = Call_(compile_co_, t1_, this_);
			/*  Clean up. */
			t0_ = Call_(cur_caught_exception_co_, this_, exterior_caught_exception);
			}
		else
			{
			/*  No "else" clause. */
			/*  Still need to call PopException_(). */
			t0_ = Call_(pop_exception_fn_addr, this_);
			t1_ = Call_(emit_c_call_co_, this_, t0_);
			}
		
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, end, t0_);
		}
	return nil;
}


obj_ compile_tuple_expression_co___MethodBuilder__X86Compiler(obj_ this_, obj_ expr)
{
	extern obj_ new_co___Tuple__Standard(obj_ this_, obj_ num_items);
	extern obj_ new_co___IntLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new_co___LiteralResult__X86Compiler(obj_ this_, obj_ value);
	UsingSym_(new_co_)
	extern obj_ new_co___IntLiteral__Compiler(obj_ this_, obj_ value);
	UsingSym_(at_co_put_co_)
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(2)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(current_item) UsingMethod_(emit_send_of_co_to_co_with_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(members) UsingMethod_(num_items) UsingMethod_(stash_co_)
	UsingClass_(IntLiteral__Compiler)
	UsingClass_(LiteralResult__X86Compiler)
	UsingClass_(Tuple__Standard)

		{
		obj_ args, index, tuple, tuple_obj_result;
		/*  Create the tuple. */
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(1));
		args = t0_;
		t0_ = Call_(members, expr);
		t1_ = Call_(num_items, t0_);
		t2_ = new_co___IntLiteral__Compiler(Proto_(IntLiteral__Compiler), t1_);
		t3_ = Call_(at_co_put_co_, args, SmallInt_(0), t2_);
		t0_ = new_co___LiteralResult__X86Compiler(Proto_(LiteralResult__X86Compiler), Proto_(Tuple__Standard));
		tuple_obj_result = t0_;
		t0_ = Call_(emit_send_of_co_to_co_with_co_, this_, Sym_(new_co_), tuple_obj_result, args);
		tuple = t0_;
		t0_ = Call_(stash_co_, this_, tuple);
		tuple = t0_;
		
		/*  Add the members. */
		index = SmallInt_(0);
		t0_ = Call_(members, expr);
		ForStart_(0, t0_, member)
			{
			obj_ index_literal;
			t0_ = new_co___IntLiteral__Compiler(Proto_(IntLiteral__Compiler), index);
			index_literal = t0_;
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
			t0_->fields[1] = index_literal;
			t0_->fields[2] = member;
			t1_ = Call_(emit_send_of_co_to_co_with_co_, this_, Sym_(at_co_put_co_), tuple, t0_);
			t0_ = Call_(_pl_, index, SmallInt_(1));
			index = t0_;
			}
		ForEnd_(0)
		
		return tuple;
		}
	return nil;
}


obj_ compile_while_co___MethodBuilder__X86Compiler(obj_ this_, obj_ stmt)
{
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(2)
	UsingInt_(117)
	UsingMethod_(body) UsingMethod_(compile_co_) UsingMethod_(condition) UsingMethod_(cur_num_locals) UsingMethod_(cur_num_locals_co_) UsingMethod_(define_co_) UsingMethod_(emit_jmp_co_) UsingMethod_(emit_test_co_) UsingMethod_(emit_co_) UsingMethod_(end_loop) UsingMethod_(jmp_length) UsingMethod_(offset) UsingMethod_(start_loop_continue_co_break_co_)
	UsingClass_(Label__MethodBuilder__X86Compiler)

		{
		obj_ condition_result, end, pre_cond_num_locals, start;
		/*  "start:" */
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		start = t0_;
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, start, t0_);
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		end = t0_;
		/*  condition */
		t0_ = Call_(cur_num_locals, this_);
		pre_cond_num_locals = t0_;
		t0_ = Call_(condition, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		condition_result = t1_;
		t0_ = Call_(emit_test_co_, this_, condition_result);
		t0_ = Call_(cur_num_locals_co_, this_, pre_cond_num_locals);
		/*  "jne body" */
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
		t0_->fields[1] = SmallInt_(117);
		t1_ = Call_(jmp_length, this_);
		t0_->fields[2] = t1_;
		t2_ = Call_(emit_co_, this_, t0_);
		/*  "jmp end" */
		t0_ = Call_(emit_jmp_co_, this_, end);
		/*  "body:" */
		t0_ = Call_(start_loop_continue_co_break_co_, this_, start, end);
		t0_ = Call_(body, stmt);
		t1_ = Call_(compile_co_, t0_, this_);
		/*  "jmp start" */
		t0_ = Call_(emit_jmp_co_, this_, start);
		/*  "end:" */
		t0_ = Call_(offset, this_);
		t1_ = Call_(define_co_, end, t0_);
		t0_ = Call_(end_loop, this_);
		}
	return nil;
}


obj_ create__MethodBuilder__X86Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(create_co_code_co_)

		{
		/*  Because this class has all the code generation machinery (eg. the buffers */
		/*  list), we use it for generating non-CompiledFunctions too, eg. getters and */
		/*  setters.  This constructor is used for those types of functions only. */
		t0_ = Call_(create_co_code_co_, this_, nil, nil);
		}
	return nil;
}


obj_ create_co_code_co___MethodBuilder__X86Compiler(obj_ this_, obj_ function, obj_ code_tree)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingMethod_(buffers_co_) UsingMethod_(code_tree_co_) UsingMethod_(dispatch_fn_addr) UsingMethod_(dispatch_fn_co_) UsingMethod_(function_co_) UsingMethod_(grow) UsingMethod_(init) UsingMethod_(offset_co_) UsingMethod_(refs_co_)
	UsingClass_(List__Standard)

		{
		t0_ = Call_(init, this_);
		t0_ = Call_(function_co_, this_, function);
		t0_ = Call_(code_tree_co_, this_, code_tree);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(refs_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(buffers_co_, this_, t0_);
		t0_ = Call_(grow, this_);
		t0_ = Call_(offset_co_, this_, SmallInt_(0));
		
		t0_ = Call_(dispatch_fn_addr, this_);
		t1_ = Call_(dispatch_fn_co_, this_, t0_);
		}
	return nil;
}


obj_ current_exception_addr__MethodBuilder__X86Compiler(obj_ this_)
{
return BuildBytePtr_(&currentException_);
return nil;
}


obj_ dispatch_fn_addr__MethodBuilder__X86Compiler(obj_ this_)
{
return BuildBytePtr_(&Dispatch_);
return nil;
}


obj_ emit_c_call_co___MethodBuilder__X86Compiler(obj_ this_, obj_ addr)
{
	obj_ t0_;
	UsingInt_(184)
	UsingInt_(2)
	UsingInt_(255)
	UsingInt_(208)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(255), SmallInt_(208) };
	UsingMethod_(emit_ptr_co_) UsingMethod_(emit_co_)
	UsingClass_(Tuple__Standard)

		{
		/*  "mov eax, addr" */
		t0_ = Call_(emit_co_, this_, SmallInt_(184));
		t0_ = Call_(emit_ptr_co_, this_, addr);
		/*  "call eax" */
		t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
		}
	return nil;
}


obj_ emit_cond_jmp_co_to_co___MethodBuilder__X86Compiler(obj_ this_, obj_ cond, obj_ label)
{
	UsingSym_(z)
	UsingSym_(nz)
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(2)
	UsingInt_(15)
	UsingInt_(132)
	UsingInt_(2)
	UsingInt_(15)
	UsingInt_(133)
	DefineString_(0, "Unknown opcode: ")
	DefineString_(1, ".")
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(15), SmallInt_(132) };
static obj_ tu1_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(15), SmallInt_(133) };
	UsingMethod_(_pl_) UsingMethod_(emit_label_ref_co_) UsingMethod_(emit_co_) UsingMethod_(string)
	UsingClass_(Standard)
	UsingClass_(Tuple__Standard)

		{
		Switch_(cond)
		if (SwitchMatches_(Sym_(z)))
			{
			t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
			 	/*  "jz" */
			}
		else if (SwitchMatches_(Sym_(nz)))
			{
			t0_ = Call_(emit_co_, this_, ((obj_) tu1_));
			 	/*  "jnz" */
			}
		else
			{
			t0_ = Call_(string, cond);
			t1_ = Call_(_pl_, Str_(0), t0_);
			t2_ = Call_(_pl_, t1_, Str_(1));
			t3_ = error_co___Standard(Proto_(Standard), t2_);
			}
		EndSwitch_
		t0_ = Call_(emit_label_ref_co_, this_, label);
		}
	return nil;
}


obj_ emit_field_getter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ index)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(4)
	UsingInt_(139)
	UsingInt_(68)
	UsingInt_(36)
	UsingInt_(1)
	UsingInt_(256)
	UsingInt_(3)
	UsingInt_(139)
	UsingInt_(64)
	UsingInt_(2)
	UsingInt_(139)
	UsingInt_(128)
	UsingInt_(195)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(139), SmallInt_(128) };
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(assemble_buffers) UsingMethod_(emit_word_co_) UsingMethod_(emit_co_)
	UsingSharedField_(word_size, X86Compiler) 
	UsingClass_(Tuple__Standard)

		{
		obj_ slot_offset;
		/*  "mov eax, [esp + word-size]"	; eax <- object */
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(4));
		t0_->fields[1] = SmallInt_(139);
		t0_->fields[2] = SmallInt_(68);
		t0_->fields[3] = SmallInt_(36);
		t0_->fields[4] = SharedField_(word_size, X86Compiler);
		t1_ = Call_(emit_co_, this_, t0_);
		/*  "mov eax, [eax + (index + 1) * word-size]" */
		t0_ = Call_(_pl_, index, SmallInt_(1));
		t1_ = Call_(_st_, t0_, SharedField_(word_size, X86Compiler));
		slot_offset = t1_;
		t0_ = Call_(_lt_, slot_offset, SmallInt_(256));
		if (t0_)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
			t0_->fields[1] = SmallInt_(139);
			t0_->fields[2] = SmallInt_(64);
			t0_->fields[3] = slot_offset;
			t1_ = Call_(emit_co_, this_, t0_);
			}
		else
			{
			t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
			t0_ = Call_(emit_word_co_, this_, slot_offset);
			}
		/*  "ret" */
		t0_ = Call_(emit_co_, this_, SmallInt_(195));
		
		t0_ = Call_(assemble_buffers, this_);
		return t0_;
		}
	return nil;
}


obj_ emit_field_setter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ index)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(4)
	UsingInt_(139)
	UsingInt_(68)
	UsingInt_(36)
	UsingInt_(2)
	UsingInt_(4)
	UsingInt_(139)
	UsingInt_(84)
	UsingInt_(36)
	UsingInt_(1)
	UsingInt_(256)
	UsingInt_(3)
	UsingInt_(137)
	UsingInt_(66)
	UsingInt_(2)
	UsingInt_(137)
	UsingInt_(130)
	UsingInt_(195)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(137), SmallInt_(130) };
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(assemble_buffers) UsingMethod_(emit_word_co_) UsingMethod_(emit_co_)
	UsingSharedField_(word_size, X86Compiler) 
	UsingClass_(Tuple__Standard)

		{
		obj_ slot_offset;
		/*  "mov eax, [esp + 2 * word-size]" 	; eax <- new-value */
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(4));
		t0_->fields[1] = SmallInt_(139);
		t0_->fields[2] = SmallInt_(68);
		t0_->fields[3] = SmallInt_(36);
		t1_ = Call_(_st_, SharedField_(word_size, X86Compiler), SmallInt_(2));
		t0_->fields[4] = t1_;
		t2_ = Call_(emit_co_, this_, t0_);
		/*  "mov edx, [esp + word-size]" 	; edx <- object */
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(4));
		t0_->fields[1] = SmallInt_(139);
		t0_->fields[2] = SmallInt_(84);
		t0_->fields[3] = SmallInt_(36);
		t0_->fields[4] = SharedField_(word_size, X86Compiler);
		t1_ = Call_(emit_co_, this_, t0_);
		/*  "mov [edx + (index + 1) * word-size], eax" */
		t0_ = Call_(_pl_, index, SmallInt_(1));
		t1_ = Call_(_st_, t0_, SharedField_(word_size, X86Compiler));
		slot_offset = t1_;
		t0_ = Call_(_lt_, slot_offset, SmallInt_(256));
		if (t0_)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
			t0_->fields[1] = SmallInt_(137);
			t0_->fields[2] = SmallInt_(66);
			t0_->fields[3] = slot_offset;
			t1_ = Call_(emit_co_, this_, t0_);
			}
		else
			{
			t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
			t0_ = Call_(emit_word_co_, this_, slot_offset);
			}
		/*  "ret" */
		t0_ = Call_(emit_co_, this_, SmallInt_(195));
		
		t0_ = Call_(assemble_buffers, this_);
		return t0_;
		}
	return nil;
}


obj_ emit_jmp_co___MethodBuilder__X86Compiler(obj_ this_, obj_ label)
{
	obj_ t0_;
	UsingInt_(233)
	UsingMethod_(emit_label_ref_co_) UsingMethod_(emit_co_)

		{
		t0_ = Call_(emit_co_, this_, SmallInt_(233));
		t0_ = Call_(emit_label_ref_co_, this_, label);
		}
	return nil;
}


obj_ emit_label_ref_co___MethodBuilder__X86Compiler(obj_ this_, obj_ label)
{
	extern obj_ new_co_at_co___LabelRef__MethodBuilder__X86Compiler(obj_ this_, obj_ label, obj_ offset);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingMethod_(append_co_) UsingMethod_(emit_word_co_) UsingMethod_(offset) UsingMethod_(refs)
	UsingClass_(LabelRef__MethodBuilder__X86Compiler)

		{
		obj_ ref;
		t0_ = Call_(offset, this_);
		t1_ = new_co_at_co___LabelRef__MethodBuilder__X86Compiler(Proto_(LabelRef__MethodBuilder__X86Compiler), label, t0_);
		ref = t1_;
		t0_ = Call_(refs, this_);
		t1_ = Call_(append_co_, t0_, ref);
		t0_ = Call_(emit_word_co_, this_, SmallInt_(0));
		}
	return nil;
}


obj_ emit_location_getter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ ptr)
{
	obj_ t0_;
	UsingInt_(184)
	UsingInt_(2)
	UsingInt_(139)
	UsingInt_(0)
	UsingInt_(195)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(139), SmallInt_(0) };
	UsingMethod_(assemble_buffers) UsingMethod_(emit_ptr_co_) UsingMethod_(emit_co_)
	UsingClass_(Tuple__Standard)

		{
		/*  "mov eax, location" */
		t0_ = Call_(emit_co_, this_, SmallInt_(184));
		t0_ = Call_(emit_ptr_co_, this_, ptr);
		/*  "mov eax, [eax]" */
		t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
		/*  "ret" */
		t0_ = Call_(emit_co_, this_, SmallInt_(195));
		
		t0_ = Call_(assemble_buffers, this_);
		return t0_;
		}
	return nil;
}


obj_ emit_location_setter_co___MethodBuilder__X86Compiler(obj_ this_, obj_ ptr)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(4)
	UsingInt_(139)
	UsingInt_(68)
	UsingInt_(36)
	UsingInt_(2)
	UsingInt_(186)
	UsingInt_(2)
	UsingInt_(137)
	UsingInt_(2)
	UsingInt_(195)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(137), SmallInt_(2) };
	UsingMethod_(_st_) UsingMethod_(assemble_buffers) UsingMethod_(emit_ptr_co_) UsingMethod_(emit_co_)
	UsingSharedField_(word_size, X86Compiler) 
	UsingClass_(Tuple__Standard)

		{
		/*  "mov eax, [esp + 2 * word-size]" 	; eax <- new-value */
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(4));
		t0_->fields[1] = SmallInt_(139);
		t0_->fields[2] = SmallInt_(68);
		t0_->fields[3] = SmallInt_(36);
		t1_ = Call_(_st_, SmallInt_(2), SharedField_(word_size, X86Compiler));
		t0_->fields[4] = t1_;
		t2_ = Call_(emit_co_, this_, t0_);
		/*  "mov edx, location" */
		t0_ = Call_(emit_co_, this_, SmallInt_(186));
		t0_ = Call_(emit_ptr_co_, this_, ptr);
		/*  "mov [edx], eax" */
		t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
		/*  "ret" */
		t0_ = Call_(emit_co_, this_, SmallInt_(195));
		
		t0_ = Call_(assemble_buffers, this_);
		return t0_;
		}
	return nil;
}


obj_ emit_method__MethodBuilder__X86Compiler(obj_ this_)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	extern obj_ new__Label__MethodBuilder__X86Compiler(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(85)
	UsingInt_(2)
	UsingInt_(137)
	UsingInt_(229)
	UsingInt_(2)
	UsingInt_(129)
	UsingInt_(236)
	UsingInt_(0)
	UsingInt_(201)
	UsingInt_(195)
	UsingInt_(0)
	UsingInt_(0)
	DefineString_(0, "Internal error: called 'emit-method' for a non-CompiledFunction.")
	DefineString_(1, "Undefined label.")
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(137), SmallInt_(229) };
static obj_ tu1_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(129), SmallInt_(236) };
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(argument_indices) UsingMethod_(argument_indices_co_) UsingMethod_(arguments) UsingMethod_(assemble_buffers) UsingMethod_(at_co_put_co_) UsingMethod_(code_tree) UsingMethod_(compile_nil_call_co_) UsingMethod_(compile_co_) UsingMethod_(cur_num_locals_co_) UsingMethod_(current_item) UsingMethod_(define_co_) UsingMethod_(emit_word_co_) UsingMethod_(emit_co_) UsingMethod_(function) UsingMethod_(go_forward) UsingMethod_(int_at_co_put_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(label) UsingMethod_(loop_stack_co_) UsingMethod_(name) UsingMethod_(num_locals) UsingMethod_(num_locals_co_) UsingMethod_(offset) UsingMethod_(offset_co_) UsingMethod_(postamble_label) UsingMethod_(postamble_label_co_) UsingMethod_(refs)
	UsingSharedField_(word_size, X86Compiler) 
	UsingClass_(Dictionary__Standard)
	UsingClass_(Label__MethodBuilder__X86Compiler)
	UsingClass_(List__Standard)
	UsingClass_(Standard)
	UsingClass_(Tuple__Standard)

		{
		obj_ code, frame_size_offset, index;
		t0_ = Call_(code_tree, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = error_co___Standard(Proto_(Standard), Str_(0));
			}
		
		t0_ = new__Label__MethodBuilder__X86Compiler(Proto_(Label__MethodBuilder__X86Compiler));
		t1_ = Call_(postamble_label_co_, this_, t0_);
		t0_ = Call_(cur_num_locals_co_, this_, SmallInt_(0));
		t0_ = Call_(num_locals_co_, this_, SmallInt_(0));
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(loop_stack_co_, this_, t0_);
		
		/*  Set up arguments. */
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(argument_indices_co_, this_, t0_);
		index = SmallInt_(1);
		 	/*  Index 0 is "this". */
		t0_ = Call_(function, this_);
		t1_ = Call_(arguments, t0_);
		ForStart_(0, t1_, arg)
			{
			t0_ = Call_(argument_indices, this_);
			t1_ = Call_(name, arg);
			t2_ = Call_(at_co_put_co_, t0_, t1_, index);
			t0_ = Call_(_pl_, index, SmallInt_(1));
			index = t0_;
			}
		ForEnd_(0)
		
		/*  Emit the preamble. */
		t0_ = Call_(emit_co_, this_, SmallInt_(85));
		 	/*  "push ebp" */
		t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
		 	/*  "mov ebp, esp" */
		t0_ = Call_(emit_co_, this_, ((obj_) tu1_));
		 	/*  "sub esp, num-locals * 4" */
		t0_ = Call_(offset, this_);
		frame_size_offset = t0_;
		t0_ = Call_(emit_word_co_, this_, SmallInt_(0));
		 	/*  Will be patched later. */
		
		/*  Emit the body of the code. */
		t0_ = Call_(code_tree, this_);
		t1_ = Call_(compile_co_, t0_, this_);
		
		/*  Emit the postamble. */
		/*  The default return value is "nil". */
		t0_ = Call_(compile_nil_call_co_, this_, nil);
		t0_ = Call_(postamble_label, this_);
		t1_ = Call_(offset, this_);
		t2_ = Call_(define_co_, t0_, t1_);
		t0_ = Call_(emit_co_, this_, SmallInt_(201));
		 	/*  "leave" */
		t0_ = Call_(emit_co_, this_, SmallInt_(195));
		 	/*  "ret" */
		
		/*  Assemble the buffers into the final code. */
		t0_ = Call_(assemble_buffers, this_);
		code = t0_;
		
		/*  Patch the frame size. */
		/*  This is not done as a label since it's not relocated, only patched. */
		t0_ = Call_(_pl_, code, frame_size_offset);
		t1_ = Call_(num_locals, this_);
		t2_ = Call_(_st_, t1_, SharedField_(word_size, X86Compiler));
		t3_ = Call_(int_at_co_put_co_, t0_, SmallInt_(0), t2_);
		
		/*  Patch the labels. */
		t0_ = Call_(refs, this_);
		ForStart_(1, t0_, ref)
			{
			obj_ displacement, target;
			t0_ = Call_(label, ref);
			t1_ = Call_(offset, t0_);
			target = t1_;
			t0_ = Not_(target);
			if (t0_)
				{
				t0_ = error_co___Standard(Proto_(Standard), Str_(1));
				}
			t0_ = Call_(offset, ref);
			t1_ = Call_(offset_co_, this_, t0_);
			t0_ = Call_(offset, this_);
			t1_ = Call_(_pl_, t0_, SharedField_(word_size, X86Compiler));
			t2_ = Call_(_, target, t1_);
			displacement = t2_;
			t0_ = Call_(offset, this_);
			t1_ = Call_(_pl_, code, t0_);
			t2_ = Call_(int_at_co_put_co_, t1_, SmallInt_(0), displacement);
			}
		ForEnd_(1)
		
		return code;
		}
	return nil;
}


obj_ emit_move_to_co_from_co___MethodBuilder__X86Compiler(obj_ this_, obj_ dest, obj_ src)
{
	obj_ t0_;
	UsingInt_(137)
	UsingInt_(0)
	UsingMethod_(emit_opcode_extensions_for_co_with_co_) UsingMethod_(emit_co_) UsingMethod_(to_eax_co_)

		{
		t0_ = Call_(to_eax_co_, this_, src);
		/*  "move r/m32, eax" */
		t0_ = Call_(emit_co_, this_, SmallInt_(137));
		t0_ = Call_(emit_opcode_extensions_for_co_with_co_, this_, dest, SmallInt_(0));
		}
	return nil;
}


obj_ emit_object_returner_co___MethodBuilder__X86Compiler(obj_ this_, obj_ object)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(184)
	UsingInt_(195)
	UsingMethod_(assemble_buffers) UsingMethod_(emit_ptr_co_) UsingMethod_(emit_co_) UsingMethod_(object_ptr)

		{
		/*  "mov eax, object" */
		t0_ = Call_(emit_co_, this_, SmallInt_(184));
		t0_ = Call_(object_ptr, object);
		t1_ = Call_(emit_ptr_co_, this_, t0_);
		/*  "ret" */
		t0_ = Call_(emit_co_, this_, SmallInt_(195));
		
		t0_ = Call_(assemble_buffers, this_);
		return t0_;
		}
	return nil;
}


obj_ emit_opcode_extensions_for_co___MethodBuilder__X86Compiler(obj_ this_, obj_ result)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(disp32) UsingMethod_(disp8) UsingMethod_(emit_word_co_) UsingMethod_(emit_co_) UsingMethod_(mod_rm)

		{
		obj_ disp32, disp8;
		t0_ = Call_(mod_rm, result);
		t1_ = Call_(emit_co_, this_, t0_);
		t0_ = Call_(disp8, result);
		disp8 = t0_;
		if (disp8)
			{
			t0_ = Call_(emit_co_, this_, disp8);
			}
		t0_ = Call_(disp32, result);
		disp32 = t0_;
		if (disp32)
			{
			t0_ = Call_(emit_word_co_, this_, disp32);
			}
		}
	return nil;
}


obj_ emit_opcode_extensions_for_co_with_co___MethodBuilder__X86Compiler(obj_ this_, obj_ result, obj_ additional_opcode)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(3)
	UsingMethod_(_lt__lt_) UsingMethod_(disp32) UsingMethod_(disp8) UsingMethod_(emit_word_co_) UsingMethod_(emit_co_) UsingMethod_(mod_rm) UsingMethod_(_or_)

		{
		obj_ disp32, disp8, mod_rm;
		t0_ = Call_(mod_rm, result);
		mod_rm = t0_;
		t0_ = Call_(_lt__lt_, additional_opcode, SmallInt_(3));
		t1_ = Call_(_or_, mod_rm, t0_);
		mod_rm = t1_;
		t0_ = Call_(emit_co_, this_, mod_rm);
		t0_ = Call_(disp8, result);
		disp8 = t0_;
		if (disp8)
			{
			t0_ = Call_(emit_co_, this_, disp8);
			}
		t0_ = Call_(disp32, result);
		disp32 = t0_;
		if (disp32)
			{
			t0_ = Call_(emit_word_co_, this_, disp32);
			}
		}
	return nil;
}


obj_ emit_pop_aligned_args_co___MethodBuilder__X86Compiler(obj_ this_, obj_ num_args)
{
	obj_ t0_;
	UsingMethod_(emit_pop_args_co_)

		{
		t0_ = Call_(emit_pop_args_co_, this_, num_args);
		}
	return nil;
}


obj_ emit_pop_args_co___MethodBuilder__X86Compiler(obj_ this_, obj_ num_args)
{
	obj_ t0_;
	UsingInt_(127)
	UsingInt_(131)
	UsingInt_(196)
	UsingInt_(129)
	UsingInt_(196)
	UsingMethod_(_st_) UsingMethod_(_lt_) UsingMethod_(emit_word_co_) UsingMethod_(emit_co_)
	UsingSharedField_(word_size, X86Compiler) 

		{
		obj_ num_bytes;
		t0_ = Call_(_st_, num_args, SharedField_(word_size, X86Compiler));
		num_bytes = t0_;
		t0_ = Call_(_lt_, num_bytes, SmallInt_(127));
		if (t0_)
			{
			/*  More compact 8-bit form. */
			t0_ = Call_(emit_co_, this_, SmallInt_(131));
			t0_ = Call_(emit_co_, this_, SmallInt_(196));
			t0_ = Call_(emit_co_, this_, num_bytes);
			}
		else
			{
			t0_ = Call_(emit_co_, this_, SmallInt_(129));
			t0_ = Call_(emit_co_, this_, SmallInt_(196));
			t0_ = Call_(emit_word_co_, this_, num_bytes);
			}
		}
	return nil;
}


obj_ emit_ptr_co___MethodBuilder__X86Compiler(obj_ this_, obj_ ptr)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	UsingMethod_(_pl_) UsingMethod_(_gt__eq_) UsingMethod_(buffer_limit) UsingMethod_(grow) UsingMethod_(offset) UsingMethod_(offset_co_) UsingMethod_(out_ptr) UsingMethod_(out_ptr_co_) UsingMethod_(ptr_at_co_put_co_)
	UsingSharedField_(word_size, X86Compiler) 

		{
		t0_ = Call_(out_ptr, this_);
		t1_ = Call_(ptr_at_co_put_co_, t0_, SmallInt_(0), ptr);
		t0_ = Call_(out_ptr, this_);
		t1_ = Call_(_pl_, t0_, SharedField_(word_size, X86Compiler));
		t2_ = Call_(out_ptr_co_, this_, t1_);
		t0_ = Call_(offset, this_);
		t1_ = Call_(_pl_, t0_, SharedField_(word_size, X86Compiler));
		t2_ = Call_(offset_co_, this_, t1_);
		t0_ = Call_(out_ptr, this_);
		t1_ = Call_(buffer_limit, this_);
		t2_ = Call_(_gt__eq_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(grow, this_);
			}
		}
	return nil;
}


obj_ emit_push_co___MethodBuilder__X86Compiler(obj_ this_, obj_ result)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(80)
	UsingInt_(104)
	UsingInt_(255)
	UsingInt_(6)
	UsingMethod_(emit_opcode_extensions_for_co_with_co_) UsingMethod_(emit_ptr_co_) UsingMethod_(emit_co_) UsingMethod_(is_eax) UsingMethod_(is_literal) UsingMethod_(ptr)

		{
		t0_ = Call_(is_eax, result);
		if (t0_)
			{
			t0_ = Call_(emit_co_, this_, SmallInt_(80));
			 	/*  "push eax" */
			}
		else
			{
			t0_ = Call_(is_literal, result);
			if (t0_)
				{
				t0_ = Call_(emit_co_, this_, SmallInt_(104));
				 	/*  "push imm32" */
				t0_ = Call_(ptr, result);
				t1_ = Call_(emit_ptr_co_, this_, t0_);
				}
			else
				{
				t0_ = Call_(emit_co_, this_, SmallInt_(255));
				 	/*  "push r/m32" */
				t0_ = Call_(emit_opcode_extensions_for_co_with_co_, this_, result, SmallInt_(6));
				}
			}
		}
	return nil;
}


obj_ emit_send_of_co_to_co_with_co___MethodBuilder__X86Compiler(obj_ this_, obj_ symbol, obj_ object_result, obj_ args)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(104)
	UsingInt_(184)
	UsingInt_(255)
	UsingInt_(208)
	UsingInt_(2)
	UsingInt_(255)
	UsingInt_(208)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(dispatch_fn) UsingMethod_(emit_pop_aligned_args_co_) UsingMethod_(emit_pop_args_co_) UsingMethod_(emit_ptr_co_) UsingMethod_(emit_push_co_) UsingMethod_(emit_co_) UsingMethod_(num_items) UsingMethod_(object_ptr) UsingMethod_(push_args_co_) UsingMethod_(stash_co_)
	UsingClass_(CallResult__X86Compiler)

		{
		obj_ exterior_stack_alignment;
		/*  Push method args. */
		exterior_stack_alignment = nil;
		t0_ = Call_(stash_co_, this_, object_result);
		object_result = t0_;
		t0_ = Call_(push_args_co_, this_, args);
		t0_ = Call_(emit_push_co_, this_, object_result);
		
		/*  Call Dispatch_(). */
		t0_ = Call_(emit_push_co_, this_, object_result);
			{
			/*  "push symbol" */
			t0_ = Call_(emit_co_, this_, SmallInt_(104));
			t0_ = Call_(object_ptr, symbol);
			t1_ = Call_(emit_ptr_co_, this_, t0_);
			}
		/*  "mov eax, dispatch-fn" */
		t0_ = Call_(emit_co_, this_, SmallInt_(184));
		t0_ = Call_(dispatch_fn, this_);
		t1_ = Call_(emit_ptr_co_, this_, t0_);
		/*  "call eax" */
		t0_ = Call_(emit_co_, this_, SmallInt_(255));
		t0_ = Call_(emit_co_, this_, SmallInt_(208));
		t0_ = Call_(emit_pop_args_co_, this_, SmallInt_(2));
		
		/*  Call the method. */
		/*  "call eax" */
		t0_ = Call_(emit_co_, this_, SmallInt_(255));
		t0_ = Call_(emit_co_, this_, SmallInt_(208));
		t0_ = Call_(num_items, args);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(emit_pop_aligned_args_co_, this_, t1_);
		return Proto_(CallResult__X86Compiler);
		}
	return nil;
}


obj_ emit_test_co___MethodBuilder__X86Compiler(obj_ this_, obj_ result)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(131)
	UsingInt_(7)
	UsingInt_(0)
	UsingMethod_(emit_opcode_extensions_for_co_with_co_) UsingMethod_(emit_co_) UsingMethod_(mod_rm) UsingMethod_(to_eax_co_)

		{
		/*  Literals, at least, can't be accessed using r/m32, and must be moved into */
		/*  eax. */
		t0_ = Call_(mod_rm, result);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(to_eax_co_, this_, result);
			result = t0_;
			}
		/*  "cmp result, 0" */
		t0_ = Call_(emit_co_, this_, SmallInt_(131));
		t0_ = Call_(emit_opcode_extensions_for_co_with_co_, this_, result, SmallInt_(7));
		t0_ = Call_(emit_co_, this_, SmallInt_(0));
		}
	return nil;
}


obj_ emit_word_co___MethodBuilder__X86Compiler(obj_ this_, obj_ word)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	UsingMethod_(_pl_) UsingMethod_(_gt__eq_) UsingMethod_(buffer_limit) UsingMethod_(grow) UsingMethod_(int_at_co_put_co_) UsingMethod_(offset) UsingMethod_(offset_co_) UsingMethod_(out_ptr) UsingMethod_(out_ptr_co_)
	UsingSharedField_(word_size, X86Compiler) 

		{
		t0_ = Call_(out_ptr, this_);
		t1_ = Call_(int_at_co_put_co_, t0_, SmallInt_(0), word);
		t0_ = Call_(out_ptr, this_);
		t1_ = Call_(_pl_, t0_, SharedField_(word_size, X86Compiler));
		t2_ = Call_(out_ptr_co_, this_, t1_);
		t0_ = Call_(offset, this_);
		t1_ = Call_(_pl_, t0_, SharedField_(word_size, X86Compiler));
		t2_ = Call_(offset_co_, this_, t1_);
		t0_ = Call_(out_ptr, this_);
		t1_ = Call_(buffer_limit, this_);
		t2_ = Call_(_gt__eq_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(grow, this_);
			}
		}
	return nil;
}


obj_ emit_co___MethodBuilder__X86Compiler(obj_ this_, obj_ opcodes)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_gt__eq_) UsingMethod_(buffer_limit) UsingMethod_(byte_at_co_put_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(grow) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(offset) UsingMethod_(offset_co_) UsingMethod_(out_ptr) UsingMethod_(out_ptr_co_)

		{
		ForStart_(0, opcodes, opcode)
			{
			t0_ = Call_(out_ptr, this_);
			t1_ = Call_(byte_at_co_put_co_, t0_, SmallInt_(0), opcode);
			t0_ = Call_(out_ptr, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(out_ptr_co_, this_, t1_);
			t0_ = Call_(offset, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(offset_co_, this_, t1_);
			 	/*  Separate from out-ptr. */
			t0_ = Call_(out_ptr, this_);
			t1_ = Call_(buffer_limit, this_);
			t2_ = Call_(_gt__eq_, t0_, t1_);
			if (t2_)
				{
				t0_ = Call_(grow, this_);
				}
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ end_loop__MethodBuilder__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(loop_stack) UsingMethod_(pop_front)

		{
		t0_ = Call_(loop_stack, this_);
		t1_ = Call_(pop_front, t0_);
		}
	return nil;
}


obj_ exception_catcher_size__MethodBuilder__X86Compiler(obj_ this_)
{
return BuildInt_(sizeof(ExceptionCatcher_));
return nil;
}


obj_ get_temporary__MethodBuilder__X86Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(new_local)

		{
		/*  A temporary is no different from any other local. */
		t0_ = Call_(new_local, this_);
		return t0_;
		}
	return nil;
}


obj_ grow__MethodBuilder__X86Compiler(obj_ this_)
{
	extern obj_ new__Buffer__MethodBuilder__X86Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(append_co_) UsingMethod_(buffer_limit_co_) UsingMethod_(buffer_size) UsingMethod_(buffer_slop_space) UsingMethod_(buffers) UsingMethod_(last_item) UsingMethod_(out_ptr) UsingMethod_(out_ptr_co_) UsingMethod_(ptr) UsingMethod_(used_size_co_)
	UsingClass_(Buffer__MethodBuilder__X86Compiler)

		{
		obj_ buffer;
		/*  Finish the current buffer. */
		t0_ = Call_(buffers, this_);
		t1_ = Call_(last_item, t0_);
		buffer = t1_;
		if (buffer)
			{
			t0_ = Call_(out_ptr, this_);
			t1_ = Call_(ptr, buffer);
			t2_ = Call_(_, t0_, t1_);
			t3_ = Call_(used_size_co_, buffer, t2_);
			}
		
		/*  Start a new buffer. */
		t0_ = new__Buffer__MethodBuilder__X86Compiler(Proto_(Buffer__MethodBuilder__X86Compiler));
		buffer = t0_;
		t0_ = Call_(buffers, this_);
		t1_ = Call_(append_co_, t0_, buffer);
		t0_ = Call_(ptr, buffer);
		t1_ = Call_(out_ptr_co_, this_, t0_);
		t0_ = Call_(out_ptr, this_);
		t1_ = Call_(buffer_size, this_);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = Call_(buffer_slop_space, this_);
		t4_ = Call_(_, t2_, t3_);
		t5_ = Call_(buffer_limit_co_, this_, t4_);
		}
	return nil;
}


obj_ init__MethodBuilder__X86Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(literals) UsingMethod_(literals_co_)
	UsingClass_(List__Standard)

		{
		t0_ = Call_(literals, this_);
		if (t0_)
			{
			return nil;
			}
		
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(literals_co_, this_, t0_);
		
		}
	return nil;
}


obj_ jmp_length__MethodBuilder__X86Compiler(obj_ this_)
{
	obj_ t0_;
	UsingInt_(1)
	UsingMethod_(_pl_)
	UsingSharedField_(word_size, X86Compiler) 

		{
		t0_ = Call_(_pl_, SmallInt_(1), SharedField_(word_size, X86Compiler));
		return t0_;
		}
	return nil;
}


obj_ literals__MethodBuilder__X86Compiler(obj_ this_)
{
	return SharedField_(literals, MethodBuilder__X86Compiler);
}


obj_ literals_co___MethodBuilder__X86Compiler(obj_ this_, obj_ value)
{
	SetSharedField_(literals, MethodBuilder__X86Compiler, value);
	return value;
}


obj_ new__MethodBuilder__X86Compiler(obj_ this_)
{
	UsingClass_(MethodBuilder__X86Compiler)
	obj_ obj = AllocObj_(MethodBuilder__X86Compiler);
	create__MethodBuilder__X86Compiler(obj);
	return obj;
}


obj_ new_local__MethodBuilder__X86Compiler(obj_ this_)
{
	extern obj_ new_co___LocalResult__X86Compiler(obj_ this_, obj_ index);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_gt_) UsingMethod_(cur_num_locals) UsingMethod_(cur_num_locals_co_) UsingMethod_(num_locals) UsingMethod_(num_locals_co_)
	UsingClass_(LocalResult__X86Compiler)

		{
		obj_ index;
		/*  Allocate an index. */
		t0_ = Call_(cur_num_locals, this_);
		index = t0_;
		t0_ = Call_(cur_num_locals, this_);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(cur_num_locals_co_, this_, t1_);
		t0_ = Call_(cur_num_locals, this_);
		t1_ = Call_(num_locals, this_);
		t2_ = Call_(_gt_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(cur_num_locals, this_);
			t1_ = Call_(num_locals_co_, this_, t0_);
			}
		
		/*  Create the local. */
		t0_ = new_co___LocalResult__X86Compiler(Proto_(LocalResult__X86Compiler), index);
		return t0_;
		}
	return nil;
}


obj_ new_co_code_co___MethodBuilder__X86Compiler(obj_ this_, obj_ function, obj_ code_tree)
{
	UsingClass_(MethodBuilder__X86Compiler)
	obj_ obj = AllocObj_(MethodBuilder__X86Compiler);
	create_co_code_co___MethodBuilder__X86Compiler(obj, function, code_tree);
	return obj;
}


obj_ pop_exception_fn_addr__MethodBuilder__X86Compiler(obj_ this_)
{
return BuildBytePtr_(&PopException_);
return nil;
}


obj_ push_args_co___MethodBuilder__X86Compiler(obj_ this_, obj_ args)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	UsingMethod_(compile_co_) UsingMethod_(current_item) UsingMethod_(emit_push_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(push_front_co_)
	UsingClass_(List__Standard)

		{
		obj_ reversed_args;
		t0_ = new__List__Standard(Proto_(List__Standard));
		reversed_args = t0_;
		ForStart_(0, args, arg)
			{
			t0_ = Call_(push_front_co_, reversed_args, arg);
			}
		ForEnd_(0)
		ForStart_(1, reversed_args, arg)
			{
			obj_ result;
			t0_ = Call_(compile_co_, arg, this_);
			result = t0_;
			t0_ = Call_(emit_push_co_, this_, result);
			}
		ForEnd_(1)
		}
	return nil;
}


obj_ push_exception_fn_addr__MethodBuilder__X86Compiler(obj_ this_)
{
return BuildBytePtr_(&PushException_);
return nil;
}


obj_ setjmp_fn_addr__MethodBuilder__X86Compiler(obj_ this_)
{
return BuildBytePtr_(setjmp);
return nil;
}


obj_ start_loop_continue_co_break_co___MethodBuilder__X86Compiler(obj_ this_, obj_ continue_label, obj_ break_label)
{
	extern obj_ new_continue_co_break_co___Loop__MethodBuilder__X86Compiler(obj_ this_, obj_ continue_label, obj_ break_label);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(loop_stack) UsingMethod_(push_front_co_)
	UsingClass_(Loop__MethodBuilder__X86Compiler)

		{
		obj_ new_loop;
		t0_ = new_continue_co_break_co___Loop__MethodBuilder__X86Compiler(Proto_(Loop__MethodBuilder__X86Compiler), continue_label, break_label);
		new_loop = t0_;
		t0_ = Call_(loop_stack, this_);
		t1_ = Call_(push_front_co_, t0_, new_loop);
		}
	return nil;
}


obj_ stash_co___MethodBuilder__X86Compiler(obj_ this_, obj_ result)
{
	obj_ t0_;
	UsingInt_(137)
	UsingMethod_(emit_opcode_extensions_for_co_) UsingMethod_(emit_co_) UsingMethod_(get_temporary) UsingMethod_(is_eax)

		{
		/*  If the result is already safely on the stack, simply return it.  If not, */
		/*  stash it in a temporary. */
		t0_ = Call_(is_eax, result);
		if (t0_)
			{
			obj_ temp;
			t0_ = Call_(get_temporary, this_);
			temp = t0_;
			/*  "mov temp, eax" */
			t0_ = Call_(emit_co_, this_, SmallInt_(137));
			t0_ = Call_(emit_opcode_extensions_for_co_, this_, temp);
			result = temp;
			}
		return result;
		}
	return nil;
}


obj_ throw_fn_addr__MethodBuilder__X86Compiler(obj_ this_)
{
return BuildBytePtr_(&Throw_);
return nil;
}


obj_ to_boolean_co_reverse_sense_co___MethodBuilder__X86Compiler(obj_ this_, obj_ object_result, obj_ reverse_sense)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(2)
	UsingInt_(117)
	UsingInt_(7)
	UsingInt_(2)
	UsingInt_(116)
	UsingInt_(7)
	UsingInt_(184)
	UsingInt_(2)
	UsingInt_(235)
	UsingInt_(2)
	UsingInt_(2)
	UsingInt_(49)
	UsingInt_(192)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(117), SmallInt_(7) };
static obj_ tu1_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(116), SmallInt_(7) };
static obj_ tu2_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(235), SmallInt_(2) };
static obj_ tu3_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), SmallInt_(49), SmallInt_(192) };
	UsingMethod_(emit_ptr_co_) UsingMethod_(emit_test_co_) UsingMethod_(emit_co_) UsingMethod_(object_ptr)
	UsingClass_(CallResult__X86Compiler)
	UsingClass_(True__Standard)
	UsingClass_(Tuple__Standard)

		{
		t0_ = Call_(emit_test_co_, this_, object_result);
		if (reverse_sense)
			{
			/*  "jnz result_false" */
			t0_ = Call_(emit_co_, this_, ((obj_) tu0_));
			}
		else
			{
			/*  "jz result_false" */
			t0_ = Call_(emit_co_, this_, ((obj_) tu1_));
			}
		/*  "mov eax, True" */
		t0_ = Call_(emit_co_, this_, SmallInt_(184));
		t0_ = Call_(object_ptr, Proto_(True__Standard));
		t1_ = Call_(emit_ptr_co_, this_, t0_);
		/*  "jmp test_complete" */
		t0_ = Call_(emit_co_, this_, ((obj_) tu2_));
		/*  "result_false: xor eax, eax" */
		t0_ = Call_(emit_co_, this_, ((obj_) tu3_));
		return Proto_(CallResult__X86Compiler);
		}
	return nil;
}


obj_ to_eax_co___MethodBuilder__X86Compiler(obj_ this_, obj_ result)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(184)
	UsingInt_(139)
	UsingInt_(0)
	UsingMethod_(emit_opcode_extensions_for_co_with_co_) UsingMethod_(emit_ptr_co_) UsingMethod_(emit_co_) UsingMethod_(is_eax) UsingMethod_(is_literal) UsingMethod_(ptr)
	UsingClass_(CallResult__X86Compiler)

		{
		t0_ = Call_(is_eax, result);
		if (t0_)
			{
			/*  Nothing to do. */
			}
		else
			{
			t0_ = Call_(is_literal, result);
			if (t0_)
				{
				/*  "mov eax, imm32" */
				t0_ = Call_(emit_co_, this_, SmallInt_(184));
				t0_ = Call_(ptr, result);
				t1_ = Call_(emit_ptr_co_, this_, t0_);
				}
			else
				{
				/*  "mov eax, r/m32" */
				t0_ = Call_(emit_co_, this_, SmallInt_(139));
				t0_ = Call_(emit_opcode_extensions_for_co_with_co_, this_, result, SmallInt_(0));
				}
			}
		return Proto_(CallResult__X86Compiler);
		}
	return nil;
}


