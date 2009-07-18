#include "Trylon_.h"

UsingSym_(Iterator)UsingClass_(DispatchRowSet__CCompiler)
UsingClass_(Object__Standard)
UsingClass_(Iterator__DispatchRowSet__CCompiler)
struct ClassInfo Iterator__DispatchRowSet__CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 160, 1, Proto_(Iterator__DispatchRowSet__CCompiler), Proto_(DispatchRowSet__CCompiler), Proto_(Object__Standard), nil, Sym_(Iterator), nil, nil };
struct object Iterator__DispatchRowSet__CCompiler = 
	{ &Iterator__DispatchRowSet__CCompiler__classInfo_, {nil} };


#define stack__fld_	(0)


obj_ create_co___Iterator__DispatchRowSet__CCompiler(obj_ this_, obj_ root)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(push_tree_co_) UsingMethod_(stack_co_)
	UsingClass_(List__Standard)

		{
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(stack_co_, this_, t0_);
		t0_ = Call_(push_tree_co_, this_, root);
		}
	return nil;
}


obj_ current_item__Iterator__DispatchRowSet__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(first_item) UsingMethod_(is_empty) UsingMethod_(row) UsingMethod_(stack)

		{
		t0_ = Call_(stack, this_);
		t1_ = Call_(is_empty, t0_);
		if (t1_)
			{
			return nil;
			}
		
		t0_ = Call_(stack, this_);
		t1_ = Call_(first_item, t0_);
		t2_ = Call_(row, t1_);
		return t2_;
		}
	return nil;
}


obj_ go_forward__Iterator__DispatchRowSet__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(first_item) UsingMethod_(is_empty) UsingMethod_(pop_front) UsingMethod_(push_tree_co_) UsingMethod_(right) UsingMethod_(stack)

		{
		obj_ right;
		t0_ = Call_(stack, this_);
		t1_ = Call_(is_empty, t0_);
		if (t1_)
			{
			return nil;
			}
		
		t0_ = Call_(stack, this_);
		t1_ = Call_(first_item, t0_);
		t2_ = Call_(right, t1_);
		right = t2_;
		t0_ = Call_(stack, this_);
		t1_ = Call_(pop_front, t0_);
		t0_ = Call_(push_tree_co_, this_, right);
		}
	return nil;
}


obj_ is_done__Iterator__DispatchRowSet__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(is_empty) UsingMethod_(stack)

		{
		t0_ = Call_(stack, this_);
		t1_ = Call_(is_empty, t0_);
		return t1_;
		}
	return nil;
}


obj_ new_co___Iterator__DispatchRowSet__CCompiler(obj_ this_, obj_ root)
{
	UsingClass_(Iterator__DispatchRowSet__CCompiler)
	obj_ obj = AllocObj_(Iterator__DispatchRowSet__CCompiler);
	create_co___Iterator__DispatchRowSet__CCompiler(obj, root);
	return obj;
}


obj_ push_tree_co___Iterator__DispatchRowSet__CCompiler(obj_ this_, obj_ node)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(left) UsingMethod_(push_front_co_) UsingMethod_(stack)

		{
		obj_ cur_node;
		cur_node = node;
		while (1) {
			ContinuePoint_(0)
			if (!(cur_node))
				Break_(0)
			{
			t0_ = Call_(stack, this_);
			t1_ = Call_(push_front_co_, t0_, cur_node);
			t0_ = Call_(left, cur_node);
			cur_node = t0_;
			}
			}
		}
	return nil;
}


