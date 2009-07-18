#include "Trylon_.h"

UsingSym_(CompiledClassBuilder)UsingClass_(X86Compiler)
UsingClass_(ClassBuilder__X86Compiler)
UsingClass_(CompiledClassBuilder__X86Compiler)
struct ClassInfo CompiledClassBuilder__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 182, 3, Proto_(CompiledClassBuilder__X86Compiler), Proto_(X86Compiler), Proto_(ClassBuilder__X86Compiler), nil, Sym_(CompiledClassBuilder), nil, nil };
struct object CompiledClassBuilder__X86Compiler = 
	{ &CompiledClassBuilder__X86Compiler__classInfo_, {nil, nil, nil} };


#define class_context__fld_	(0)
#define shared_fields__fld_	(1)

#define created_proto__fld_	(2)

DeclareSharedField_(created_protos, CompiledClassBuilder__X86Compiler, nil)

obj_ build__CompiledClassBuilder__X86Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(build_functions_into_co_) UsingMethod_(live_proto)

		{
		obj_ proto;
		/*  Create the new class in the runtime. */
		t0_ = Call_(live_proto, this_);
		proto = t0_;
		
		/*  Add in all the functions. */
		t0_ = Call_(build_functions_into_co_, this_, proto);
		
		return proto;
		}
	return nil;
}


obj_ create_co___CompiledClassBuilder__X86Compiler(obj_ this_, obj_ compiled_class)
{
	obj_ create_co___ClassBuilder__X86Compiler(obj_, obj_);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(created_protos) UsingMethod_(created_protos_co_)
	UsingClass_(List__Standard)

		{
		t0_ = create_co___ClassBuilder__X86Compiler(this_, compiled_class);
		t0_ = Call_(created_protos, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = new__List__Standard(Proto_(List__Standard));
			t1_ = Call_(created_protos_co_, this_, t0_);
			}
		}
	return nil;
}


obj_ created_protos__CompiledClassBuilder__X86Compiler(obj_ this_)
{
	return SharedField_(created_protos, CompiledClassBuilder__X86Compiler);
}


obj_ created_protos_co___CompiledClassBuilder__X86Compiler(obj_ this_, obj_ value)
{
	SetSharedField_(created_protos, CompiledClassBuilder__X86Compiler, value);
	return value;
}


obj_ index_for_field_co___CompiledClassBuilder__X86Compiler(obj_ this_, obj_ name)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Internal error: Unknown field: \"")
	DefineString_(1, "\"")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(class_context) UsingMethod_(compile_info) UsingMethod_(current_item) UsingMethod_(fields) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(live_proto) UsingMethod_(name)
	UsingClass_(Standard)

		{
		/*  We assign the field indices while setting up the live-proto, so make sure */
		/*  that's happened. */
		t0_ = Call_(live_proto, this_);
		
		t0_ = Call_(class_context, this_);
		t1_ = Call_(fields, t0_);
		ForStart_(0, t1_, field)
			{
			t0_ = Call_(name, field);
			t1_ = Call_(_eq__eq_, name, t0_);
			if (t1_)
				{
				t0_ = Call_(compile_info, field);
				return t0_;
				}
			}
		ForEnd_(0)
		
		t1_ = Call_(_pl_, Str_(0), name);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = error_co___Standard(Proto_(Standard), t2_);
		}
	return nil;
}


obj_ live_proto__CompiledClassBuilder__X86Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_field_names_co_parent_co_superclass_co___Class__CImplementation__Standard(obj_ this_, obj_ name, obj_ field_names, obj_ parent_context, obj_ superclass);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_dt_class) UsingMethod_(append_co_) UsingMethod_(class_context) UsingMethod_(compile_info_co_) UsingMethod_(created_proto) UsingMethod_(created_proto_co_) UsingMethod_(created_protos) UsingMethod_(current_item) UsingMethod_(fields) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(live_proto_for_co_) UsingMethod_(name) UsingMethod_(num_slots) UsingMethod_(parent) UsingMethod_(proto) UsingMethod_(superclass)
	UsingClass_(Class__CImplementation__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Object__Standard)

		{
		/*  Create it, if we haven't already. */
		t0_ = Call_(created_proto, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			obj_ class_info, compiled_class, field_index, field_names, parent_object, superclass_object;
			t0_ = Call_(class_context, this_);
			compiled_class = t0_;
			
			/*  Parent, superclass. */
			parent_object = nil;
			t0_ = Call_(parent, compiled_class);
			if (t0_)
				{
				t0_ = Call_(parent, compiled_class);
				t1_ = Call_(live_proto_for_co_, this_, t0_);
				parent_object = t1_;
				}
			superclass_object = nil;
			t0_ = Call_(superclass, compiled_class);
			if (t0_)
				{
				t0_ = Call_(superclass, compiled_class);
				t1_ = Call_(live_proto_for_co_, this_, t0_);
				superclass_object = t1_;
				}
			else
				{
				superclass_object = Proto_(Object__Standard);
				}
			t0_ = new__List__Standard(Proto_(List__Standard));
			field_names = t0_;
			
			/*  Set up fields. */
			/*  We need the field names for the Class; also assign field indices here. */
			t0_ = Call_(_dt_class, superclass_object);
			t1_ = Call_(num_slots, t0_);
			field_index = t1_;
			t0_ = Call_(fields, compiled_class);
			ForStart_(0, t0_, field)
				{
				t0_ = Call_(name, field);
				t1_ = Call_(intern, t0_);
				t2_ = Call_(append_co_, field_names, t1_);
				t0_ = Call_(compile_info_co_, field, field_index);
				t0_ = Call_(_pl_, field_index, SmallInt_(1));
				field_index = t0_;
				}
			ForEnd_(0)
			
			/*  Create the class. */
			t0_ = Call_(name, compiled_class);
			t1_ = Call_(intern, t0_);
			t2_ = new_co_field_names_co_parent_co_superclass_co___Class__CImplementation__Standard(Proto_(Class__CImplementation__Standard), t1_, field_names, parent_object, superclass_object);
			class_info = t2_;
			t0_ = Call_(proto, class_info);
			t1_ = Call_(created_proto_co_, this_, t0_);
			t0_ = Call_(created_protos, this_);
			t1_ = Call_(created_proto, this_);
			t2_ = Call_(append_co_, t0_, t1_);
			}
		
		t0_ = Call_(created_proto, this_);
		return t0_;
		}
	return nil;
}


obj_ new_co___CompiledClassBuilder__X86Compiler(obj_ this_, obj_ compiled_class)
{
	UsingClass_(CompiledClassBuilder__X86Compiler)
	obj_ obj = AllocObj_(CompiledClassBuilder__X86Compiler);
	create_co___CompiledClassBuilder__X86Compiler(obj, compiled_class);
	return obj;
}


