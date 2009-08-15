#include "Trylon_.h"

UsingSym_(Expression)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(Expression)
struct ClassInfo Expression__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 23, 1, Proto_(Expression), Proto_(Main), Proto_(Object__Standard), nil, Sym_(Expression), nil, nil };
struct object Expression = 
	{ &Expression__classInfo_, {nil} };


#define tuple__fld_	(0)


obj_ at_co___Expression(obj_ this_, obj_ index)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_) UsingMethod_(tuple)

		{
		t0_ = Call_(tuple, this_);
		t1_ = Call_(at_co_, t0_, index);
		return t1_;
		}
	return nil;
}


obj_ at_co_put_co___Expression(obj_ this_, obj_ index, obj_ value)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_put_co_) UsingMethod_(tuple)

		{
		t0_ = Call_(tuple, this_);
		t1_ = Call_(at_co_put_co_, t0_, index, value);
		}
	return nil;
}


obj_ create_co___Expression(obj_ this_, obj_ num_items)
{
	extern obj_ new_co___Tuple__Standard(obj_ this_, obj_ num_items);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(tuple_co_)
	UsingClass_(Tuple__Standard)

		{
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), num_items);
		t1_ = Call_(tuple_co_, this_, t0_);
		}
	return nil;
}


obj_ emit_value_co_on_co___Expression(obj_ this_, obj_ value, obj_ stream)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "\"")
	DefineString_(1, "\"")
	UsingMethod_(emit_co_) UsingMethod_(is_a_co_) UsingMethod_(string) UsingMethod_(write_co_)
	UsingClass_(Expression)
	UsingClass_(String__Standard)
	UsingClass_(Symbol__Standard)

		{
		t0_ = Call_(is_a_co_, value, Proto_(String__Standard));
		if (t0_) {
			t1_ = Call_(is_a_co_, value, Proto_(Symbol__Standard));
			t2_ = Not_(t1_);
			t0_ = t2_;
			}
		if (t0_)
			{
			t0_ = Call_(write_co_, stream, Str_(0));
			t0_ = Call_(write_co_, stream, value);
			t0_ = Call_(write_co_, stream, Str_(1));
			}
		else
			{
			t0_ = Call_(is_a_co_, value, Proto_(Expression));
			if (t0_)
				{
				t0_ = Call_(emit_co_, value, stream);
				}
			else
				{
				t0_ = Call_(string, value);
				t1_ = Call_(write_co_, stream, t0_);
				}
			}
		}
	return nil;
}


