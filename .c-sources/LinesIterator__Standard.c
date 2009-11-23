#include "Trylon_.h"

UsingSym_(LinesIterator)UsingClass_(Standard)
UsingClass_(Iterator__Standard)
UsingClass_(LinesIterator__Standard)
struct ClassInfo LinesIterator__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 46, 3, Proto_(LinesIterator__Standard), Proto_(Standard), Proto_(Iterator__Standard), nil, Sym_(LinesIterator), nil, nil };
struct object LinesIterator__Standard = 
	{ &LinesIterator__Standard__classInfo_, {nil, nil, nil} };



#define current_line__fld_	(0)
#define remaining_string__fld_	(1)
#define all_done__fld_	(2)


obj_ create_co___LinesIterator__Standard(obj_ this_, obj_ string)
{
	obj_ t0_;
	UsingMethod_(all_done_co_) UsingMethod_(go_forward) UsingMethod_(remaining_string_co_)

		{
		t0_ = Call_(remaining_string_co_, this_, string);
		t0_ = Call_(all_done_co_, this_, nil);
		t0_ = Call_(go_forward, this_);
		}
	return nil;
}


obj_ current_item__LinesIterator__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(current_line)

		{
		t0_ = Call_(current_line, this_);
		return t0_;
		}
	return nil;
}


obj_ go_forward__LinesIterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(10)
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, "")
	UsingMethod_(_pl_) UsingMethod_(all_done_co_) UsingMethod_(current_line_co_) UsingMethod_(index_of_co_) UsingMethod_(is_empty) UsingMethod_(remaining_string) UsingMethod_(remaining_string_co_) UsingMethod_(substr_co_) UsingMethod_(substr_co_length_co_)

		{
		obj_ newline_index;
		t0_ = Call_(remaining_string, this_);
		t1_ = Call_(is_empty, t0_);
		if (t1_)
			{
			t0_ = Call_(all_done_co_, this_, true_);
			return nil;
			}
		
		t0_ = Call_(remaining_string, this_);
		t1_ = Call_(index_of_co_, t0_, Int_(10));
		newline_index = t1_;
		t0_ = Not_(newline_index);
		if (t0_)
			{
			t0_ = Call_(remaining_string, this_);
			t1_ = Call_(current_line_co_, this_, t0_);
			t0_ = Call_(remaining_string_co_, this_, Str_(0));
			return nil;
			}
		
		t0_ = Call_(remaining_string, this_);
		t1_ = Call_(substr_co_length_co_, t0_, SmallInt_(0), newline_index);
		t2_ = Call_(current_line_co_, this_, t1_);
		t0_ = Call_(remaining_string, this_);
		t1_ = Call_(_pl_, newline_index, SmallInt_(1));
		t2_ = Call_(substr_co_, t0_, t1_);
		t3_ = Call_(remaining_string_co_, this_, t2_);
		}
	return nil;
}


obj_ is_done__LinesIterator__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(all_done)

		{
		t0_ = Call_(all_done, this_);
		return t0_;
		}
	return nil;
}


obj_ iterator__LinesIterator__Standard(obj_ this_)
{

		{
		return this_;
		}
	return nil;
}


obj_ new_co___LinesIterator__Standard(obj_ this_, obj_ string)
{
	UsingClass_(LinesIterator__Standard)
	obj_ obj = AllocObj_(LinesIterator__Standard);
	create_co___LinesIterator__Standard(obj, string);
	return obj;
}


