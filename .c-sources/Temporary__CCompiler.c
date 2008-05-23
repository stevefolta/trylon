#include "Trylon_.h"

UsingSym_(Temporary)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(Temporary__CCompiler)
struct ClassInfo Temporary__CCompiler__classInfo_ = 
	{ 172, 4, Proto_(Temporary__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(Temporary) ,nil };
struct object Temporary__CCompiler = 
	{ &Temporary__CCompiler__classInfo_, {nil} };


#define name__fld_	(0)


obj_ access__Temporary__CCompiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(name)

		{
		t0_ = Call_(name, this_);
		return t0_;
		
		
		}
	return nil;
}


obj_ create_co___Temporary__CCompiler(obj_ this_, obj_ index)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "t")
	DefineString_(1, "_")
	UsingMethod_(_pl_) UsingMethod_(name_co_) UsingMethod_(string)

		{
		t0_ = Call_(string, index);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(name_co_, this_, t2_);
		
		}
	return nil;
}


obj_ emit_declaration_co___Temporary__CCompiler(obj_ this_, obj_ stream)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 3)
	DefineString_(0, "\tobj_ ")
	DefineString_(1, ";\n")
	UsingMethod_(name) UsingMethod_(write_all_co_)

		{
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(0));
		t0_->fields[1] = Str_(0);
		t1_ = Call_(name, this_);
		t0_->fields[2] = t1_;
		t0_->fields[3] = Str_(1);
		t2_ = Call_(write_all_co_, stream, t0_);
		
		}
	return nil;
}


obj_ index_co___Temporary__CCompiler(obj_ this_, obj_ new_index)
{

		{
		/* Don't do anything; we already have our index, but an IndexedResources will */
		/* try to set our index when we're added to it. */
		
		}
	return nil;
}


obj_ name__Temporary__CCompiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___Temporary__CCompiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co___Temporary__CCompiler(obj_ this_, obj_ index)
{
	UsingClass_(Temporary__CCompiler)
	obj_ obj = AllocObj_(Temporary__CCompiler);
	create_co___Temporary__CCompiler(obj, index);
	return obj;
}


