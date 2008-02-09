#include "Trylon_.h"

UsingSym_(ProtoFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(ProtoFunction__Compiler)
struct ClassInfo ProtoFunction__Compiler__classInfo_ = 
	{ 110, 4, Proto_(ProtoFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(ProtoFunction) ,nil };
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


obj_ c_name__ProtoFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "__")
	DefineString_(1, "__accessor_")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(name) UsingMethod_(parent) UsingMethod_(proto)
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	UsingClass_(Compiler)

		{
		obj_ name, parent;
		/* In some cases (eg. "Main", "Compiler Compiler"), there could be a name */
		/* conflict with the proto, so we add "__accessor_". */
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
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(proto) UsingMethod_(using_class_co_)
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
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


obj_ emit_call_co___ProtoFunction__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(access) UsingMethod_(proto)

		{
		t0_ = Call_(proto, this_);
		t1_ = Call_(access, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ emit_code__ProtoFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	DefineInt_(3, 1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(is_main) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(parent) UsingMethod_(proto) UsingMethod_(push_front_co_)
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(install_proto_loader)
	UsingClass_(List__Standard)
	UsingClass_(Expression)

		{
		obj_ expr, index, list, namespace_;
		t0_ = Call_(proto, this_);
		t1_ = Call_(is_main, t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = new__List__Standard(Proto_(List__Standard));
		list = t0_;
		t0_ = Call_(proto, this_);
		namespace_ = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(is_main, namespace_);
			t1_ = Not_(t0_);
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(push_front_co_, list, namespace_);
			t0_ = Call_(parent, namespace_);
			namespace_ = t0_;
			}
			}
		t0_ = Call_(count, list);
		t1_ = Call_(_pl_, t0_, Int_(0));
		t2_ = new_co___Expression(Proto_(Expression), t1_);
		expr = t2_;
		t0_ = Call_(at_co_put_co_, expr, Int_(1), Sym_(install_proto_loader));
		index = Int_(2);
		ForStart_(1, list, namespace_)
			{
			t0_ = Call_(name, namespace_);
			t1_ = Call_(intern, t0_);
			t2_ = Call_(at_co_put_co_, expr, index, t1_);
			t0_ = Call_(_pl_, index, Int_(3));
			index = t0_;
			}
		ForEnd_(1)
		return expr;
		
		
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


obj_ proto__ProtoFunction__Compiler(obj_ this_)
{
	return Field_(proto);
}


obj_ proto_co___ProtoFunction__Compiler(obj_ this_, obj_ value)
{
	Field_(proto) = value;
	return value;
}


