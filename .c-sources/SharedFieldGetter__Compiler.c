#include "Trylon_.h"

UsingSym_(SharedFieldGetter)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(SharedFieldGetter__Compiler)
struct ClassInfo SharedFieldGetter__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 120, 2, Proto_(SharedFieldGetter__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(SharedFieldGetter), nil, nil };
struct object SharedFieldGetter__Compiler = 
	{ &SharedFieldGetter__Compiler__classInfo_, {nil, nil} };



#define field__fld_	(0)
#define on_proto__fld_	(1)


obj_ access__SharedFieldGetter__Compiler(obj_ this_)
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
	DefineString_(0, "SharedField_(")
	DefineString_(1, ", ")
	DefineString_(2, ")")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(field) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(Compiler)

		{
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		t3_ = Call_(_pl_, Str_(0), t2_);
		t4_ = Call_(_pl_, t3_, Str_(1));
		t5_ = Call_(on_proto, this_);
		t6_ = Call_(c_name, t5_);
		t7_ = Call_(_pl_, t4_, t6_);
		t8_ = Call_(_pl_, t7_, Str_(2));
		return t8_;
		}
	return nil;
}


obj_ build_co___SharedFieldGetter__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(build_shared_field_getter_co_)

		{
		t0_ = Call_(build_shared_field_getter_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ c_name__SharedFieldGetter__Compiler(obj_ this_)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineString_(0, "__")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(field) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(Compiler)

		{
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		t3_ = Call_(_pl_, t2_, Str_(0));
		t4_ = Call_(on_proto, this_);
		t5_ = Call_(c_name, t4_);
		t6_ = Call_(_pl_, t3_, t5_);
		return t6_;
		}
	return nil;
}


obj_ c_signature__SharedFieldGetter__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "obj_ ")
	DefineString_(1, "(obj_ this_)")
	UsingMethod_(_pl_) UsingMethod_(c_name)

		{
		t0_ = Call_(c_name, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		return t2_;
		}
	return nil;
}


obj_ compile_call_co_with_co___SharedFieldGetter__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(compile_shared_field_getter_call_co_)

		{
		t0_ = Call_(compile_shared_field_getter_call_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co_on_proto_co___SharedFieldGetter__Compiler(obj_ this_, obj_ field, obj_ on_proto)
{
	obj_ t0_;
	UsingMethod_(field_co_) UsingMethod_(on_proto_co_)

		{
		t0_ = Call_(field_co_, this_, field);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___SharedFieldGetter__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(field) UsingMethod_(on_proto) UsingMethod_(using_shared_field_co_on_proto_co_)
	UsingClass_(LiteralResult__CCompiler)

		{
		t0_ = Call_(field, this_);
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(using_shared_field_co_on_proto_co_, builder, t0_, t1_);
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		}
	return nil;
}


obj_ emit_c_function_on_co___SharedFieldGetter__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(3)
	DefineString_(0, "{\n")
	DefineString_(1, "\treturn ")
	DefineString_(2, ";\n")
	DefineString_(3, "}\n")
	UsingMethod_(access) UsingMethod_(c_signature) UsingMethod_(write_all_co_) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)

		{
		t0_ = Call_(c_signature, this_);
		t1_ = Call_(write_line_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(0));
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
		t0_->fields[1] = Str_(1);
		t1_ = Call_(access, this_);
		t0_->fields[2] = t1_;
		t0_->fields[3] = Str_(2);
		t2_ = Call_(write_all_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(3));
		t0_ = Call_(write_line, stream);
		t0_ = Call_(write_line, stream);
		}
	return nil;
}


obj_ interpret_call_with_co___SharedFieldGetter__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(field) UsingMethod_(interpret_proto_send_of_co_to_co_with_co_) UsingMethod_(name) UsingMethod_(on_proto)

		{
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(on_proto, this_);
		t3_ = Call_(interpret_proto_send_of_co_to_co_with_co_, this_, t1_, t2_, arguments);
		return t3_;
		}
	return nil;
}


obj_ name__SharedFieldGetter__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(field) UsingMethod_(name)

		{
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		return t1_;
		}
	return nil;
}


obj_ new_co_on_proto_co___SharedFieldGetter__Compiler(obj_ this_, obj_ field, obj_ on_proto)
{
	UsingClass_(SharedFieldGetter__Compiler)
	obj_ obj = AllocObj_(SharedFieldGetter__Compiler);
	create_co_on_proto_co___SharedFieldGetter__Compiler(obj, field, on_proto);
	return obj;
}


