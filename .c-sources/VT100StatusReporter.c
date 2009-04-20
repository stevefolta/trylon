#include "Trylon_.h"

UsingSym_(VT100StatusReporter)UsingClass_(Main)
UsingClass_(StatusReporter)
UsingClass_(VT100StatusReporter)
struct ClassInfo VT100StatusReporter__classInfo_ = 
	{ 167, 4, Proto_(VT100StatusReporter), Proto_(Main), Proto_(StatusReporter), nil, Sym_(VT100StatusReporter) ,nil };
struct object VT100StatusReporter = 
	{ &VT100StatusReporter__classInfo_, {nil, nil, nil, nil} };

	DefineInt_(0, 20)

#define warnings__fld_	(0)

#define indent_level__fld_	(1)
#define last_displayed_indent_level__fld_	(2)
#define have_line__fld_	(3)

DeclareSharedField_(max_indent_level, VT100StatusReporter, Int_(0))

obj_ back_up_one_line__VT100StatusReporter(obj_ this_)
{
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	obj_ t0_;
	DefineString_(0, "\e[A")
	DefineString_(1, "\r")
	DefineString_(2, "\e[2K")
	UsingClass_(Standard)

		{
		/* Go up a line. */
		t0_ = print_co___Standard(Proto_(Standard), Str_(0));
		
		/* Go to the beginning of the line. */
		t0_ = print_co___Standard(Proto_(Standard), Str_(1));
		
		/* Erase the line. */
		t0_ = print_co___Standard(Proto_(Standard), Str_(2));
		
		
		
		}
	return nil;
}


obj_ create__VT100StatusReporter(obj_ this_)
{
	obj_ create__StatusReporter(obj_);
	extern obj_ new_co___Tuple__Standard(obj_ this_, obj_ num_items);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 0)
	DefineInt_(1, -1)
	DefineInt_(2, 1)
	DefineInt_(3, 0)
	DefineInt_(4, 1)
	UsingMethod_(_pl_) UsingMethod_(_lt__eq_) UsingMethod_(at_co_put_co_) UsingMethod_(have_line) UsingMethod_(have_line_co_) UsingMethod_(indent_level_co_) UsingMethod_(last_displayed_indent_level_co_) UsingMethod_(max_indent_level)
	UsingClass_(Tuple__Standard)

		{
		obj_ i;
		t0_ = create__StatusReporter(this_);
		t0_ = Call_(indent_level_co_, this_, Int_(0));
		t0_ = Call_(last_displayed_indent_level_co_, this_, Int_(1));
		t0_ = Call_(max_indent_level, this_);
		t1_ = Call_(_pl_, t0_, Int_(2));
		t2_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), t1_);
		t3_ = Call_(have_line_co_, this_, t2_);
		i = Int_(3);
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(max_indent_level, this_);
			t1_ = Call_(_lt__eq_, i, t0_);
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(have_line, this_);
			t1_ = Call_(at_co_put_co_, t0_, i, nil);
			t0_ = Call_(_pl_, i, Int_(4));
			i = t0_;
			
			
			}
			}
		}
	return nil;
}


obj_ have_line__VT100StatusReporter(obj_ this_)
{
	return Field_(have_line);
}


obj_ have_line_co___VT100StatusReporter(obj_ this_, obj_ value)
{
	Field_(have_line) = value;
	return value;
}


obj_ indent__VT100StatusReporter(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	UsingMethod_(_pl_) UsingMethod_(indent_level) UsingMethod_(indent_level_co_)

		{
		t0_ = Call_(indent_level, this_);
		t1_ = Call_(_pl_, t0_, Int_(0));
		t2_ = Call_(indent_level_co_, this_, t1_);
		
		
		}
	return nil;
}


obj_ indent_level__VT100StatusReporter(obj_ this_)
{
	return Field_(indent_level);
}


obj_ indent_level_co___VT100StatusReporter(obj_ this_, obj_ value)
{
	Field_(indent_level) = value;
	return value;
}


obj_ last_displayed_indent_level__VT100StatusReporter(obj_ this_)
{
	return Field_(last_displayed_indent_level);
}


obj_ last_displayed_indent_level_co___VT100StatusReporter(obj_ this_, obj_ value)
{
	Field_(last_displayed_indent_level) = value;
	return value;
}


