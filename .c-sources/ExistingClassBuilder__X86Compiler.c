#include "Trylon_.h"

UsingSym_(ExistingClassBuilder)UsingClass_(X86Compiler)
UsingClass_(ClassBuilder__X86Compiler)
UsingClass_(ExistingClassBuilder__X86Compiler)
struct ClassInfo ExistingClassBuilder__X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 102, 2, Proto_(ExistingClassBuilder__X86Compiler), Proto_(X86Compiler), Proto_(ClassBuilder__X86Compiler), nil, Sym_(ExistingClassBuilder), nil, nil };
struct object ExistingClassBuilder__X86Compiler = 
	{ &ExistingClassBuilder__X86Compiler__classInfo_, {nil, nil} };


#define class_context__fld_	(0)
#define shared_fields__fld_	(1)



obj_ build__ExistingClassBuilder__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(build_functions_into_co_) UsingMethod_(class_context) UsingMethod_(clear) UsingMethod_(new_functions) UsingMethod_(proto)

		{
		t0_ = Call_(class_context, this_);
		t1_ = Call_(proto, t0_);
		t2_ = Call_(build_functions_into_co_, this_, t1_);
		
		/*  Clear new-functions, just in case the existing-class gets used again. */
		t0_ = Call_(class_context, this_);
		t1_ = Call_(new_functions, t0_);
		t2_ = Call_(clear, t1_);
		
		t0_ = Call_(class_context, this_);
		t1_ = Call_(proto, t0_);
		return t1_;
		}
	return nil;
}


obj_ create_co___ExistingClassBuilder__X86Compiler(obj_ this_, obj_ existing_class)
{
	obj_ create_co___ClassBuilder__X86Compiler(obj_, obj_);
	obj_ t0_;

		{
		t0_ = create_co___ClassBuilder__X86Compiler(this_, existing_class);
		}
	return nil;
}


obj_ index_for_field_co___ExistingClassBuilder__X86Compiler(obj_ this_, obj_ name)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	DefineString_(0, "Adding new fields to existing classes isn't supported.")
	UsingClass_(Standard)

		{
		t0_ = error_co___Standard(Proto_(Standard), Str_(0));
		}
	return nil;
}


obj_ live_proto__ExistingClassBuilder__X86Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(class_context) UsingMethod_(proto)

		{
		t0_ = Call_(class_context, this_);
		t1_ = Call_(proto, t0_);
		return t1_;
		}
	return nil;
}


obj_ new_co___ExistingClassBuilder__X86Compiler(obj_ this_, obj_ existing_class)
{
	UsingClass_(ExistingClassBuilder__X86Compiler)
	obj_ obj = AllocObj_(ExistingClassBuilder__X86Compiler);
	create_co___ExistingClassBuilder__X86Compiler(obj, existing_class);
	return obj;
}


