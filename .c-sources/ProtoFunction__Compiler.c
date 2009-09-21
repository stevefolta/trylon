#include "Trylon_.h"

UsingSym_(ProtoFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(ProtoFunction__Compiler)
struct ClassInfo ProtoFunction__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 124, 1, Proto_(ProtoFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(ProtoFunction), nil, nil };
struct object ProtoFunction__Compiler = 
	{ &ProtoFunction__Compiler__classInfo_, {nil} };



#define proto__fld_	(0)


obj_ access__ProtoFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Proto_(")
	DefineString_(1, ")")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(proto)

		{
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(_pl_, Str_(0), t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		return t3_;
		}
	return nil;
}


obj_ build_co___ProtoFunction__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(build_proto_function_co_)

		{
		t0_ = Call_(build_proto_function_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ c_name__ProtoFunction__Compiler(obj_ this_)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "__")
	DefineString_(1, "__accessor_")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(name) UsingMethod_(parent) UsingMethod_(proto)
	UsingClass_(Compiler)

		{
		obj_ name, parent;
		/*  In some cases (eg. "Main", "Compiler Compiler"), there could be a name */
		/*  conflict with the proto, so we add "__accessor_". */
		t0_ = Call_(proto, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		name = t2_;
		t0_ = Call_(proto, this_);
		t1_ = Call_(parent, t0_);
		parent = t1_;
		if (parent)
			{
			t0_ = Call_(c_name, parent);
			t1_ = Call_(_pl_, Str_(0), t0_);
			t2_ = Call_(_pl_, name, t1_);
			name = t2_;
			}
		t0_ = Call_(_pl_, name, Str_(1));
		name = t0_;
		return name;
		}
	return nil;
}


obj_ c_signature__ProtoFunction__Compiler(obj_ this_)
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


obj_ compile_call_co_with_co___ProtoFunction__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(compile_proto_call_co_)

		{
		t0_ = Call_(compile_proto_call_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___ProtoFunction__Compiler(obj_ this_, obj_ proto)
{
	obj_ t0_;
	UsingMethod_(proto_co_)

		{
		t0_ = Call_(proto_co_, this_, proto);
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___ProtoFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(proto) UsingMethod_(using_class_co_)
	UsingClass_(LiteralResult__CCompiler)

		{
		t0_ = Call_(proto, this_);
		t1_ = Call_(using_class_co_, builder, t0_);
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		}
	return nil;
}


obj_ emit_c_function_on_co___ProtoFunction__Compiler(obj_ this_, obj_ stream)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, "{")
	DefineString_(1, "\tUsingClass_(")
	DefineString_(2, ")")
	DefineString_(3, "\treturn ")
	DefineString_(4, ";")
	DefineString_(5, "}")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(c_name) UsingMethod_(c_signature) UsingMethod_(proto) UsingMethod_(write_line) UsingMethod_(write_line_co_)

		{
		t0_ = Call_(c_signature, this_);
		t1_ = Call_(write_line_co_, stream, t0_);
		t0_ = Call_(write_line_co_, stream, Str_(0));
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(_pl_, Str_(1), t1_);
		t3_ = Call_(_pl_, t2_, Str_(2));
		t4_ = Call_(write_line_co_, stream, t3_);
		t0_ = Call_(access, this_);
		t1_ = Call_(_pl_, Str_(3), t0_);
		t2_ = Call_(_pl_, t1_, Str_(4));
		t3_ = Call_(write_line_co_, stream, t2_);
		t0_ = Call_(write_line_co_, stream, Str_(5));
		t0_ = Call_(write_line, stream);
		t0_ = Call_(write_line, stream);
		}
	return nil;
}


obj_ interpret_call_with_co___ProtoFunction__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(proto)

		{
		t0_ = Call_(proto, this_);
		t1_ = Call_(proto, t0_);
		return t1_;
		}
	return nil;
}


obj_ name__ProtoFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(name) UsingMethod_(proto)

		{
		t0_ = Call_(proto, this_);
		t1_ = Call_(name, t0_);
		return t1_;
		}
	return nil;
}


obj_ new_co___ProtoFunction__Compiler(obj_ this_, obj_ proto)
{
	UsingClass_(ProtoFunction__Compiler)
	obj_ obj = AllocObj_(ProtoFunction__Compiler);
	create_co___ProtoFunction__Compiler(obj, proto);
	return obj;
}


