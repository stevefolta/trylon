#include "Trylon_.h"

UsingSym_(LinesIterator)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(LinesIterator__Standard)
struct ClassInfo LinesIterator__Standard__classInfo_ = 
	{ 54, 3, Proto_(LinesIterator__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(LinesIterator) ,nil };
struct object LinesIterator__Standard = 
	{ &LinesIterator__Standard__classInfo_, {nil, nil, nil} };


#define current_line__fld_	(0)
#define remaining_string__fld_	(1)
#define all_done__fld_	(2)


obj_ all_done__LinesIterator__Standard(obj_ this_)
{
	return Field_(all_done);
}


obj_ all_done_co___LinesIterator__Standard(obj_ this_, obj_ value)
{
	Field_(all_done) = value;
	return value;
}


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


obj_ current_line__LinesIterator__Standard(obj_ this_)
{
	return Field_(current_line);
}


obj_ current_line_co___LinesIterator__Standard(obj_ this_, obj_ value)
{
	Field_(current_line) = value;
	return value;
}


obj_ go_forward__LinesIterator__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 10)
	DefineInt_(1, -1)
	DefineInt_(2, 0)
	DefineInt_(3, 1)
	DefineString_(0, "")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(all_done_co_) UsingMethod_(current_line_co_) UsingMethod_(index_of_co_) UsingMethod_(is_empty) UsingMethod_(remaining_string) UsingMethod_(remaining_string_co_) UsingMethod_(substr_co_) UsingMethod_(substr_co_length_co_)

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
		t1_ = Call_(index_of_co_, t0_, Int_(0));
		newline_index = t1_;
		t0_ = Call_(_eq__eq_, newline_index, Int_(1));
		if (t0_)
			{
			t0_ = Call_(remaining_string, this_);
			t1_ = Call_(current_line_co_, this_, t0_);
			t0_ = Call_(remaining_string_co_, this_, Str_(0));
			return nil;
			
			}
		t0_ = Call_(remaining_string, this_);
		t1_ = Call_(substr_co_length_co_, t0_, Int_(2), newline_index);
		t2_ = Call_(current_line_co_, this_, t1_);
		t0_ = Call_(remaining_string, this_);
		t1_ = Call_(_pl_, newline_index, Int_(3));
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


obj_ remaining_string__LinesIterator__Standard(obj_ this_)
{
	return Field_(remaining_string);
}


obj_ remaining_string_co___LinesIterator__Standard(obj_ this_, obj_ value)
{
	Field_(remaining_string) = value;
	return value;
}


