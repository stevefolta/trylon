#include "Trylon_.h"

UsingSym_(NewFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(NewFunction__Compiler)
struct ClassInfo NewFunction__Compiler__classInfo_ = 
	{ 113, 3, Proto_(NewFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(NewFunction) ,nil };
struct object NewFunction__Compiler = 
	{ &NewFunction__Compiler__classInfo_, {nil, nil, nil} };



#define name__fld_	(0)
#define creator__fld_	(1)
#define on_proto__fld_	(2)


obj_ c_name__NewFunction__Compiler(obj_ this_)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "__")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(Compiler)

		{
		t0_ = Call_(name, this_);
		t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = Call_(on_proto, this_);
		t4_ = Call_(c_name, t3_);
		t5_ = Call_(_pl_, t2_, t4_);
		return t5_;
		
		
		
		}
	return nil;
}


obj_ c_signature__NewFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(arguments) UsingMethod_(c_name) UsingMethod_(c_signature_co_arguments_co_) UsingMethod_(creator)

		{
		t0_ = Call_(c_name, this_);
		t1_ = Call_(creator, this_);
		t2_ = Call_(arguments, t1_);
		t3_ = Call_(c_signature_co_arguments_co_, this_, t0_, t2_);
		return t3_;
		
		}
	return nil;
}


obj_ create_co_on_proto_co___NewFunction__Compiler(obj_ this_, obj_ creator, obj_ on_proto)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 6)
	DefineString_(0, "new")
	UsingMethod_(_pl_) UsingMethod_(creator_co_) UsingMethod_(name) UsingMethod_(name_co_) UsingMethod_(on_proto_co_) UsingMethod_(substr_co_)

		{
		t0_ = Call_(creator_co_, this_, creator);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		
		t0_ = Call_(name, creator);
		t1_ = Call_(substr_co_, t0_, Int_(0));
		t2_ = Call_(_pl_, Str_(0), t1_);
		t3_ = Call_(name_co_, this_, t2_);
		
		
		
		
		
		}
	return nil;
}


obj_ creator__NewFunction__Compiler(obj_ this_)
{
	return Field_(creator);
}


obj_ creator_co___NewFunction__Compiler(obj_ this_, obj_ value)
{
	Field_(creator) = value;
	return value;
}


obj_ emit_c_call_co_builder_co___NewFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(emit_proto_send_co_arguments_co_builder_co_) UsingMethod_(on_proto)

		{
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(emit_proto_send_co_arguments_co_builder_co_, this_, t0_, arguments, builder);
		return t1_;
		
		}
	return nil;
}


obj_ emit_c_function_on_co___NewFunction__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	DefineString_(0, "{\n")
	DefineString_(1, "\tUsingClass_(")
	DefineString_(2, ")\n")
	DefineString_(3, "\tobj_ obj = AllocObj_(")
	DefineString_(4, ");\n")
	DefineString_(5, "\t")
	DefineString_(6, "__")
	DefineString_(7, "(obj")
	DefineString_(8, ", ")
	DefineString_(9, ");\n")
	DefineString_(10, "\tRegisterFinalizer_(obj);\n")
	DefineString_(11, "\treturn obj;\n")
	DefineString_(12, "}\n\n\n")
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(arguments) UsingMethod_(c_name) UsingMethod_(c_signature) UsingMethod_(creator) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(needs_finalizer) UsingMethod_(on_proto) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	UsingClass_(Compiler)
	UsingClass_(List__Standard)

		{
		obj_ arg_names, proto_name;
		t0_ = new__List__Standard(Proto_(List__Standard));
		arg_names = t0_;
		t0_ = Call_(creator, this_);
		t1_ = Call_(arguments, t0_);
		ForStart_(0, t1_, arg)
			{
			t0_ = Call_(name, arg);
			t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
			t2_ = Call_(append_co_, arg_names, t1_);
			
			}
		ForEnd_(0)
		/* Signature. */
		t0_ = Call_(c_signature, this_);
		t1_ = Call_(write_line_co_, stream, t0_);
		
		/* Body */
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(c_name, t0_);
		proto_name = t1_;
		t0_ = Call_(write_co_, stream, Str_(0));
		t0_ = Call_(_pl_, Str_(1), proto_name);
		t1_ = Call_(_pl_, t0_, Str_(2));
		t2_ = Call_(write_co_, stream, t1_);
		t0_ = Call_(_pl_, Str_(3), proto_name);
		t1_ = Call_(_pl_, t0_, Str_(4));
		t2_ = Call_(write_co_, stream, t1_);
		t0_ = Call_(creator, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		t3_ = Call_(_pl_, Str_(5), t2_);
		t4_ = Call_(_pl_, t3_, Str_(6));
		t5_ = Call_(_pl_, t4_, proto_name);
		t6_ = Call_(_pl_, t5_, Str_(7));
		t7_ = Call_(write_co_, stream, t6_);
		ForStart_(1, arg_names, arg_name)
			{
			t0_ = Call_(write_co_, stream, Str_(8));
			t0_ = Call_(write_co_, stream, arg_name);
			}
		ForEnd_(1)
		t0_ = Call_(write_co_, stream, Str_(9));
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(needs_finalizer, t0_);
		if (t1_)
			{
			t0_ = Call_(write_co_, stream, Str_(10));
			}
		t0_ = Call_(write_co_, stream, Str_(11));
		t0_ = Call_(write_co_, stream, Str_(12));
		
		}
	return nil;
}


