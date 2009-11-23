#include "Trylon_.h"

UsingSym_(Node)UsingClass_(Dictionary__Standard)
UsingClass_(Object__Standard)
UsingClass_(Node__Dictionary__Standard)
struct ClassInfo Node__Dictionary__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 78, 5, Proto_(Node__Dictionary__Standard), Proto_(Dictionary__Standard), Proto_(Object__Standard), nil, Sym_(Node), nil, nil };
struct object Node__Dictionary__Standard = 
	{ &Node__Dictionary__Standard__classInfo_, {nil, nil, nil, nil, nil} };


#define key__fld_	(0)
#define value__fld_	(1)
#define left__fld_	(2)
#define right__fld_	(3)
#define level__fld_	(4)


obj_ create_co_value_co___Node__Dictionary__Standard(obj_ this_, obj_ key, obj_ value)
{
	obj_ t0_;
	UsingInt_(1)
	UsingMethod_(key_co_) UsingMethod_(left_co_) UsingMethod_(level_co_) UsingMethod_(right_co_) UsingMethod_(value_co_)

		{
		t0_ = Call_(key_co_, this_, key);
		t0_ = Call_(value_co_, this_, value);
		t0_ = Call_(left_co_, this_, nil);
		t0_ = Call_(right_co_, this_, nil);
		t0_ = Call_(level_co_, this_, SmallInt_(1));
		}
	return nil;
}


obj_ insert_co_at_co___Node__Dictionary__Standard(obj_ this_, obj_ new_value, obj_ new_key)
{
	extern obj_ new_co_value_co___Node__Dictionary__Standard(obj_ this_, obj_ key, obj_ value);
	extern obj_ new_co_value_co___Node__Dictionary__Standard(obj_ this_, obj_ key, obj_ value);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_lt_) UsingMethod_(insert_co_at_co_) UsingMethod_(key) UsingMethod_(left) UsingMethod_(left_co_) UsingMethod_(right) UsingMethod_(right_co_) UsingMethod_(skew) UsingMethod_(split) UsingMethod_(value_co_)
	UsingClass_(Node__Dictionary__Standard)

		{
		obj_ new_top;
		t0_ = Call_(key, this_);
		t1_ = Call_(_lt_, new_key, t0_);
		if (t1_)
			{
			t0_ = Call_(left, this_);
			if (t0_)
				{
				obj_ insert_result;
				t0_ = Call_(left, this_);
				t1_ = Call_(insert_co_at_co_, t0_, new_value, new_key);
				insert_result = t1_;
				if (insert_result)
					{
					t0_ = Call_(left_co_, this_, insert_result);
					}
				else
					{
					return nil; 	/*  Key already exists; propagate that up. */
					}
				}
			else
				{
				t0_ = new_co_value_co___Node__Dictionary__Standard(Proto_(Node__Dictionary__Standard), new_key, new_value);
				t1_ = Call_(left_co_, this_, t0_);
				}
			}
		else
			{
			t0_ = Call_(key, this_);
			t1_ = Call_(_lt_, t0_, new_key);
			if (t1_)
				{
				t0_ = Call_(right, this_);
				if (t0_)
					{
					obj_ insert_result;
					t0_ = Call_(right, this_);
					t1_ = Call_(insert_co_at_co_, t0_, new_value, new_key);
					insert_result = t1_;
					if (insert_result)
						{
						t0_ = Call_(right_co_, this_, insert_result);
						}
					else
						{
						return nil; 	/*  Key already exists; propagate that up. */
						}
					}
				else
					{
					t0_ = new_co_value_co___Node__Dictionary__Standard(Proto_(Node__Dictionary__Standard), new_key, new_value);
					t1_ = Call_(right_co_, this_, t0_);
					}
				}
			else
				{
				/*  This node *is* the new key.  Signal that by returning nil. */
				t0_ = Call_(value_co_, this_, new_value);
				return nil;
				}
			}
		
		
		
		t0_ = Call_(skew, this_);
		new_top = t0_;
		t0_ = Call_(split, new_top);
		new_top = t0_;
		return new_top;
		}
	return nil;
}


