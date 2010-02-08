#include "Trylon_.h"

UsingSym_(StdoutStatusReporter)UsingClass_(Main)
UsingClass_(StatusReporter)
UsingClass_(StdoutStatusReporter)
struct ClassInfo StdoutStatusReporter__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 203, 2, Proto_(StdoutStatusReporter), Proto_(Main), Proto_(StatusReporter), nil, Sym_(StdoutStatusReporter), nil, nil };
struct object StdoutStatusReporter = 
	{ &StdoutStatusReporter__classInfo_, {nil, nil} };


#define warnings__fld_	(0)

#define indent_level__fld_	(1)


obj_ create__StdoutStatusReporter(obj_ this_)
{
	obj_ create__StatusReporter(obj_);
	obj_ t0_;
	UsingInt_(0)
	UsingMethod_(indent_level_co_)

		{
		t0_ = create__StatusReporter(this_);
		t0_ = Call_(indent_level_co_, this_, SmallInt_(0));
		}
	return nil;
}


obj_ indent__StdoutStatusReporter(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(indent_level) UsingMethod_(indent_level_co_)

		{
		t0_ = Call_(indent_level, this_);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(indent_level_co_, this_, t1_);
		}
	return nil;
}


obj_ new__StdoutStatusReporter(obj_ this_)
{
	UsingClass_(StdoutStatusReporter)
	obj_ obj = AllocObj_(StdoutStatusReporter);
	create__StdoutStatusReporter(obj);
	return obj;
}


obj_ report_co___StdoutStatusReporter(obj_ this_, obj_ message)
{
	extern obj_ print_co___Standard(obj_ this_, obj_ strObj);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(20)
	UsingInt_(20)
	UsingInt_(0)
	DefineString_(0, "                    ")
	UsingMethod_(_gt_) UsingMethod_(indent_level) UsingMethod_(substr_co_length_co_)
	UsingClass_(Standard)

		{
		obj_ adjusted_indent_level;
		/*  Indent. */
		t0_ = Call_(indent_level, this_);
		adjusted_indent_level = t0_;
		t0_ = Call_(_gt_, adjusted_indent_level, SmallInt_(20));
		if (t0_)
			{
			adjusted_indent_level = SmallInt_(20);
			}
		t0_ = Call_(substr_co_length_co_, Str_(0), SmallInt_(0), adjusted_indent_level);
		t1_ = print_co___Standard(Proto_(Standard), t0_);
		
		t0_ = print_line_co___Standard(Proto_(Standard), message);
		}
	return nil;
}


obj_ unindent__StdoutStatusReporter(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_) UsingMethod_(indent_level) UsingMethod_(indent_level_co_)

		{
		t0_ = Call_(indent_level, this_);
		t1_ = Call_(_, t0_, SmallInt_(1));
		t2_ = Call_(indent_level_co_, this_, t1_);
		}
	return nil;
}


