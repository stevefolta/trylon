#include "Trylon_.h"

UsingClass_(Cell__List__Standard) UsingClass_(Iterator__List__Standard) 
static obj_ tu0_[];
UsingSym_(List)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(List__Standard)
struct ClassInfo List__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 14, 2, Proto_(List__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(List), nil, ((obj_) tu0_) };
struct object List__Standard = 
	{ &List__Standard__classInfo_, {nil, nil} };

	UsingInt_(2)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(2), Proto_(Cell__List__Standard), Proto_(Iterator__List__Standard) };

#define first_cell__fld_	(0)
#define last_cell__fld_	(1)


obj_ Cell__List__Standard__accessor_(obj_ this_)
{
	UsingClass_(Cell__List__Standard)
	return Proto_(Cell__List__Standard);
}


obj_ Iterator__List__Standard__accessor_(obj_ this_)
{
	UsingClass_(Iterator__List__Standard)
	return Proto_(Iterator__List__Standard);
}


obj_ append_co___List__Standard(obj_ this_, obj_ object)
{
	extern obj_ new_co___Cell__List__Standard(obj_ this_, obj_ object);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(first_cell) UsingMethod_(first_cell_co_) UsingMethod_(last_cell) UsingMethod_(last_cell_co_) UsingMethod_(next_co_)
	UsingClass_(Cell__List__Standard)

		{
		obj_ cell;
		t0_ = new_co___Cell__List__Standard(Proto_(Cell__List__Standard), object);
		cell = t0_;
		t0_ = Call_(last_cell, this_);
		t1_ = Bool_(t0_);
		if (t1_)
			{
			t0_ = Call_(last_cell, this_);
			t1_ = Call_(next_co_, t0_, cell);
			}
		t0_ = Call_(last_cell_co_, this_, cell);
		t0_ = Call_(first_cell, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(first_cell_co_, this_, cell);
			}
		}
	return nil;
}


obj_ clear__List__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(first_cell_co_) UsingMethod_(last_cell_co_)

		{
		t0_ = Call_(first_cell_co_, this_, nil);
		t0_ = Call_(last_cell_co_, this_, nil);
		}
	return nil;
}


obj_ contains_co___List__Standard(obj_ this_, obj_ object)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(first_cell) UsingMethod_(next) UsingMethod_(object) UsingMethod_(same_as_co_)

		{
		obj_ cell;
		t0_ = Call_(first_cell, this_);
		cell = t0_;
		while (1) {
			ContinuePoint_(0)
			if (!(cell))
				Break_(0)
			{
			t0_ = Call_(object, cell);
			t1_ = Call_(same_as_co_, t0_, object);
			if (t1_)
				{
				return true_;
				}
			t0_ = Call_(next, cell);
			cell = t0_;
			}
			}
		return nil;
		}
	return nil;
}


obj_ count__List__Standard(obj_ this_)
{
	obj_ t0_;
	UsingInt_(0)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(first_cell) UsingMethod_(next)

		{
		obj_ cell, num_items;
		num_items = SmallInt_(0);
		t0_ = Call_(first_cell, this_);
		cell = t0_;
		while (1) {
			ContinuePoint_(0)
			if (!(cell))
				Break_(0)
			{
			t0_ = Call_(_pl_, num_items, SmallInt_(1));
			num_items = t0_;
			t0_ = Call_(next, cell);
			cell = t0_;
			}
			}
		return num_items;
		}
	return nil;
}


obj_ create__List__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(first_cell_co_) UsingMethod_(last_cell_co_)

		{
		t0_ = Call_(first_cell_co_, this_, nil);
		t0_ = Call_(last_cell_co_, this_, nil);
		}
	return nil;
}


obj_ first_item__List__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(first_cell) UsingMethod_(object)

		{
		t0_ = Call_(first_cell, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(first_cell, this_);
		t1_ = Call_(object, t0_);
		return t1_;
		}
	return nil;
}


obj_ head__List__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(first_item)

		{
		t0_ = Call_(first_item, this_);
		return t0_;
		}
	return nil;
}


