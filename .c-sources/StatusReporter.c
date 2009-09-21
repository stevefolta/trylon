#include "Trylon_.h"

UsingSym_(StatusReporter)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(StatusReporter)
struct ClassInfo StatusReporter__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 197, 1, Proto_(StatusReporter), Proto_(Main), Proto_(Object__Standard), nil, Sym_(StatusReporter), nil, nil };
struct object StatusReporter = 
	{ &StatusReporter__classInfo_, {nil} };


#define warnings__fld_	(0)


obj_ create__StatusReporter(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(warnings_co_)
	UsingClass_(List__Standard)

		{
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(warnings_co_, this_, t0_);
		}
	return nil;
}


obj_ indent__StatusReporter(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ new__StatusReporter(obj_ this_)
{
	UsingClass_(StatusReporter)
	obj_ obj = AllocObj_(StatusReporter);
	create__StatusReporter(obj);
	return obj;
}


obj_ report_co___StatusReporter(obj_ this_, obj_ message)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ show_warnings__StatusReporter(obj_ this_)
{
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "\nWarning:")
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(warnings)
	UsingClass_(Standard)

		{
		t0_ = Call_(warnings, this_);
		t1_ = Call_(is_empty, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = print_line_co___Standard(Proto_(Standard), Str_(0));
			t0_ = Call_(warnings, this_);
			ForStart_(0, t0_, warning)
				{
				t0_ = print_line_co___Standard(Proto_(Standard), warning);
				}
			ForEnd_(0)
			}
		}
	return nil;
}


obj_ unindent__StatusReporter(obj_ this_)
{
	extern obj_ virtual__Standard(obj_ this_);
	obj_ t0_;
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		}
	return nil;
}


obj_ warn_co___StatusReporter(obj_ this_, obj_ message)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(warnings)

		{
		t0_ = Call_(warnings, this_);
		t1_ = Call_(append_co_, t0_, message);
		}
	return nil;
}