obj_ emit_call_co___NewFunction__Compiler(obj_ this_, obj_ arguments)
{
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingSym_(clone)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingSym_(new_object)
	extern obj_ with_co___Expression(obj_ this_, obj_ value);
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(new_object)
	extern obj_ with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4);
	UsingSym_(let)
	UsingSym_(new_object)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineInt_(0, 3)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	DefineInt_(3, 2)
	DefineInt_(4, 3)
	DefineInt_(5, 1)
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(creator) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(jolt_expression) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(Expression)

		{
		obj_ allocation, creator_call, index, let_spec;
		t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), Sym_(clone));
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(access, t1_);
		t3_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(send), t0_, t2_);
		allocation = t3_;
		t0_ = Call_(count, arguments);
		t1_ = Call_(_pl_, t0_, Int_(0));
		t2_ = new_co___Expression(Proto_(Expression), t1_);
		creator_call = t2_;
		t0_ = Call_(at_co_put_co_, creator_call, Int_(1), Sym_(send));
		t0_ = Call_(creator, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(intern, t1_);
		t3_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t2_);
		t4_ = Call_(at_co_put_co_, creator_call, Int_(2), t3_);
		t0_ = Call_(at_co_put_co_, creator_call, Int_(3), Sym_(new_object));
		index = Int_(4);
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(jolt_expression, arg);
			t1_ = Call_(at_co_put_co_, creator_call, index, t0_);
			t0_ = Call_(_pl_, index, Int_(5));
			index = t0_;
			}
		ForEnd_(0)
		t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(new_object), allocation);
		t1_ = with_co___Expression(Proto_(Expression), t0_);
		let_spec = t1_;
		t0_ = with_co_with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(let), let_spec, creator_call, Sym_(new_object));
		return t0_;
		
		}
	return nil;
}