obj_ insert_co_before_co___List__Standard(obj_ this_, obj_ new_object, obj_ before_object)
{
	extern obj_ new_co___Cell__List__Standard(obj_ this_, obj_ object);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(first_cell) UsingMethod_(first_cell_co_) UsingMethod_(next) UsingMethod_(next_co_) UsingMethod_(object) UsingMethod_(same_as_co_)
	UsingClass_(Cell__List__Standard)

		{
		obj_ cell, prev_cell;
		t0_ = Call_(first_cell, this_);
		cell = t0_;
		prev_cell = nil;
		while (1) {
			ContinuePoint_(0)
			if (!(cell))
				Break_(0)
			{
			t0_ = Call_(object, cell);
			t1_ = Call_(same_as_co_, t0_, before_object);
			if (t1_)
				{
				obj_ new_cell;
				t0_ = new_co___Cell__List__Standard(Proto_(Cell__List__Standard), new_object);
				new_cell = t0_;
				t0_ = Call_(next_co_, new_cell, cell);
				if (prev_cell)
					{
					t0_ = Call_(next_co_, prev_cell, new_cell);
					}
				else
					{
					t0_ = Call_(first_cell_co_, this_, new_cell);
					}
				return nil;
				}
			prev_cell = cell;
			t0_ = Call_(next, cell);
			cell = t0_;
			}
			}
		}
	return nil;
}


obj_ is_empty__List__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(first_cell)

		{
		t0_ = Call_(first_cell, this_);
		t1_ = Not_(t0_);
		return t1_;
		}
	return nil;
}


obj_ iterator__List__Standard(obj_ this_)
{
	extern obj_ new_co___Iterator__List__Standard(obj_ this_, obj_ cell);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(first_cell)
	UsingClass_(Iterator__List__Standard)

		{
		t0_ = Call_(first_cell, this_);
		t1_ = new_co___Iterator__List__Standard(Proto_(Iterator__List__Standard), t0_);
		return t1_;
		}
	return nil;
}


obj_ last_item__List__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(last_cell) UsingMethod_(object)

		{
		t0_ = Call_(last_cell, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			}
		t0_ = Call_(last_cell, this_);
		t1_ = Call_(object, t0_);
		return t1_;
		}
	return nil;
}


obj_ new__List__Standard(obj_ this_)
{
	UsingClass_(List__Standard)
	obj_ obj = AllocObj_(List__Standard);
	create__List__Standard(obj);
	return obj;
}


obj_ num_items__List__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(count)

		{
		t0_ = Call_(count, this_);
		return t0_;
		}
	return nil;
}


obj_ pop_front__List__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(_eq__eq_) UsingMethod_(first_cell) UsingMethod_(first_cell_co_) UsingMethod_(last_cell) UsingMethod_(last_cell_co_) UsingMethod_(next) UsingMethod_(object)

		{
		obj_ object;
		t0_ = Call_(first_cell, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			}
		
		t0_ = Call_(first_cell, this_);
		t1_ = Call_(object, t0_);
		object = t1_;
		
		t0_ = Call_(first_cell, this_);
		t1_ = Call_(last_cell, this_);
		t2_ = Call_(_eq__eq_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(first_cell_co_, this_, nil);
			t0_ = Call_(last_cell_co_, this_, nil);
			}
		else
			{
			t0_ = Call_(first_cell, this_);
			t1_ = Call_(next, t0_);
			t2_ = Call_(first_cell_co_, this_, t1_);
			}
		
		return object;
		}
	return nil;
}


obj_ prepend_co___List__Standard(obj_ this_, obj_ object)
{
	extern obj_ new_co___Cell__List__Standard(obj_ this_, obj_ object);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(first_cell) UsingMethod_(first_cell_co_) UsingMethod_(next_co_)
	UsingClass_(Cell__List__Standard)

		{
		obj_ cell;
		t0_ = new_co___Cell__List__Standard(Proto_(Cell__List__Standard), object);
		cell = t0_;
		t0_ = Call_(first_cell, this_);
		t1_ = Call_(next_co_, cell, t0_);
		t0_ = Call_(first_cell_co_, this_, cell);
		}
	return nil;
}


obj_ push_front_co___List__Standard(obj_ this_, obj_ object)
{
	obj_ t0_;
	UsingMethod_(prepend_co_)

		{
		t0_ = Call_(prepend_co_, this_, object);
		}
	return nil;
}


