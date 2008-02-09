#include "Trylon_.h"

UsingSym_(DispatchRow)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(DispatchRow__CCompiler)
struct ClassInfo DispatchRow__CCompiler__classInfo_ = 
	{ 147, 16, Proto_(DispatchRow__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(DispatchRow) ,nil };
struct object DispatchRow__CCompiler = 
	{ &DispatchRow__CCompiler__classInfo_, {nil, nil, nil, nil} };


#define symbol_info__fld_	(0)
#define entries__fld_	(1)
#define num_entries__fld_	(2)
#define selector__fld_	(3)


obj_ append_co_function_co___DispatchRow__CCompiler(obj_ this_, obj_ class_num, obj_ function)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(entries) UsingMethod_(num_entries) UsingMethod_(num_entries_co_)
	extern obj_ new_co_function_co___DispatchRowEntry__CCompiler(obj_ this_, obj_ class_num, obj_ function);
	UsingClass_(DispatchRowEntry__CCompiler)

		{
		t0_ = Call_(entries, this_);
		t1_ = new_co_function_co___DispatchRowEntry__CCompiler(Proto_(DispatchRowEntry__CCompiler), class_num, function);
		t2_ = Call_(append_co_, t0_, t1_);
		t0_ = Call_(num_entries, this_);
		t1_ = Call_(_pl_, t0_, Int_(0));
		t2_ = Call_(num_entries_co_, this_, t1_);
		
		
		}
	return nil;
}


obj_ create_co___DispatchRow__CCompiler(obj_ this_, obj_ symbol_info)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 0)
	UsingMethod_(entries_co_) UsingMethod_(num_entries_co_) UsingMethod_(symbol_info_co_)
	extern obj_ new__List__Standard(obj_ this_);
	UsingClass_(List__Standard)

		{
		t0_ = Call_(symbol_info_co_, this_, symbol_info);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(entries_co_, this_, t0_);
		t0_ = Call_(num_entries_co_, this_, Int_(0));
		
		
		}
	return nil;
}


obj_ entries__DispatchRow__CCompiler(obj_ this_)
{
	return Field_(entries);
}


obj_ entries_co___DispatchRow__CCompiler(obj_ this_, obj_ value)
{
	Field_(entries) = value;
	return value;
}


obj_ fit_into_co_used_offsets_co___DispatchRow__CCompiler(obj_ this_, obj_ dispatch_table, obj_ used_offsets)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	UsingMethod_(_pl_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(class_num) UsingMethod_(current_item) UsingMethod_(entries) UsingMethod_(function) UsingMethod_(go_forward) UsingMethod_(index_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(next_clear_from_co_) UsingMethod_(selector_co_) UsingMethod_(symbol_info)
	extern obj_ new_co_selector_co___DispatchTableEntry__CCompiler(obj_ this_, obj_ function, obj_ selector);
	UsingClass_(DispatchTableEntry__CCompiler)

		{
		obj_ offset;
		/* Find the offset. */
		/* Very slow method. */
		offset = Int_(0);
		while (1) {
			ContinuePoint_(0)
			{
			obj_ fits_here;
			t0_ = Call_(next_clear_from_co_, used_offsets, offset);
			offset = t0_;
			
			fits_here = true_;
			t0_ = Call_(entries, this_);
			ForStart_(1, t0_, entry)
				{
				t0_ = Call_(class_num, entry);
				t1_ = Call_(_pl_, offset, t0_);
				t2_ = Call_(at_co_, dispatch_table, t1_);
				t3_ = Bool_(t2_);
				if (t3_)
					{
					fits_here = nil;
					Break_(1)
					}
				}
			ForEnd_(1)
			if (fits_here)
				{
				Break_(0)
				
				}
			t0_ = Call_(_pl_, offset, Int_(1));
			offset = t0_;
			
			}
		}
		/* Install the entries. */
		t0_ = Call_(selector_co_, this_, offset);
		t0_ = Call_(entries, this_);
		ForStart_(2, t0_, entry)
			{
			t0_ = Call_(class_num, entry);
			t1_ = Call_(_pl_, offset, t0_);
			t2_ = Call_(function, entry);
			t3_ = new_co_selector_co___DispatchTableEntry__CCompiler(Proto_(DispatchTableEntry__CCompiler), t2_, offset);
			t4_ = Call_(at_co_put_co_, dispatch_table, t1_, t3_);
			}
		ForEnd_(2)
		t0_ = Call_(at_co_put_co_, used_offsets, offset, true_);
		t0_ = Call_(symbol_info, this_);
		t1_ = Call_(index_co_, t0_, offset);
		
		
		
		
		}
	return nil;
}


obj_ name__DispatchRow__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(name) UsingMethod_(symbol_info)

		{
		t0_ = Call_(symbol_info, this_);
		t1_ = Call_(name, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ new_co___DispatchRow__CCompiler(obj_ this_, obj_ symbol_info)
{
	UsingClass_(DispatchRow__CCompiler)
	obj_ obj = AllocObj_(DispatchRow__CCompiler);
	create_co___DispatchRow__CCompiler(obj, symbol_info);
	return obj;
}


obj_ num_entries__DispatchRow__CCompiler(obj_ this_)
{
	return Field_(num_entries);
}


obj_ num_entries_co___DispatchRow__CCompiler(obj_ this_, obj_ value)
{
	Field_(num_entries) = value;
	return value;
}


obj_ selector__DispatchRow__CCompiler(obj_ this_)
{
	return Field_(selector);
}


obj_ selector_co___DispatchRow__CCompiler(obj_ this_, obj_ value)
{
	Field_(selector) = value;
	return value;
}


obj_ symbol_info__DispatchRow__CCompiler(obj_ this_)
{
	return Field_(symbol_info);
}


obj_ symbol_info_co___DispatchRow__CCompiler(obj_ this_, obj_ value)
{
	Field_(symbol_info) = value;
	return value;
}


