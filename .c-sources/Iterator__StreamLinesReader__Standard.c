#include "Trylon_.h"

UsingSym_(Iterator)UsingClass_(StreamLinesReader__Standard)
UsingClass_(Iterator__Standard)
UsingClass_(Iterator__StreamLinesReader__Standard)
struct ClassInfo Iterator__StreamLinesReader__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 47, 2, Proto_(Iterator__StreamLinesReader__Standard), Proto_(StreamLinesReader__Standard), Proto_(Iterator__Standard), nil, Sym_(Iterator), nil, nil };
struct object Iterator__StreamLinesReader__Standard = 
	{ &Iterator__StreamLinesReader__Standard__classInfo_, {nil, nil} };



#define reader__fld_	(0)
#define current_item__fld_	(1)


obj_ create_co___Iterator__StreamLinesReader__Standard(obj_ this_, obj_ reader)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(current_item_co_) UsingMethod_(next) UsingMethod_(reader_co_)

		{
		t0_ = Call_(reader_co_, this_, reader);
		t0_ = Call_(next, reader);
		t1_ = Call_(current_item_co_, this_, t0_);
		}
	return nil;
}


obj_ go_forward__Iterator__StreamLinesReader__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(current_item_co_) UsingMethod_(next) UsingMethod_(reader)

		{
		t0_ = Call_(reader, this_);
		t1_ = Call_(next, t0_);
		t2_ = Call_(current_item_co_, this_, t1_);
		}
	return nil;
}


obj_ is_done__Iterator__StreamLinesReader__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(current_item)

		{
		t0_ = Call_(current_item, this_);
		t1_ = Not_(t0_);
		return t1_;
		}
	return nil;
}


obj_ new_co___Iterator__StreamLinesReader__Standard(obj_ this_, obj_ reader)
{
	UsingClass_(Iterator__StreamLinesReader__Standard)
	obj_ obj = AllocObj_(Iterator__StreamLinesReader__Standard);
	create_co___Iterator__StreamLinesReader__Standard(obj, reader);
	return obj;
}