obj_ remove_co___List__Standard(obj_ this_, obj_ object)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(first_cell) UsingMethod_(first_cell_co_) UsingMethod_(last_cell) UsingMethod_(last_cell_co_) UsingMethod_(next) UsingMethod_(next_co_) UsingMethod_(object)

		{
		obj_ cell, prev_cell;
		t0_ = Call_(first_cell, this_);
		cell = t0_;
		prev_cell = nil;
		while (1) {
			ContinuePoint_(0)
			if (!(cell))
				Break_(0)
			{
			t0_ = Call_(object, cell);
			t1_ = Call_(_eq__eq_, t0_, object);
			if (t1_)
				{
				/*  Unlink the cell. */
				if (prev_cell)
					{
					t0_ = Call_(next, cell);
					t1_ = Call_(next_co_, prev_cell, t0_);
					}
				else
					{
					t0_ = Call_(next, cell);
					t1_ = Call_(first_cell_co_, this_, t0_);
					}
				/*  Is it the last cell? */
				t0_ = Call_(last_cell, this_);
				t1_ = Call_(_eq__eq_, cell, t0_);
				if (t1_)
					{
					t0_ = Call_(last_cell_co_, this_, prev_cell);
					}
				Break_(0)
				}
			
			prev_cell = cell;
			t0_ = Call_(next, cell);
			cell = t0_;
			}
			}
		}
	return nil;
}


obj_ replace_co_with_co___List__Standard(obj_ this_, obj_ old_object, obj_ new_object)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(first_cell) UsingMethod_(next) UsingMethod_(object) UsingMethod_(object_co_) UsingMethod_(same_as_co_)

		{
		obj_ cell;
		t0_ = Call_(first_cell, this_);
		cell = t0_;
		while (1) {
			ContinuePoint_(0)
			if (!(cell))
				Break_(0)
			{
			t0_ = Call_(object, cell);
			t1_ = Call_(same_as_co_, t0_, old_object);
			if (t1_)
				{
				t0_ = Call_(object_co_, cell, new_object);
				return nil;
				}
			t0_ = Call_(next, cell);
			cell = t0_;
			}
			}
		}
	return nil;
}


obj_ tail__List__Standard(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(first_cell) UsingMethod_(first_cell_co_) UsingMethod_(last_cell) UsingMethod_(last_cell_co_) UsingMethod_(next)
	UsingClass_(List__Standard)

		{
		obj_ tail_list;
		t0_ = new__List__Standard(Proto_(List__Standard));
		tail_list = t0_;
		t0_ = Call_(first_cell, this_);
		if (t0_)
			{
			t0_ = Call_(first_cell, this_);
			t1_ = Call_(next, t0_);
			t2_ = Call_(first_cell_co_, tail_list, t1_);
			}
		else
			{
			t0_ = Call_(first_cell_co_, tail_list, nil);
			}
		t0_ = Call_(last_cell, this_);
		t1_ = Call_(last_cell_co_, tail_list, t0_);
		return tail_list;
		}
	return nil;
}


obj_ with_co___List__Standard(obj_ this_, obj_ value)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	UsingMethod_(append_co_)
	UsingClass_(List__Standard)

		{
		obj_ list;
		t0_ = new__List__Standard(Proto_(List__Standard));
		list = t0_;
		t0_ = Call_(append_co_, list, value);
		return list;
		}
	return nil;
}


obj_ with_co_and_co___List__Standard(obj_ this_, obj_ value_1, obj_ value_2)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	UsingMethod_(append_co_)
	UsingClass_(List__Standard)

		{
		obj_ list;
		t0_ = new__List__Standard(Proto_(List__Standard));
		list = t0_;
		t0_ = Call_(append_co_, list, value_1);
		t0_ = Call_(append_co_, list, value_2);
		return list;
		}
	return nil;
}


obj_ with_co_and_co_and_co___List__Standard(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	UsingMethod_(append_co_)
	UsingClass_(List__Standard)

		{
		obj_ list;
		t0_ = new__List__Standard(Proto_(List__Standard));
		list = t0_;
		t0_ = Call_(append_co_, list, value_1);
		t0_ = Call_(append_co_, list, value_2);
		t0_ = Call_(append_co_, list, value_3);
		return list;
		}
	return nil;
}