obj_ new_co_value_co___Node__Dictionary__Standard(obj_ this_, obj_ key, obj_ value)
{
	UsingClass_(Node__Dictionary__Standard)
	obj_ obj = AllocObj_(Node__Dictionary__Standard);
	create_co_value_co___Node__Dictionary__Standard(obj, key, value);
	return obj;
}


obj_ remove_co___Node__Dictionary__Standard(obj_ this_, obj_ context)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(1)
	UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(_gt_) UsingMethod_(delete_node) UsingMethod_(delete_node_co_) UsingMethod_(deleted_value_co_) UsingMethod_(item_found_co_) UsingMethod_(key) UsingMethod_(key_co_) UsingMethod_(last_node) UsingMethod_(last_node_co_) UsingMethod_(left) UsingMethod_(left_co_) UsingMethod_(level) UsingMethod_(level_co_) UsingMethod_(remove_co_) UsingMethod_(right) UsingMethod_(right_co_) UsingMethod_(skew) UsingMethod_(split) UsingMethod_(value) UsingMethod_(value_co_)

		{
		/*  Search down the tree, setting delete-node and last-node. */
		t0_ = Call_(last_node_co_, context, this_);
		t0_ = Call_(key, context);
		t1_ = Call_(key, this_);
		t2_ = Call_(_lt_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(left, this_);
			if (t0_)
				{
				t0_ = Call_(left, this_);
				t1_ = Call_(remove_co_, t0_, context);
				t2_ = Call_(left_co_, this_, t1_);
				}
			}
		else
			{
			t0_ = Call_(delete_node_co_, context, this_);
			t0_ = Call_(right, this_);
			if (t0_)
				{
				t0_ = Call_(right, this_);
				t1_ = Call_(remove_co_, t0_, context);
				t2_ = Call_(right_co_, this_, t1_);
				}
			}
		
		/*  If we're at the bottom, and the key is present, remove it. */
		t0_ = Call_(last_node, context);
		t1_ = Call_(_eq__eq_, t0_, this_);
		if (t1_)
			{
			t0_ = Call_(delete_node, context);
			t1_ = Bool_(t0_);
			if (t1_) {
				t2_ = Call_(key, context);
				t3_ = Call_(delete_node, context);
				t4_ = Call_(key, t3_);
				t5_ = Call_(_eq__eq_, t2_, t4_);
				t1_ = t5_;
				}
			if (t1_)
				{
				/*  Found it!  (At delete-node, not here.) */
				t0_ = Call_(item_found_co_, context, true_);
				t0_ = Call_(delete_node, context);
				t1_ = Call_(value, t0_);
				t2_ = Call_(deleted_value_co_, context, t1_);
				/*  Move this key/value into the place of the deleted key/value. */
				t0_ = Call_(delete_node, context);
				t1_ = Call_(key, this_);
				t2_ = Call_(key_co_, t0_, t1_);
				t0_ = Call_(delete_node, context);
				t1_ = Call_(value, this_);
				t2_ = Call_(value_co_, t0_, t1_);
				t0_ = Call_(right, this_);
				return t0_;
				}
			}
		else
			{
			obj_ left_level, right_level;
			left_level = SmallInt_(0);
			t0_ = Call_(left, this_);
			if (t0_)
				{
				t0_ = Call_(left, this_);
				t1_ = Call_(level, t0_);
				left_level = t1_;
				}
			right_level = SmallInt_(0);
			t0_ = Call_(right, this_);
			if (t0_)
				{
				t0_ = Call_(right, this_);
				t1_ = Call_(level, t0_);
				right_level = t1_;
				}
			t0_ = Call_(level, this_);
			t1_ = Call_(_, t0_, SmallInt_(1));
			t2_ = Call_(_lt_, left_level, t1_);
			if ((t2_) == nil) {
				t3_ = Call_(level, this_);
				t4_ = Call_(_, t3_, SmallInt_(1));
				t5_ = Call_(_lt_, right_level, t4_);
				t2_ = t5_;
				}
			if (t2_)
				{
				obj_ new_top;
				t0_ = Call_(level, this_);
				t1_ = Call_(_, t0_, SmallInt_(1));
				t2_ = Call_(level_co_, this_, t1_);
				t0_ = Call_(right, this_);
				if (t0_) {
					t1_ = Call_(right, this_);
					t2_ = Call_(level, t1_);
					t3_ = Call_(level, this_);
					t4_ = Call_(_gt_, t2_, t3_);
					t0_ = t4_;
					}
				if (t0_)
					{
					t0_ = Call_(right, this_);
					t1_ = Call_(level, this_);
					t2_ = Call_(level_co_, t0_, t1_);
					}
				t0_ = Call_(skew, this_);
				new_top = t0_;
				t0_ = Call_(right, new_top);
				if (t0_)
					{
					t0_ = Call_(right, new_top);
					t1_ = Call_(skew, t0_);
					t2_ = Call_(right_co_, new_top, t1_);
					}
				t0_ = Call_(right, new_top);
				if (t0_) {
					t1_ = Call_(right, new_top);
					t2_ = Call_(right, t1_);
					t0_ = t2_;
					}
				if (t0_)
					{
					t0_ = Call_(right, new_top);
					t1_ = Call_(right, new_top);
					t2_ = Call_(right, t1_);
					t3_ = Call_(skew, t2_);
					t4_ = Call_(right_co_, t0_, t3_);
					}
				t0_ = Call_(split, new_top);
				new_top = t0_;
				t0_ = Call_(right, new_top);
				if (t0_)
					{
					t0_ = Call_(right, new_top);
					t1_ = Call_(split, t0_);
					t2_ = Call_(right_co_, new_top, t1_);
					}
				return new_top;
				}
			}
		
		/*  Otherwise, we are not at the bottom; rebalance. */
		
		return this_;
		}
	return nil;
}


