#include "Trylon_.h"

UsingSym_(Dictionary)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Dictionary__Standard)
struct ClassInfo Dictionary__Standard__classInfo_ = 
	{ 37, 8, Proto_(Dictionary__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Dictionary) ,nil };
struct object Dictionary__Standard = 
	{ &Dictionary__Standard__classInfo_, {nil, nil} };


#define root__fld_	(0)
#define num_items__fld_	(1)


obj_ Iterator__Dictionary__Standard__accessor_(obj_ this_)
{
	UsingClass_(Iterator__Dictionary__Standard)
	return Proto_(Iterator__Dictionary__Standard);
}


obj_ KeyValuePairsIterator__Dictionary__Standard__accessor_(obj_ this_)
{
	UsingClass_(KeyValuePairsIterator__Dictionary__Standard)
	return Proto_(KeyValuePairsIterator__Dictionary__Standard);
}


obj_ KeysIterator__Dictionary__Standard__accessor_(obj_ this_)
{
	UsingClass_(KeysIterator__Dictionary__Standard)
	return Proto_(KeysIterator__Dictionary__Standard);
}


obj_ Node__Dictionary__Standard__accessor_(obj_ this_)
{
	UsingClass_(Node__Dictionary__Standard)
	return Proto_(Node__Dictionary__Standard);
}


obj_ RemoveContext__Dictionary__Standard__accessor_(obj_ this_)
{
	UsingClass_(RemoveContext__Dictionary__Standard)
	return Proto_(RemoveContext__Dictionary__Standard);
}


obj_ ValuesIterator__Dictionary__Standard__accessor_(obj_ this_)
{
	UsingClass_(ValuesIterator__Dictionary__Standard)
	return Proto_(ValuesIterator__Dictionary__Standard);
}


obj_ at_co___Dictionary__Standard(obj_ this_, obj_ key)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(key) UsingMethod_(left) UsingMethod_(right) UsingMethod_(root) UsingMethod_(value)

		{
		obj_ node;
		t0_ = Call_(root, this_);
		node = t0_;
		while (1) {
			ContinuePoint_(0)
			if (!(node))
				Break_(0)
			{
			t0_ = Call_(key, node);
			t1_ = Call_(_lt_, key, t0_);
			if (t1_)
				{
				t0_ = Call_(left, node);
				node = t0_;
				}
			else
				{
				t0_ = Call_(key, node);
				t1_ = Call_(_gt_, key, t0_);
				if (t1_)
					{
					t0_ = Call_(right, node);
					node = t0_;
					}
				else
					{
					t0_ = Call_(value, node);
					return t0_;
					}
				}
			}
			}
		return nil;
		
		
		}
	return nil;
}


obj_ at_co_put_co___Dictionary__Standard(obj_ this_, obj_ key, obj_ value)
{
	obj_ t0_;
	UsingMethod_(insert_co_at_co_)

		{
		t0_ = Call_(insert_co_at_co_, this_, value, key);
		
		
		}
	return nil;
}


obj_ contains_co___Dictionary__Standard(obj_ this_, obj_ key)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(key) UsingMethod_(left) UsingMethod_(right) UsingMethod_(root)

		{
		obj_ node;
		t0_ = Call_(root, this_);
		node = t0_;
		while (1) {
			ContinuePoint_(0)
			if (!(node))
				Break_(0)
			{
			t0_ = Call_(key, node);
			t1_ = Call_(_lt_, key, t0_);
			if (t1_)
				{
				t0_ = Call_(left, node);
				node = t0_;
				}
			else
				{
				t0_ = Call_(key, node);
				t1_ = Call_(_gt_, key, t0_);
				if (t1_)
					{
					t0_ = Call_(right, node);
					node = t0_;
					}
				else
					{
					return true_;
					}
				}
			}
			}
		return nil;
		
		
		}
	return nil;
}


obj_ count__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(num_items)

		{
		t0_ = Call_(num_items, this_);
		return t0_;
		}
	return nil;
}


obj_ create__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	DefineInt_(0, 0)
	UsingMethod_(num_items_co_) UsingMethod_(root_co_)

		{
		t0_ = Call_(root_co_, this_, nil);
		t0_ = Call_(num_items_co_, this_, Int_(0));
		
		
		}
	return nil;
}


