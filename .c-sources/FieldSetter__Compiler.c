#include "Trylon_.h"

UsingSym_(FieldSetter)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(FieldSetter__Compiler)
struct ClassInfo FieldSetter__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 123, 2, Proto_(FieldSetter__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(FieldSetter), nil, nil };
struct object FieldSetter__Compiler = 
	{ &FieldSetter__Compiler__classInfo_, {nil, nil} };



#define field__fld_	(0)
#define on_proto__fld_	(1)


obj_ build_co___FieldSetter__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(build_field_setter_co_)

		{
		t0_ = Call_(build_field_setter_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ c_name__FieldSetter__Compiler(obj_ this_)
{
	extern obj_ build_settings__Main(obj_ this_);
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
	DefineString_(0, "FieldSetter")
	DefineString_(1, "_")
	DefineString_(2, "__")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(field) UsingMethod_(index) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(shared_field_accessors) UsingMethod_(string)
	UsingClass_(Compiler)
	UsingClass_(Main)

		{
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(shared_field_accessors, t0_);
		if (t1_)
			{
			t0_ = Call_(field, this_);
			t1_ = Call_(index, t0_);
			t2_ = Call_(string, t1_);
			t3_ = Call_(_pl_, Str_(0), t2_);
			t4_ = Call_(_pl_, t3_, Str_(1));
			return t4_;
			}
		else
			{
			t5_ = Call_(name, this_);
			t6_ = mangle_name_co___Compiler(Proto_(Compiler), t5_);
			t7_ = Call_(_pl_, t6_, Str_(2));
			t8_ = Call_(on_proto, this_);
			t9_ = Call_(c_name, t8_);
			t10_ = Call_(_pl_, t7_, t9_);
			return t10_;
			}
		}
	return nil;
}


obj_ c_signature__FieldSetter__Compiler(obj_ this_)
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


obj_ compile_call_co_with_co___FieldSetter__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(compile_send_of_co_to_proto_co_with_co_using_co_) UsingMethod_(name) UsingMethod_(on_proto)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(compile_send_of_co_to_proto_co_with_co_using_co_, this_, t0_, t1_, arguments, builder);
		return t2_;
		}
	return nil;
}


obj_ create_co_on_proto_co___FieldSetter__Compiler(obj_ this_, obj_ field, obj_ on_proto)
{
	obj_ t0_;
	UsingMethod_(field_co_) UsingMethod_(on_proto_co_)

		{
		t0_ = Call_(field_co_, this_, field);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___FieldSetter__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ emit_send_co_to_string_co_with_co_builder_co___CCompiler(obj_ this_, obj_ name, obj_ receiver, obj_ arguments, obj_ builder);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Proto_(")
	DefineString_(1, ")")
	DefineString_(2, ":")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(field) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(using_class_co_)
	UsingClass_(CCompiler)

		{
		obj_ proto_access;
		/*  Don't be confused!  See FieldGetter... */
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(using_class_co_, builder, t0_);
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(_pl_, Str_(0), t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		proto_access = t3_;
		t0_ = Call_(field, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(_pl_, t1_, Str_(2));
		t3_ = emit_send_co_to_string_co_with_co_builder_co___CCompiler(Proto_(CCompiler), t2_, proto_access, arguments, builder);
		return t3_;
		}
	return nil;
}


obj_ emit_c_function_on_co___FieldSetter__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(3)
	DefineString_(0, "{\n")
	DefineString_(1, "\tField_(")
	DefineString_(2, ") = value;\n")
	DefineString_(3, "\treturn value;\n")
	DefineString_(4, "}\n")
	UsingMethod_(c_signature) UsingMethod_(field) UsingMethod_(name) UsingMethod_(shared_field_accessors) UsingMethod_(write_all_co_) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	UsingClass_(Compiler)
	UsingClass_(Main)

		{
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(shared_field_accessors, t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(c_signature, this_);
		t1_ = Call_(write_line_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(0));
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
		t0_->fields[1] = Str_(1);
		t1_ = Call_(field, this_);
		t2_ = Call_(name, t1_);
		t3_ = mangle_name_co___Compiler(Proto_(Compiler), t2_);
		t0_->fields[2] = t3_;
		t0_->fields[3] = Str_(2);
		t4_ = Call_(write_all_co_, stream, t0_);
		t0_ = Call_(write_co_, stream, Str_(3));
		t0_ = Call_(write_co_, stream, Str_(4));
		t0_ = Call_(write_line, stream);
		t0_ = Call_(write_line, stream);
		}
	return nil;
}


obj_ interpret_call_with_co___FieldSetter__Compiler(obj_ this_, obj_ arguments)
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


obj_ name__FieldSetter__Compiler(obj_ this_)
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


obj_ new_co_on_proto_co___FieldSetter__Compiler(obj_ this_, obj_ field, obj_ on_proto)
{
	UsingClass_(FieldSetter__Compiler)
	obj_ obj = AllocObj_(FieldSetter__Compiler);
	create_co_on_proto_co___FieldSetter__Compiler(obj, field, on_proto);
	return obj;
}