obj_ skew__Node__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(_eq__eq_) UsingMethod_(left) UsingMethod_(left_co_) UsingMethod_(level) UsingMethod_(right) UsingMethod_(right_co_)

		{
		obj_ new_top;
		new_top = this_;
		
		t0_ = Call_(left, this_);
		if (t0_) {
			t1_ = Call_(left, this_);
			t2_ = Call_(level, t1_);
			t3_ = Call_(level, this_);
			t4_ = Call_(_eq__eq_, t2_, t3_);
			t0_ = t4_;
			}
		if (t0_)
			{
			/*  Rotate with left. */
			t0_ = Call_(left, this_);
			new_top = t0_;
			t0_ = Call_(right, new_top);
			t1_ = Call_(left_co_, this_, t0_);
			t0_ = Call_(right_co_, new_top, this_);
			}
		
		return new_top;
		}
	return nil;
}


obj_ split__Node__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(left) UsingMethod_(left_co_) UsingMethod_(level) UsingMethod_(level_co_) UsingMethod_(right) UsingMethod_(right_co_)

		{
		obj_ new_top;
		new_top = this_;
		
		t0_ = Call_(right, this_);
		if (t0_) {
			t1_ = Call_(right, this_);
			t2_ = Call_(right, t1_);
			t0_ = t2_;
			}
		if (t0_) {
			t3_ = Call_(right, this_);
			t4_ = Call_(right, t3_);
			t5_ = Call_(level, t4_);
			t6_ = Call_(level, this_);
			t7_ = Call_(_eq__eq_, t5_, t6_);
			t0_ = t7_;
			}
		if (t0_)
			{
			/*  Rotate with right. */
			t0_ = Call_(right, this_);
			new_top = t0_;
			t0_ = Call_(left, new_top);
			t1_ = Call_(right_co_, this_, t0_);
			t0_ = Call_(left_co_, new_top, this_);
			/*  Boost the level. */
			t0_ = Call_(level, new_top);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(level_co_, new_top, t1_);
			}
		
		return new_top;
		}
	return nil;
}


