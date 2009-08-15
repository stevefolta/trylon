#include "Trylon_.h"

UsingClass_(StackElement__Iterator__Dictionary__Standard) 
static obj_ tu0_[];
UsingSym_(Iterator)UsingClass_(Dictionary__Standard)
UsingClass_(Object__Standard)
UsingClass_(Iterator__Dictionary__Standard)
struct ClassInfo Iterator__Dictionary__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 43, 1, Proto_(Iterator__Dictionary__Standard), Proto_(Dictionary__Standard), Proto_(Object__Standard), nil, Sym_(Iterator), nil, ((obj_) tu0_) };
struct object Iterator__Dictionary__Standard = 
	{ &Iterator__Dictionary__Standard__classInfo_, {nil} };

	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(StackElement__Iterator__Dictionary__Standard) };

#define stack_top__fld_	(0)


obj_ StackElement__Iterator__Dictionary__Standard__accessor_(obj_ this_)
{
	UsingClass_(StackElement__Iterator__Dictionary__Standard)
	return Proto_(StackElement__Iterator__Dictionary__Standard);
}


obj_ create_co___Iterator__Dictionary__Standard(obj_ this_, obj_ root)
{
	obj_ t0_;
	UsingMethod_(push_tree_co_)

		{
		t0_ = Call_(push_tree_co_, this_, root);
		}
	return nil;
}


obj_ go_forward__Iterator__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(node) UsingMethod_(pop) UsingMethod_(push_tree_co_) UsingMethod_(right) UsingMethod_(stack_top)

		{
		obj_ right;
		t0_ = Call_(stack_top, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			}
		
		t0_ = Call_(stack_top, this_);
		t1_ = Call_(node, t0_);
		t2_ = Call_(right, t1_);
		right = t2_;
		t0_ = Call_(pop, this_);
		t0_ = Call_(push_tree_co_, this_, right);
		}
	return nil;
}


obj_ is_done__Iterator__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(stack_top)

		{
		t0_ = Call_(stack_top, this_);
		t1_ = Not_(t0_);
		return t1_;
		}
	return nil;
}


obj_ iterator__Iterator__Dictionary__Standard(obj_ this_)
{

		{
		return this_;
		}
	return nil;
}


obj_ new_co___Iterator__Dictionary__Standard(obj_ this_, obj_ root)
{
	UsingClass_(Iterator__Dictionary__Standard)
	obj_ obj = AllocObj_(Iterator__Dictionary__Standard);
	create_co___Iterator__Dictionary__Standard(obj, root);
	return obj;
}


obj_ pop__Iterator__Dictionary__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(next) UsingMethod_(stack_top) UsingMethod_(stack_top_co_)

		{
		t0_ = Call_(stack_top, this_);
		if (t0_)
			{
			t0_ = Call_(stack_top, this_);
			t1_ = Call_(next, t0_);
			t2_ = Call_(stack_top_co_, this_, t1_);
			}
		}
	return nil;
}


obj_ push_tree_co___Iterator__Dictionary__Standard(obj_ this_, obj_ node)
{
	obj_ t0_;
	UsingMethod_(left) UsingMethod_(push_co_)

		{
		while (1) {
			ContinuePoint_(0)
			if (!(node))
				Break_(0)
			{
			t0_ = Call_(push_co_, this_, node);
			t0_ = Call_(left, node);
			node = t0_;
			}
			}
		}
	return nil;
}


obj_ push_co___Iterator__Dictionary__Standard(obj_ this_, obj_ node)
{
	extern obj_ new_co___StackElement__Iterator__Dictionary__Standard(obj_ this_, obj_ node);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(next_co_) UsingMethod_(stack_top) UsingMethod_(stack_top_co_)
	UsingClass_(StackElement__Iterator__Dictionary__Standard)

		{
		obj_ stack_element;
		t0_ = new_co___StackElement__Iterator__Dictionary__Standard(Proto_(StackElement__Iterator__Dictionary__Standard), node);
		stack_element = t0_;
		t0_ = Call_(stack_top, this_);
		t1_ = Call_(next_co_, stack_element, t0_);
		t0_ = Call_(stack_top_co_, this_, stack_element);
		}
	return nil;
}


