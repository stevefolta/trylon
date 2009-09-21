#include "Trylon_.h"

UsingSym_(NewFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(NewFunction__Compiler)
struct ClassInfo NewFunction__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 125, 3, Proto_(NewFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(NewFunction), nil, nil };
struct object NewFunction__Compiler = 
	{ &NewFunction__Compiler__classInfo_, {nil, nil, nil} };



#define name__fld_	(0)
#define creator__fld_	(1)
#define on_proto__fld_	(2)


obj_ build_co___NewFunction__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(build_new_function_co_)

		{
		t0_ = Call_(build_new_function_co_, builder, this_);
		return t0_;
		}
	return nil;
}


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
	UsingInt_(6)
	DefineString_(0, "new")
	UsingMethod_(_pl_) UsingMethod_(creator_co_) UsingMethod_(name) UsingMethod_(name_co_) UsingMethod_(on_proto_co_) UsingMethod_(substr_co_)

		{
		t0_ = Call_(creator_co_, this_, creator);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		
		t0_ = Call_(name, creator);
		t1_ = Call_(substr_co_, t0_, SmallInt_(6));
		t2_ = Call_(_pl_, Str_(0), t1_);
		t3_ = Call_(name_co_, this_, t2_);
		}
	return nil;
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
		
		/*  Signature. */
		t0_ = Call_(c_signature, this_);
		t1_ = Call_(write_line_co_, stream, t0_);
		
		/*  Body */
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


obj_ new_co_on_proto_co___NewFunction__Compiler(obj_ this_, obj_ creator, obj_ on_proto)
{
	UsingClass_(NewFunction__Compiler)
	obj_ obj = AllocObj_(NewFunction__Compiler);
	create_co_on_proto_co___NewFunction__Compiler(obj, creator, on_proto);
	return obj;
}