obj_ insert_co_at_co___Dictionary__Standard(obj_ this_, obj_ value, obj_ key)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	UsingMethod_(_pl_) UsingMethod_(insert_co_at_co_) UsingMethod_(num_items) UsingMethod_(num_items_co_) UsingMethod_(root) UsingMethod_(root_co_)
	extern obj_ new_co_value_co___Node__Dictionary__Standard(obj_ this_, obj_ key, obj_ value);
	UsingClass_(Node__Dictionary__Standard)

		{
		t0_ = Call_(root, this_);
		if (t0_)
			{
			obj_ insert_result;
			t0_ = Call_(root, this_);
			t1_ = Call_(insert_co_at_co_, t0_, value, key);
			insert_result = t1_;
			if (insert_result)
				{
				t0_ = Call_(root_co_, this_, insert_result);
				t0_ = Call_(num_items, this_);
				t1_ = Call_(_pl_, t0_, Int_(0));
				t2_ = Call_(num_items_co_, this_, t1_);
				}
			else
				{
				/* The key was already present. */
				}
			}
		else
			{
			/* Empty so far. */
			t0_ = new_co_value_co___Node__Dictionary__Standard(Proto_(Node__Dictionary__Standard), key, value);
			t1_ = Call_(root_co_, this_, t0_);
			t0_ = Call_(num_items, this_);
			t1_ = Call_(_pl_, t0_, Int_(1));
			t2_ = Call_(num_items_co_, this_, t1_);
			
			}
		}
	return nil;
}


obj_ is_empty__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 0)
	UsingMethod_(_eq__eq_) UsingMethod_(num_items)

		{
		t0_ = Call_(num_items, this_);
		t1_ = Call_(_eq__eq_, t0_, Int_(0));
		return t1_;
		
		
		}
	return nil;
}


obj_ keys__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(root)
	extern obj_ new_co___KeysIterator__Dictionary__Standard(obj_ this_, obj_ root);
	UsingClass_(KeysIterator__Dictionary__Standard)

		{
		t0_ = Call_(root, this_);
		t1_ = new_co___KeysIterator__Dictionary__Standard(Proto_(KeysIterator__Dictionary__Standard), t0_);
		return t1_;
		}
	return nil;
}


obj_ new__Dictionary__Standard(obj_ this_)
{
	UsingClass_(Dictionary__Standard)
	obj_ obj = AllocObj_(Dictionary__Standard);
	create__Dictionary__Standard(obj);
	return obj;
}


obj_ num_items__Dictionary__Standard(obj_ this_)
{
	return Field_(num_items);
}


obj_ num_items_co___Dictionary__Standard(obj_ this_, obj_ value)
{
	Field_(num_items) = value;
	return value;
}


obj_ pairs__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(root)
	extern obj_ new_co___KeyValuePairsIterator__Dictionary__Standard(obj_ this_, obj_ root);
	UsingClass_(KeyValuePairsIterator__Dictionary__Standard)

		{
		t0_ = Call_(root, this_);
		t1_ = new_co___KeyValuePairsIterator__Dictionary__Standard(Proto_(KeyValuePairsIterator__Dictionary__Standard), t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ remove_co___Dictionary__Standard(obj_ this_, obj_ key)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	UsingMethod_(_) UsingMethod_(deleted_value) UsingMethod_(item_found) UsingMethod_(num_items) UsingMethod_(num_items_co_) UsingMethod_(remove_co_) UsingMethod_(root) UsingMethod_(root_co_)
	extern obj_ new_co___RemoveContext__Dictionary__Standard(obj_ this_, obj_ key);
	UsingClass_(RemoveContext__Dictionary__Standard)

		{
		obj_ context;
		t0_ = Call_(root, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			
			}
		t0_ = new_co___RemoveContext__Dictionary__Standard(Proto_(RemoveContext__Dictionary__Standard), key);
		context = t0_;
		t0_ = Call_(root, this_);
		t1_ = Call_(remove_co_, t0_, context);
		t2_ = Call_(root_co_, this_, t1_);
		
		t0_ = Call_(item_found, context);
		if (t0_)
			{
			t0_ = Call_(num_items, this_);
			t1_ = Call_(_, t0_, Int_(0));
			t2_ = Call_(num_items_co_, this_, t1_);
			}
		t0_ = Call_(deleted_value, context);
		return t0_;
		
		
		}
	return nil;
}


obj_ root__Dictionary__Standard(obj_ this_)
{
	return Field_(root);
}


obj_ root_co___Dictionary__Standard(obj_ this_, obj_ value)
{
	Field_(root) = value;
	return value;
}


obj_ values__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(root)
	extern obj_ new_co___ValuesIterator__Dictionary__Standard(obj_ this_, obj_ root);
	UsingClass_(ValuesIterator__Dictionary__Standard)

		{
		t0_ = Call_(root, this_);
		t1_ = new_co___ValuesIterator__Dictionary__Standard(Proto_(ValuesIterator__Dictionary__Standard), t0_);
		return t1_;
		}
	return nil;
}