obj_ max_indent_level__VT100StatusReporter(obj_ this_)
{
	return SharedField_(max_indent_level, VT100StatusReporter);
}


obj_ max_indent_level_co___VT100StatusReporter(obj_ this_, obj_ value)
{
	SetSharedField_(max_indent_level, VT100StatusReporter, value);
	return value;
}


obj_ new__VT100StatusReporter(obj_ this_)
{
	UsingClass_(VT100StatusReporter)
	obj_ obj = AllocObj_(VT100StatusReporter);
	create__VT100StatusReporter(obj);
	return obj;
}


obj_ report_co___VT100StatusReporter(obj_ this_, obj_ message)
{
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 0)
	DefineInt_(2, 0)
	DefineInt_(3, 80)
	DefineString_(0, "                    ")
	UsingMethod_(_) UsingMethod_(_gt_) UsingMethod_(_gt__eq_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(back_up_one_line) UsingMethod_(have_line) UsingMethod_(indent_level) UsingMethod_(last_displayed_indent_level) UsingMethod_(last_displayed_indent_level_co_) UsingMethod_(max_indent_level) UsingMethod_(substr_co_length_co_)
	UsingClass_(Standard)

		{
		obj_ adjusted_indent_level, level;
		/* Go back up in the display. */
		t0_ = Call_(last_displayed_indent_level, this_);
		level = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(indent_level, this_);
			t1_ = Call_(_gt__eq_, level, t0_);
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(have_line, this_);
			t1_ = Call_(at_co_, t0_, level);
			if (t1_)
				{
				t0_ = Call_(back_up_one_line, this_);
				t0_ = Call_(have_line, this_);
				t1_ = Call_(at_co_put_co_, t0_, level, nil);
				}
			t0_ = Call_(_, level, Int_(0));
			level = t0_;
			
			}
			}
		/* Indent. */
		t0_ = Call_(indent_level, this_);
		adjusted_indent_level = t0_;
		t0_ = Call_(max_indent_level, this_);
		t1_ = Call_(_gt_, adjusted_indent_level, t0_);
		if (t1_)
			{
			t0_ = Call_(max_indent_level, this_);
			adjusted_indent_level = t0_;
			}
		t0_ = Call_(substr_co_length_co_, Str_(0), Int_(1), adjusted_indent_level);
		t1_ = print_co___Standard(Proto_(Standard), t0_);
		
		/* Write the message. */
		t0_ = Call_(_, Int_(3), adjusted_indent_level);
		t1_ = Call_(substr_co_length_co_, message, Int_(2), t0_);
		t2_ = print_line_co___Standard(Proto_(Standard), t1_);
		
		t0_ = Call_(have_line, this_);
		t1_ = Call_(at_co_put_co_, t0_, adjusted_indent_level, true_);
		t0_ = Call_(indent_level, this_);
		t1_ = Call_(last_displayed_indent_level_co_, this_, t0_);
		
		
		}
	return nil;
}


obj_ unindent__VT100StatusReporter(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 1)
	DefineInt_(1, 1)
	UsingMethod_(_) UsingMethod_(_gt_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(back_up_one_line) UsingMethod_(have_line) UsingMethod_(indent_level) UsingMethod_(indent_level_co_) UsingMethod_(last_displayed_indent_level) UsingMethod_(last_displayed_indent_level_co_)

		{
		obj_ level;
		t0_ = Call_(indent_level, this_);
		t1_ = Call_(_, t0_, Int_(0));
		t2_ = Call_(indent_level_co_, this_, t1_);
		
		t0_ = Call_(last_displayed_indent_level, this_);
		level = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(indent_level, this_);
			t1_ = Call_(_gt_, level, t0_);
			if (!(t1_))
				Break_(0)
			{
			t0_ = Call_(have_line, this_);
			t1_ = Call_(at_co_, t0_, level);
			if (t1_)
				{
				t0_ = Call_(back_up_one_line, this_);
				t0_ = Call_(have_line, this_);
				t1_ = Call_(at_co_put_co_, t0_, level, nil);
				}
			t0_ = Call_(_, level, Int_(1));
			level = t0_;
			t0_ = Call_(last_displayed_indent_level_co_, this_, level);
			
			
			}
			}
		}
	return nil;
}


