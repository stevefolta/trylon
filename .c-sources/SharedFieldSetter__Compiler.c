#include "Trylon_.h"

UsingSym_(SharedFieldSetter)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(SharedFieldSetter__Compiler)
struct ClassInfo SharedFieldSetter__Compiler__classInfo_ = 
	{ 108, 8, Proto_(SharedFieldSetter__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(SharedFieldSetter) ,nil };
struct object SharedFieldSetter__Compiler = 
	{ &SharedFieldSetter__Compiler__classInfo_, {nil, nil} };



#define field__fld_	(0)
#define on_proto__fld_	(1)


obj_ c_name__SharedFieldSetter__Compiler(obj_ this_)
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


obj_ c_signature__SharedFieldSetter__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "obj_ ")
	DefineString_(1, "(obj_ this_, obj_ value)")
	UsingMethod_(_pl_) UsingMethod_(c_name)

		{
		t0_ = Call_(c_name, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		return t2_;
		
		}
	return nil;
}


obj_ create_co_on_proto_co___SharedFieldSetter__Compiler(obj_ this_, obj_ field, obj_ on_proto)
{
	obj_ t0_;
	UsingMethod_(field_co_) UsingMethod_(on_proto_co_)

		{
		t0_ = Call_(field_co_, this_, field);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		
		
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___SharedFieldSetter__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	obj_ t9_;
	obj_ t10_;
	obj_ t11_;
	obj_ t12_;
	DefineString_(0, "SetSharedField_(")
	DefineString_(1, ", ")
	DefineString_(2, ", ")
	DefineString_(3, ");")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(c_name) UsingMethod_(emit_code_co_) UsingMethod_(field) UsingMethod_(first_item) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(using_shared_field_co_on_proto_co_)
	UsingClass_(Compiler)

		{
		obj_ value;
		t0_ = Call_(field, this_);
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(using_shared_field_co_on_proto_co_, builder, t0_, t1_);
		t0_ = Call_(first_item, arguments);
		t1_ = Call_(emit_code_co_, t0_, builder);
		value = t1_;
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		t3_ = Call_(_pl_, Str_(0), t2_);
		t4_ = Call_(_pl_, t3_, Str_(1));
		t5_ = Call_(on_proto, this_);
		t6_ = Call_(c_name, t5_);
		t7_ = Call_(_pl_, t4_, t6_);
		t8_ = Call_(_pl_, t7_, Str_(2));
		t9_ = Call_(access, value);
		t10_ = Call_(_pl_, t8_, t9_);
		t11_ = Call_(_pl_, t10_, Str_(3));
		t12_ = Call_(add_line_co_, builder, t11_);
		return value;
		
		}
	return nil;
}


obj_ emit_c_function_on_co___SharedFieldSetter__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineInt_(0, 5)
	DefineString_(0, "{\n")
	DefineString_(1, "\tSetSharedField_(")
	DefineString_(2, ", ")
	DefineString_(3, ", value);\n")
	DefineString_(4, "\treturn value;\n")
	DefineString_(5, "}\n")
	UsingMethod_(c_name) UsingMethod_(c_signature) UsingMethod_(field) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(write_all_co_) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	UsingClass_(Compiler)

		{
		t0_ = Call_(c_signature, this_);
		t1_ = Call_(write_line_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(0));
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(0));
		t0_->fields[1] = Str_(1);
		t1_ = Call_(field, this_);
		t2_ = Call_(name, t1_);
		t3_ = mangle_name_co___Compiler(Proto_(Compiler), t2_);
		t0_->fields[2] = t3_;
		t0_->fields[3] = Str_(2);
		t4_ = Call_(on_proto, this_);
		t5_ = Call_(c_name, t4_);
		t0_->fields[4] = t5_;
		t0_->fields[5] = Str_(3);
		t6_ = Call_(write_all_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(4));
		t0_ = Call_(write_co_, stream, Str_(5));
		t0_ = Call_(write_line, stream);
		t0_ = Call_(write_line, stream);
		
		}
	return nil;
}


obj_ emit_call_co___SharedFieldSetter__Compiler(obj_ this_, obj_ arguments)
{
	extern obj_ with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	obj_ t9_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(field) UsingMethod_(first_item) UsingMethod_(intern) UsingMethod_(jolt_expression) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(Expression)

		{
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = Call_(intern, t2_);
		t4_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t3_);
		t5_ = Call_(on_proto, this_);
		t6_ = Call_(access, t5_);
		t7_ = Call_(first_item, arguments);
		t8_ = Call_(jolt_expression, t7_);
		t9_ = with_co_with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(send), t4_, t6_, t8_);
		return t9_;
		
		}
	return nil;
}


obj_ field__SharedFieldSetter__Compiler(obj_ this_)
{
	return Field_(field);
}


obj_ field_co___SharedFieldSetter__Compiler(obj_ this_, obj_ value)
{
	Field_(field) = value;
	return value;
}


obj_ interpret_call_with_co___SharedFieldSetter__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(field) UsingMethod_(interpret_proto_send_of_co_to_co_with_co_) UsingMethod_(name) UsingMethod_(on_proto)

		{
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = Call_(on_proto, this_);
		t4_ = Call_(interpret_proto_send_of_co_to_co_with_co_, this_, t2_, t3_, arguments);
		return t4_;
		
		}
	return nil;
}


obj_ name__SharedFieldSetter__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(field) UsingMethod_(name)

		{
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		return t2_;
		
		
		
		}
	return nil;
}


obj_ new_co_on_proto_co___SharedFieldSetter__Compiler(obj_ this_, obj_ field, obj_ on_proto)
{
	UsingClass_(SharedFieldSetter__Compiler)
	obj_ obj = AllocObj_(SharedFieldSetter__Compiler);
	create_co_on_proto_co___SharedFieldSetter__Compiler(obj, field, on_proto);
	return obj;
}


obj_ on_proto__SharedFieldSetter__Compiler(obj_ this_)
{
	return Field_(on_proto);
}


obj_ on_proto_co___SharedFieldSetter__Compiler(obj_ this_, obj_ value)
{
	Field_(on_proto) = value;
	return value;
}


obj_ translate_call_co_compiler_co___SharedFieldSetter__Compiler(obj_ this_, obj_ arguments, obj_ compiler)
{
	extern obj_ with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(field) UsingMethod_(first_item) UsingMethod_(intern) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(translateExpression_co_)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = Call_(intern, t2_);
		t4_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t3_);
		t5_ = Call_(on_proto, this_);
		t6_ = Call_(access, t5_);
		t7_ = Call_(first_item, arguments);
		t8_ = with_co_with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(send), t4_, t6_, t7_);
		expr = t8_;
		t0_ = Call_(translateExpression_co_, compiler, expr);
		return t0_;
		
		
		}
	return nil;
}