obj_ emit_co___Expression(obj_ this_, obj_ stream)
{
	UsingSym_(quote)
	UsingSym_(send)
	UsingSym_(quote)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	UsingInt_(2)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(3)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(2)
	UsingInt_(1)
	UsingInt_(1)
	UsingInt_(3)
	UsingInt_(1)
	DefineString_(0, "'")
	DefineString_(1, "[")
	DefineString_(2, " ")
	DefineString_(3, " ")
	DefineString_(4, "]")
	DefineString_(5, "(")
	DefineString_(6, " ")
	DefineString_(7, ")")
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(_gt__eq_) UsingMethod_(at_co_) UsingMethod_(current_item) UsingMethod_(emit_value_co_on_co_) UsingMethod_(first_character) UsingMethod_(go_forward) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(num_items) UsingMethod_(tuple) UsingMethod_(write_co_)
	UsingClass_(Expression)
	UsingClass_(Symbol__Standard)

		{
		obj_ done_one, reporter;
		reporter = nil;
		
		t0_ = Call_(num_items, this_);
		t1_ = Call_(_eq__eq_, t0_, SmallInt_(2));
		if (t1_) {
			t2_ = Call_(at_co_, this_, SmallInt_(0));
			t3_ = Call_(_eq__eq_, t2_, Sym_(quote));
			t1_ = t3_;
			}
		if (t1_)
			{
			obj_ value;
			t0_ = Call_(at_co_, this_, SmallInt_(1));
			value = t0_;
			t0_ = Call_(is_a_co_, value, Proto_(Symbol__Standard));
			if (t0_)
				{
				obj_ c;
				t0_ = Call_(first_character, value);
				c = t0_;
				}
			t0_ = Call_(write_co_, stream, Str_(0));
			t0_ = Call_(emit_value_co_on_co_, this_, value, stream);
			return nil;
			}
		else
			{
			t0_ = Call_(num_items, this_);
			t1_ = Call_(_gt__eq_, t0_, SmallInt_(3));
			if (t1_) {
				t2_ = Call_(at_co_, this_, SmallInt_(0));
				t3_ = Call_(_eq__eq_, t2_, Sym_(send));
				t1_ = t3_;
				}
			if (t1_) {
				t4_ = Call_(at_co_, this_, SmallInt_(1));
				t5_ = Call_(is_a_co_, t4_, Proto_(Expression));
				t1_ = t5_;
				}
			if (t1_) {
				t6_ = Call_(at_co_, this_, SmallInt_(1));
				t7_ = Call_(at_co_, t6_, SmallInt_(0));
				t8_ = Call_(_eq__eq_, t7_, Sym_(quote));
				t1_ = t8_;
				}
			if (t1_)
				{
				obj_ index;
				t0_ = Call_(write_co_, stream, Str_(1));
				t0_ = Call_(at_co_, this_, SmallInt_(2));
				t1_ = Call_(emit_value_co_on_co_, this_, t0_, stream);
				t0_ = Call_(write_co_, stream, Str_(2));
				t0_ = Call_(at_co_, this_, SmallInt_(1));
				t1_ = Call_(at_co_, t0_, SmallInt_(1));
				t2_ = Call_(emit_value_co_on_co_, this_, t1_, stream);
				index = SmallInt_(3);
				while (1) {
					ContinuePoint_(0)
					t0_ = Call_(num_items, this_);
					t1_ = Call_(_lt_, index, t0_);
					if (!(t1_))
						Break_(0)
					{
					t0_ = Call_(write_co_, stream, Str_(3));
					t0_ = Call_(at_co_, this_, index);
					t1_ = Call_(emit_value_co_on_co_, this_, t0_, stream);
					t0_ = Call_(_pl_, index, SmallInt_(1));
					index = t0_;
					}
					}
				t0_ = Call_(write_co_, stream, Str_(4));
				return nil;
				}
			}
		
		
		t0_ = Call_(write_co_, stream, Str_(5));
		done_one = nil;
		t0_ = Call_(tuple, this_);
		ForStart_(1, t0_, value)
			{
			if (done_one)
				{
				t0_ = Call_(write_co_, stream, Str_(6));
				}
			else
				{
				done_one = true_;
				}
			t0_ = Call_(emit_value_co_on_co_, this_, value, stream);
			}
		ForEnd_(1)
		t0_ = Call_(write_co_, stream, Str_(7));
		
		}
	return nil;
}


obj_ iterator__Expression(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(iterator) UsingMethod_(tuple)

		{
		t0_ = Call_(tuple, this_);
		t1_ = Call_(iterator, t0_);
		return t1_;
		}
	return nil;
}


obj_ new_co___Expression(obj_ this_, obj_ num_items)
{
	UsingClass_(Expression)
	obj_ obj = AllocObj_(Expression);
	create_co___Expression(obj, num_items);
	return obj;
}


obj_ num_items__Expression(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(num_items) UsingMethod_(tuple)

		{
		t0_ = Call_(tuple, this_);
		t1_ = Call_(num_items, t0_);
		return t1_;
		}
	return nil;
}


obj_ with_co___Expression(obj_ this_, obj_ value)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	obj_ t0_;
	UsingInt_(1)
	UsingInt_(0)
	UsingMethod_(at_co_put_co_)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = new_co___Expression(Proto_(Expression), SmallInt_(1));
		expr = t0_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), value);
		return expr;
		}
	return nil;
}


obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	obj_ t0_;
	UsingInt_(2)
	UsingInt_(0)
	UsingInt_(1)
	UsingMethod_(at_co_put_co_)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = new_co___Expression(Proto_(Expression), SmallInt_(2));
		expr = t0_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), value_1);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(1), value_2);
		return expr;
		}
	return nil;
}


obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	obj_ t0_;
	UsingInt_(3)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingMethod_(at_co_put_co_)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = new_co___Expression(Proto_(Expression), SmallInt_(3));
		expr = t0_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), value_1);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(1), value_2);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(2), value_3);
		return expr;
		}
	return nil;
}


obj_ with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	obj_ t0_;
	UsingInt_(4)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingMethod_(at_co_put_co_)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = new_co___Expression(Proto_(Expression), SmallInt_(4));
		expr = t0_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), value_1);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(1), value_2);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(2), value_3);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(3), value_4);
		return expr;
		}
	return nil;
}


obj_ with_co_with_co_with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3, obj_ value_4, obj_ value_5)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	obj_ t0_;
	UsingInt_(5)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(4)
	UsingMethod_(at_co_put_co_)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = new_co___Expression(Proto_(Expression), SmallInt_(5));
		expr = t0_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), value_1);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(1), value_2);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(2), value_3);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(3), value_4);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(4), value_5);
		return expr;
		}
	return nil;
}


