#include "Trylon_.h"

UsingSym_(IndexedResources)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(IndexedResources__CCompiler)
struct ClassInfo IndexedResources__CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 212, 2, Proto_(IndexedResources__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(IndexedResources), nil, nil };
struct object IndexedResources__CCompiler = 
	{ &IndexedResources__CCompiler__classInfo_, {nil, nil} };


#define resources__fld_	(0)
#define next_index__fld_	(1)


obj_ add_co___IndexedResources__CCompiler(obj_ this_, obj_ resource)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(index_co_) UsingMethod_(next_index) UsingMethod_(next_index_co_) UsingMethod_(resources)

		{
		t0_ = Call_(next_index, this_);
		t1_ = Call_(index_co_, resource, t0_);
		t0_ = Call_(next_index, this_);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(next_index_co_, this_, t1_);
		t0_ = Call_(resources, this_);
		t1_ = Call_(append_co_, t0_, resource);
		}
	return nil;
}


obj_ create__IndexedResources__CCompiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingMethod_(next_index_co_) UsingMethod_(resources_co_)
	UsingClass_(List__Standard)

		{
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(resources_co_, this_, t0_);
		t0_ = Call_(next_index_co_, this_, SmallInt_(0));
		}
	return nil;
}


obj_ emit_declarations_on_co___IndexedResources__CCompiler(obj_ this_, obj_ stream)
{
	obj_ t0_;
	UsingMethod_(current_item) UsingMethod_(emit_declaration_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(resources)

		{
		t0_ = Call_(resources, this_);
		ForStart_(0, t0_, resource)
			{
			t0_ = Call_(emit_declaration_co_, resource, stream);
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ new__IndexedResources__CCompiler(obj_ this_)
{
	UsingClass_(IndexedResources__CCompiler)
	obj_ obj = AllocObj_(IndexedResources__CCompiler);
	create__IndexedResources__CCompiler(obj);
	return obj;
}


