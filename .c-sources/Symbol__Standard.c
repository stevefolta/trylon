#include "Trylon_.h"

UsingSym_(Symbol)UsingClass_(Standard)
UsingClass_(String__Standard)
UsingClass_(Symbol__Standard)
struct ClassInfo Symbol__Standard__classInfo_ = 
	{ 21, 12, Proto_(Symbol__Standard), Proto_(Standard), Proto_(String__Standard), nil, Sym_(Symbol) ,nil };
struct object Symbol__Standard = 
	{ &Symbol__Standard__classInfo_, {nil, nil, nil} };


#define start__fld_	(0)
#define stopper__fld_	(1)

#define _dt__ul_selector__fld_	(2)

DeclareSharedField_(built_in_table, Symbol__Standard, nil)
DeclareSharedField_(dynamic_table, Symbol__Standard, nil)

obj_ _nt__eq___Symbol__Standard(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_nt__eq_) UsingMethod_(object_ptr)

		{
		t0_ = Call_(object_ptr, this_);
		t1_ = Call_(object_ptr, arg);
		t2_ = Call_(_nt__eq_, t0_, t1_);
		return t2_;
		
		}
	return nil;
}


obj_ _dt__ul_selector__Symbol__Standard(obj_ this_)
{
	return Field_(_dt__ul_selector);
}


obj_ _dt__ul_selector_co___Symbol__Standard(obj_ this_, obj_ value)
{
	Field_(_dt__ul_selector) = value;
	return value;
}


obj_ _eq__eq___Symbol__Standard(obj_ this_, obj_ arg)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_eq__eq_) UsingMethod_(object_ptr)

		{
		t0_ = Call_(object_ptr, this_);
		t1_ = Call_(object_ptr, arg);
		t2_ = Call_(_eq__eq_, t0_, t1_);
		return t2_;
		
		}
	return nil;
}


obj_ built_in_table__Symbol__Standard(obj_ this_)
{
	return SharedField_(built_in_table, Symbol__Standard);
}


obj_ built_in_table_co___Symbol__Standard(obj_ this_, obj_ value)
{
	SetSharedField_(built_in_table, Symbol__Standard, value);
	return value;
}


obj_ create_co_to_co___Symbol__Standard(obj_ this_, obj_ start, obj_ stopper)
{
extern obj_ create_co_to_co___String__Standard(obj_, obj_, obj_);
create_co_to_co___String__Standard(this_, start, stopper);
Field_(_dt__ul_selector) = (obj_) -1;

}


obj_ debug_string__Symbol__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(print_string)

		{
		t0_ = Call_(print_string, this_);
		return t0_;
		
		
		
		}
	return nil;
}


obj_ dynamic_table__Symbol__Standard(obj_ this_)
{
	return SharedField_(dynamic_table, Symbol__Standard);
}


obj_ dynamic_table_co___Symbol__Standard(obj_ this_, obj_ value)
{
	SetSharedField_(dynamic_table, Symbol__Standard, value);
	return value;
}


obj_ intern__Symbol__Standard(obj_ this_)
{

		{
		/* Intern this Symbol.  It's a Symbol, therefore already interned. */
		return this_;
		
		
		}
	return nil;
}


obj_ intern_co___Symbol__Standard(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(built_in_table) UsingMethod_(built_in_table_co_) UsingMethod_(dynamic_table) UsingMethod_(dynamic_table_co_) UsingMethod_(start) UsingMethod_(stopper)
	extern obj_ new__BuiltInSymbols__Symbol__CImplementation__Standard(obj_ this_);
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new_co_to_co___Symbol__Standard(obj_ this_, obj_ start, obj_ stopper);
	UsingClass_(Dictionary__Standard)
	UsingClass_(BuiltInSymbols__Symbol__CImplementation__Standard)
	UsingClass_(Symbol__Standard)

		{
		obj_ result;
		/* First check the symbols that were present in the source. */
		t0_ = Call_(built_in_table, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = new__BuiltInSymbols__Symbol__CImplementation__Standard(Proto_(BuiltInSymbols__Symbol__CImplementation__Standard));
			t1_ = Call_(built_in_table_co_, this_, t0_);
			}
		t0_ = Call_(built_in_table, this_);
		t1_ = Call_(at_co_, t0_, name);
		result = t1_;
		if (result)
			{
			return result;
			
			}
		/* Next see if it's already in the dynamic symbol table. */
		t0_ = Call_(dynamic_table, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
			t1_ = Call_(dynamic_table_co_, this_, t0_);
			}
		t0_ = Call_(dynamic_table, this_);
		t1_ = Call_(at_co_, t0_, name);
		result = t1_;
		if (result)
			{
			return result;
			
			}
		/* Need to add it. */
		t0_ = Call_(start, name);
		t1_ = Call_(stopper, name);
		t2_ = new_co_to_co___Symbol__Standard(Proto_(Symbol__Standard), t0_, t1_);
		result = t2_;
		t0_ = Call_(dynamic_table, this_);
		t1_ = Call_(at_co_put_co_, t0_, name, result);
		return result;
		
		}
	return nil;
}


obj_ new_co_to_co___Symbol__Standard(obj_ this_, obj_ start, obj_ stopper)
{
	UsingClass_(Symbol__Standard)
	obj_ obj = AllocObj_(Symbol__Standard);
	create_co_to_co___Symbol__Standard(obj, start, stopper);
	return obj;
}


obj_ print_string__Symbol__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "'")
	DefineString_(1, "'")
	UsingMethod_(_pl_)

		{
		t0_ = Call_(_pl_, Str_(0), this_);
		t1_ = Call_(_pl_, t0_, Str_(1));
		return t1_;
		
		}
	return nil;
}


