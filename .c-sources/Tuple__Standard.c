#include "Trylon_.h"

UsingClass_(Iterator__Tuple__Standard) 
static obj_ tu0_[];
UsingSym_(Tuple)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Tuple__Standard)
struct ClassInfo Tuple__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 22, 1, Proto_(Tuple__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Tuple), nil, ((obj_) tu0_) };
struct object Tuple__Standard = 
	{ &Tuple__Standard__classInfo_, {nil} };

	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(Iterator__Tuple__Standard) };

#define num_items__fld_	(0)


obj_ Iterator__Tuple__Standard__accessor_(obj_ this_)
{
	UsingClass_(Iterator__Tuple__Standard)
	return Proto_(Iterator__Tuple__Standard);
}


obj_ at_co___Tuple__Standard(obj_ this_, obj_ index)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingInt_(2)
	DefineString_(0, "Bad tuple index.")
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_gt__eq_) UsingMethod_(num_items) UsingMethod_(object_at_co_) UsingMethod_(object_ptr)
	UsingClass_(MessageException__Standard)

		{
		t0_ = Call_(_lt_, index, SmallInt_(0));
		if ((t0_) == nil) {
			t1_ = Call_(num_items, this_);
			t2_ = Call_(_gt__eq_, index, t1_);
			t0_ = t2_;
			}
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t0_);
			}
			{
			t1_ = Call_(object_ptr, this_);
			t2_ = Call_(_pl_, index, SmallInt_(2));
			t3_ = Call_(object_at_co_, t1_, t2_);
			return t3_;
			}
		}
	return nil;
}


obj_ at_co_put_co___Tuple__Standard(obj_ this_, obj_ index, obj_ value)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingInt_(2)
	DefineString_(0, "Bad tuple index.")
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_gt__eq_) UsingMethod_(num_items) UsingMethod_(object_at_co_put_co_) UsingMethod_(object_ptr)
	UsingClass_(MessageException__Standard)

		{
		t0_ = Call_(_lt_, index, SmallInt_(0));
		if ((t0_) == nil) {
			t1_ = Call_(num_items, this_);
			t2_ = Call_(_gt__eq_, index, t1_);
			t0_ = t2_;
			}
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t0_);
			}
			{
			t1_ = Call_(object_ptr, this_);
			t2_ = Call_(_pl_, index, SmallInt_(2));
			t3_ = Call_(object_at_co_put_co_, t1_, t2_, value);
			}
		}
	return nil;
}


obj_ at_co_set_to_co___Tuple__Standard(obj_ this_, obj_ index, obj_ value)
{
	obj_ t0_;
	UsingMethod_(at_co_put_co_)

		{
		t0_ = Call_(at_co_put_co_, this_, index, value);
		}
	return nil;
}


obj_ count__Tuple__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(num_items)

		{
		t0_ = Call_(num_items, this_);
		return t0_;
		}
	return nil;
}


obj_ first__Tuple__Standard(obj_ this_)
{
	obj_ t0_;
	UsingInt_(0)
	UsingMethod_(at_co_)

		{
		t0_ = Call_(at_co_, this_, SmallInt_(0));
		return t0_;
		}
	return nil;
}


obj_ iterator__Tuple__Standard(obj_ this_)
{
	extern obj_ new_co___Iterator__Tuple__Standard(obj_ this_, obj_ tuple);
	obj_ t0_;
	UsingClass_(Iterator__Tuple__Standard)

		{
		t0_ = new_co___Iterator__Tuple__Standard(Proto_(Iterator__Tuple__Standard), this_);
		return t0_;
		}
	return nil;
}


obj_ new_co___Tuple__Standard(obj_ this_, obj_ num_items)
{
	extern obj_ allocate_object_co_with_extra_slots_co___Implementation__Standard(obj_ this_, obj_ proto, obj_ num_extra_slots);
	obj_ t0_;
	UsingMethod_(num_items_co_)
	UsingClass_(Implementation__Standard)
	UsingClass_(Tuple__Standard)

		{
		obj_ tuple;
		t0_ = allocate_object_co_with_extra_slots_co___Implementation__Standard(Proto_(Implementation__Standard), Proto_(Tuple__Standard), num_items);
		tuple = t0_;
		t0_ = Call_(num_items_co_, tuple, num_items);
		return tuple;
		}
	return nil;
}


obj_ second__Tuple__Standard(obj_ this_)
{
	obj_ t0_;
	UsingInt_(1)
	UsingMethod_(at_co_)

		{
		t0_ = Call_(at_co_, this_, SmallInt_(1));
		return t0_;
		}
	return nil;
}


obj_ string__Tuple__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "(")
	DefineString_(1, ", ")
	DefineString_(2, "nil")
	DefineString_(3, ")")
	UsingMethod_(_pl_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(print_string)

		{
		obj_ have_item, result;
		result = Str_(0);
		have_item = nil;
		ForStart_(0, this_, item)
			{
			if (have_item)
				{
				t0_ = Call_(_pl_, result, Str_(1));
				result = t0_;
				}
			else
				{
				have_item = true_;
				}
			if (item)
				{
				t0_ = Call_(print_string, item);
				t1_ = Call_(_pl_, result, t0_);
				result = t1_;
				}
			else
				{
				t0_ = Call_(_pl_, result, Str_(2));
				result = t0_;
				}
			}
		ForEnd_(0)
		t0_ = Call_(_pl_, result, Str_(3));
		result = t0_;
		return result;
		}
	return nil;
}


obj_ third__Tuple__Standard(obj_ this_)
{
	obj_ t0_;
	UsingInt_(2)
	UsingMethod_(at_co_)

		{
		t0_ = Call_(at_co_, this_, SmallInt_(2));
		return t0_;
		}
	return nil;
}


