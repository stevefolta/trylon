#include "Trylon_.h"

UsingSym_(CokeStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(CokeStatement__Compiler)
struct ClassInfo CokeStatement__Compiler__classInfo_ = 
	{ 142, 2, Proto_(CokeStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(CokeStatement) ,nil };
struct object CokeStatement__Compiler = 
	{ &CokeStatement__Compiler__classInfo_, {nil, nil} };


#define comment__fld_	(0)

#define lines__fld_	(1)


obj_ create_co___CokeStatement__Compiler(obj_ this_, obj_ lines)
{
	obj_ t0_;
	UsingMethod_(lines_co_)

		{
		t0_ = Call_(lines_co_, this_, lines);
		
		
		}
	return nil;
}


obj_ jolt_expression__CokeStatement__Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___CokeLexer__Compiler(obj_ this_, obj_ lines);
	UsingSym_(nil)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(begin)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineInt_(2, 1)
	DefineInt_(3, 0)
	DefineInt_(4, 1)
	DefineInt_(5, 1)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(first_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(lines) UsingMethod_(next_expr)
	UsingClass_(CokeLexer__Compiler)
	UsingClass_(Expression)
	UsingClass_(List__Standard)

		{
		obj_ exprs, lexer;
		/* Parse the Coke code. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		exprs = t0_;
		t0_ = Call_(lines, this_);
		t1_ = new_co___CokeLexer__Compiler(Proto_(CokeLexer__Compiler), t0_);
		lexer = t1_;
		while (1) {
			ContinuePoint_(0)
			{
			obj_ expr;
			t0_ = Call_(next_expr, lexer);
			expr = t0_;
			t0_ = Not_(expr);
			if (t0_)
				{
				Break_(0)
				}
			t0_ = Call_(append_co_, exprs, expr);
			
			}
		}
		/* Build the expression. */
		t0_ = Call_(count, exprs);
		t1_ = Call_(_eq__eq_, t0_, Int_(0));
		if (t1_)
			{
			return Sym_(nil);
			}
		else
			{
			t0_ = Call_(count, exprs);
			t1_ = Call_(_eq__eq_, t0_, Int_(1));
			if (t1_)
				{
				t0_ = Call_(first_item, exprs);
				return t0_;
				}
			else
				{
				obj_ expr, index;
				t1_ = Call_(count, exprs);
				t2_ = Call_(_pl_, t1_, Int_(2));
				t3_ = new_co___Expression(Proto_(Expression), t2_);
				expr = t3_;
				t0_ = Call_(at_co_put_co_, expr, Int_(3), Sym_(begin));
				index = Int_(4);
				ForStart_(1, exprs, sub_expr)
					{
					t0_ = Call_(at_co_put_co_, expr, index, sub_expr);
					t0_ = Call_(_pl_, index, Int_(5));
					index = t0_;
					}
				ForEnd_(1)
				return expr;
				
				
				
				
				}
			}
		}
	return nil;
}


obj_ lines__CokeStatement__Compiler(obj_ this_)
{
	return Field_(lines);
}


obj_ lines_co___CokeStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(lines) = value;
	return value;
}


obj_ new_co___CokeStatement__Compiler(obj_ this_, obj_ lines)
{
	UsingClass_(CokeStatement__Compiler)
	obj_ obj = AllocObj_(CokeStatement__Compiler);
	create_co___CokeStatement__Compiler(obj, lines);
	return obj;
}


