#include "Trylon_.h"

UsingSym_(Node)UsingClass_(DispatchRowSet__CCompiler)
UsingClass_(Object__Standard)
UsingClass_(Node__DispatchRowSet__CCompiler)
struct ClassInfo Node__DispatchRowSet__CCompiler__classInfo_ = 
	{ 146, 16, Proto_(Node__DispatchRowSet__CCompiler), Proto_(DispatchRowSet__CCompiler), Proto_(Object__Standard), nil, Sym_(Node) ,nil };
struct object Node__DispatchRowSet__CCompiler = 
	{ &Node__DispatchRowSet__CCompiler__classInfo_, {nil, nil, nil, nil} };


#define row__fld_	(0)
#define left__fld_	(1)
#define right__fld_	(2)
#define level__fld_	(3)


obj_ create_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ row)
{
	obj_ t0_;
	DefineInt_(0, 1)
	UsingMethod_(left_co_) UsingMethod_(level_co_) UsingMethod_(right_co_) UsingMethod_(row_co_)

		{
		t0_ = Call_(row_co_, this_, row);
		t0_ = Call_(left_co_, this_, nil);
		t0_ = Call_(right_co_, this_, nil);
		t0_ = Call_(level_co_, this_, Int_(0));
		
		}
	return nil;
}


obj_ insert_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ new_row)
{
	extern obj_ new_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ row);
	extern obj_ new_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ row);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(_gt_) UsingMethod_(insert_co_) UsingMethod_(left) UsingMethod_(left_co_) UsingMethod_(num_entries) UsingMethod_(right) UsingMethod_(right_co_) UsingMethod_(row) UsingMethod_(skew) UsingMethod_(split)
	UsingClass_(Node__DispatchRowSet__CCompiler)

		{
		obj_ new_tree_top;
		/* Insert the new row. */
		t0_ = Call_(num_entries, new_row);
		t1_ = Call_(row, this_);
		t2_ = Call_(num_entries, t1_);
		t3_ = Call_(_gt_, t0_, t2_);
		if (t3_)
			{
			t0_ = Call_(left, this_);
			if (t0_)
				{
				t0_ = Call_(left, this_);
				t1_ = Call_(insert_co_, t0_, new_row);
				t2_ = Call_(left_co_, this_, t1_);
				}
			else
				{
				t0_ = new_co___Node__DispatchRowSet__CCompiler(Proto_(Node__DispatchRowSet__CCompiler), new_row);
				t1_ = Call_(left_co_, this_, t0_);
				}
			}
		else
			{
			t0_ = Call_(right, this_);
			if (t0_)
				{
				t0_ = Call_(right, this_);
				t1_ = Call_(insert_co_, t0_, new_row);
				t2_ = Call_(right_co_, this_, t1_);
				}
			else
				{
				t0_ = new_co___Node__DispatchRowSet__CCompiler(Proto_(Node__DispatchRowSet__CCompiler), new_row);
				t1_ = Call_(right_co_, this_, t0_);
				
				}
			}
		/* Rebalance the tree. */
		t0_ = Call_(skew, this_);
		new_tree_top = t0_;
		t0_ = Call_(split, new_tree_top);
		new_tree_top = t0_;
		return new_tree_top;
		
		}
	return nil;
}


obj_ left__Node__DispatchRowSet__CCompiler(obj_ this_)
{
	return Field_(left);
}


obj_ left_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ value)
{
	Field_(left) = value;
	return value;
}


obj_ level__Node__DispatchRowSet__CCompiler(obj_ this_)
{
	return Field_(level);
}


obj_ level_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ value)
{
	Field_(level) = value;
	return value;
}


obj_ new_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ row)
{
	UsingClass_(Node__DispatchRowSet__CCompiler)
	obj_ obj = AllocObj_(Node__DispatchRowSet__CCompiler);
	create_co___Node__DispatchRowSet__CCompiler(obj, row);
	return obj;
}


obj_ right__Node__DispatchRowSet__CCompiler(obj_ this_)
{
	return Field_(right);
}


obj_ right_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ value)
{
	Field_(right) = value;
	return value;
}


obj_ row__Node__DispatchRowSet__CCompiler(obj_ this_)
{
	return Field_(row);
}


obj_ row_co___Node__DispatchRowSet__CCompiler(obj_ this_, obj_ value)
{
	Field_(row) = value;
	return value;
}


obj_ skew__Node__DispatchRowSet__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(_eq__eq_) UsingMethod_(left) UsingMethod_(left_co_) UsingMethod_(level) UsingMethod_(right) UsingMethod_(right_co_)

		{
		obj_ new_tree_top;
		new_tree_top = this_;
		
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
			/* Rotate with left. */
			t0_ = Call_(left, this_);
			new_tree_top = t0_;
			t0_ = Call_(right, new_tree_top);
			t1_ = Call_(left_co_, this_, t0_);
			t0_ = Call_(right_co_, new_tree_top, this_);
			
			}
		return new_tree_top;
		
		}
	return nil;
}


obj_ split__Node__DispatchRowSet__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	DefineInt_(0, 1)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(left) UsingMethod_(left_co_) UsingMethod_(level) UsingMethod_(level_co_) UsingMethod_(right) UsingMethod_(right_co_)

		{
		obj_ new_tree_top;
		new_tree_top = this_;
		
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
			/* Rotate with right. */
			t0_ = Call_(right, this_);
			new_tree_top = t0_;
			t0_ = Call_(left, new_tree_top);
			t1_ = Call_(right_co_, this_, t0_);
			t0_ = Call_(left_co_, new_tree_top, this_);
			/* Boost the level. */
			t0_ = Call_(level, new_tree_top);
			t1_ = Call_(_pl_, t0_, Int_(0));
			t2_ = Call_(level_co_, new_tree_top, t1_);
			
			}
		return new_tree_top;
		
		
		}
	return nil;
}