obj_ emit_code__NewFunction__Compiler(obj_ this_)
{
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingSym_(raw_new)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingSym_(new_object)
	extern obj_ with_co___Expression(obj_ this_, obj_ value);
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(new_object)
	extern obj_ with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4);
	UsingSym_(let)
	UsingSym_(new_object)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(define_send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineInt_(0, 3)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	DefineInt_(3, 2)
	DefineInt_(4, 3)
	DefineInt_(5, 1)
	DefineInt_(6, 4)
	DefineInt_(7, 0)
	DefineInt_(8, 1)
	DefineInt_(9, 2)
	DefineInt_(10, 3)
	DefineInt_(11, 1)
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(arguments) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(creator) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(Expression)

		{
		obj_ allocation, body, creator_call, expr, index, let_spec;
		t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), Sym_(raw_new));
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(access, t1_);
		t3_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(send), t0_, t2_);
		allocation = t3_;
		t0_ = Call_(creator, this_);
		t1_ = Call_(arguments, t0_);
		t2_ = Call_(count, t1_);
		t3_ = Call_(_pl_, t2_, Int_(0));
		t4_ = new_co___Expression(Proto_(Expression), t3_);
		creator_call = t4_;
		t0_ = Call_(at_co_put_co_, creator_call, Int_(1), Sym_(send));
		t0_ = Call_(creator, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(intern, t1_);
		t3_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t2_);
		t4_ = Call_(at_co_put_co_, creator_call, Int_(2), t3_);
		t0_ = Call_(at_co_put_co_, creator_call, Int_(3), Sym_(new_object));
		index = Int_(4);
		t0_ = Call_(creator, this_);
		t1_ = Call_(arguments, t0_);
		ForStart_(0, t1_, arg)
			{
			t0_ = Call_(name, arg);
			t1_ = Call_(intern, t0_);
			t2_ = Call_(at_co_put_co_, creator_call, index, t1_);
			t0_ = Call_(_pl_, index, Int_(5));
			index = t0_;
			}
		ForEnd_(0)
		t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(new_object), allocation);
		t1_ = with_co___Expression(Proto_(Expression), t0_);
		let_spec = t1_;
		t0_ = with_co_with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(let), let_spec, creator_call, Sym_(new_object));
		body = t0_;
		
		t0_ = Call_(creator, this_);
		t1_ = Call_(arguments, t0_);
		t2_ = Call_(count, t1_);
		t3_ = Call_(_pl_, t2_, Int_(6));
		t4_ = new_co___Expression(Proto_(Expression), t3_);
		expr = t4_;
		t0_ = Call_(at_co_put_co_, expr, Int_(7), Sym_(define_send));
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t1_);
		t3_ = Call_(at_co_put_co_, expr, Int_(8), t2_);
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(access, t0_);
		t2_ = Call_(at_co_put_co_, expr, Int_(9), t1_);
		index = Int_(10);
		t0_ = Call_(creator, this_);
		t1_ = Call_(arguments, t0_);
		ForStart_(1, t1_, arg)
			{
			t0_ = Call_(name, arg);
			t1_ = Call_(intern, t0_);
			t2_ = Call_(at_co_put_co_, expr, index, t1_);
			t0_ = Call_(_pl_, index, Int_(11));
			index = t0_;
			}
		ForEnd_(1)
		t0_ = Call_(at_co_put_co_, expr, index, body);
		return expr;
		
		}
	return nil;
}


obj_ interpret_call_with_co___NewFunction__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(interpret_proto_send_of_co_to_co_with_co_) UsingMethod_(name) UsingMethod_(on_proto)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(interpret_proto_send_of_co_to_co_with_co_, this_, t0_, t1_, arguments);
		return t2_;
		
		}
	return nil;
}


obj_ is_translatable__NewFunction__Compiler(obj_ this_)
{

		{
		return true_;
		
		
		}
	return nil;
}


obj_ name__NewFunction__Compiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___NewFunction__Compiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co_on_proto_co___NewFunction__Compiler(obj_ this_, obj_ creator, obj_ on_proto)
{
	UsingClass_(NewFunction__Compiler)
	obj_ obj = AllocObj_(NewFunction__Compiler);
	create_co_on_proto_co___NewFunction__Compiler(obj, creator, on_proto);
	return obj;
}


obj_ on_proto__NewFunction__Compiler(obj_ this_)
{
	return Field_(on_proto);
}


obj_ on_proto_co___NewFunction__Compiler(obj_ this_, obj_ value)
{
	Field_(on_proto) = value;
	return value;
}


obj_ translate_call_co_compiler_co___NewFunction__Compiler(obj_ this_, obj_ arguments, obj_ compiler)
{
	extern obj_ new_co_object_co_arguments_co___Send__Compiler(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(access) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(translate_co_)
	UsingClass_(Send__Compiler)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(access, t1_);
		t3_ = new_co_object_co_arguments_co___Send__Compiler(Proto_(Send__Compiler), t0_, t2_, arguments);
		t4_ = Call_(translate_co_, t3_, compiler);
		
		}
	return nil;
}


obj_ translate_co___NewFunction__Compiler(obj_ this_, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(emit_code) UsingMethod_(translateExpression_co_)

		{
		t0_ = Call_(emit_code, this_);
		t1_ = Call_(translateExpression_co_, compiler, t0_);
		return t1_;
		}
	return nil;
}


