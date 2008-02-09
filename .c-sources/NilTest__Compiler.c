#include "Trylon_.h"

UsingSym_(NilTest)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(NilTest__Compiler)
struct ClassInfo NilTest__Compiler__classInfo_ = 
	{ 98, 8, Proto_(NilTest__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(NilTest) ,nil };
struct object NilTest__Compiler = 
	{ &NilTest__Compiler__classInfo_, {nil, nil} };



#define object__fld_	(0)
#define is_nil__fld_	(1)


obj_ create_co_is_nil_co___NilTest__Compiler(obj_ this_, obj_ object, obj_ is_nil)
{
	obj_ t0_;
	UsingMethod_(is_nil_co_) UsingMethod_(object_co_)

		{
		t0_ = Call_(object_co_, this_, object);
		t0_ = Call_(is_nil_co_, this_, is_nil);
		
		
		}
	return nil;
}


obj_ emit_code_co___NilTest__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	DefineString_(0, "Not_")
	DefineString_(1, "Bool_")
	DefineString_(2, " = ")
	DefineString_(3, "(")
	DefineString_(4, ");")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(emit_code_co_) UsingMethod_(get_temporary) UsingMethod_(is_nil) UsingMethod_(name) UsingMethod_(object)

		{
		obj_ object_result, temp, test;
		test = Str_(0);
		t0_ = Call_(is_nil, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			test = Str_(1);
			}
		t0_ = Call_(object, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		object_result = t1_;
		t0_ = Call_(get_temporary, builder);
		temp = t0_;
		t0_ = Call_(name, temp);
		t1_ = Call_(_pl_, t0_, Str_(2));
		t2_ = Call_(_pl_, t1_, test);
		t3_ = Call_(_pl_, t2_, Str_(3));
		t4_ = Call_(access, object_result);
		t5_ = Call_(_pl_, t3_, t4_);
		t6_ = Call_(_pl_, t5_, Str_(4));
		t7_ = Call_(add_line_co_, builder, t6_);
		return temp;
		
		
		
		}
	return nil;
}


obj_ interpreted__NilTest__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(interpreted) UsingMethod_(is_nil) UsingMethod_(object)

		{
		obj_ result;
		t0_ = Call_(object, this_);
		t1_ = Call_(interpreted, t0_);
		t2_ = Not_(t1_);
		result = t2_;
		t0_ = Call_(is_nil, this_);
		if (t0_)
			{
			t0_ = Not_(result);
			result = t0_;
			}
		return result;
		
		
		
		}
	return nil;
}


obj_ is_nil__NilTest__Compiler(obj_ this_)
{
	return Field_(is_nil);
}


obj_ is_nil_co___NilTest__Compiler(obj_ this_, obj_ value)
{
	Field_(is_nil) = value;
	return value;
}


obj_ jolt_expression__NilTest__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 3)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	DefineInt_(3, 2)
	UsingMethod_(at_co_put_co_) UsingMethod_(is_nil) UsingMethod_(jolt_expression) UsingMethod_(object)
	UsingSym_(isNil)
	UsingSym_(notNil)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingClass_(Expression)

		{
		obj_ expr, message;
		message = Sym_(isNil);
		t0_ = Call_(is_nil, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			message = Sym_(notNil);
			}
		t0_ = new_co___Expression(Proto_(Expression), Int_(0));
		expr = t0_;
		t0_ = Call_(at_co_put_co_, expr, Int_(1), Sym_(send));
		t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), message);
		t1_ = Call_(at_co_put_co_, expr, Int_(2), t0_);
		t0_ = Call_(object, this_);
		t1_ = Call_(jolt_expression, t0_);
		t2_ = Call_(at_co_put_co_, expr, Int_(3), t1_);
		return expr;
		
		}
	return nil;
}


obj_ new_co_is_nil_co___NilTest__Compiler(obj_ this_, obj_ object, obj_ is_nil)
{
	UsingClass_(NilTest__Compiler)
	obj_ obj = AllocObj_(NilTest__Compiler);
	create_co_is_nil_co___NilTest__Compiler(obj, object, is_nil);
	return obj;
}


obj_ object__NilTest__Compiler(obj_ this_)
{
	return Field_(object);
}


obj_ object_co___NilTest__Compiler(obj_ this_, obj_ value)
{
	Field_(object) = value;
	return value;
}


obj_ prepare_to_emit__NilTest__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(object) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(object, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		
		
		
		}
	return nil;
}


obj_ translate_co___NilTest__Compiler(obj_ this_, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 3)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	DefineInt_(3, 2)
	UsingMethod_(at_co_put_co_) UsingMethod_(is_nil) UsingMethod_(object) UsingMethod_(translateExpression_co_)
	UsingSym_(isNil)
	UsingSym_(notNil)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingClass_(Expression)

		{
		obj_ expr, message;
		message = Sym_(isNil);
		t0_ = Call_(is_nil, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			message = Sym_(notNil);
			}
		t0_ = new_co___Expression(Proto_(Expression), Int_(0));
		expr = t0_;
		t0_ = Call_(at_co_put_co_, expr, Int_(1), Sym_(send));
		t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), message);
		t1_ = Call_(at_co_put_co_, expr, Int_(2), t0_);
		t0_ = Call_(object, this_);
		t1_ = Call_(at_co_put_co_, expr, Int_(3), t0_);
		t0_ = Call_(translateExpression_co_, compiler, expr);
		return t0_;
		
		
		
		}
	return nil;
}


