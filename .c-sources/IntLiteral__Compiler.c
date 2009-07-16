#include "Trylon_.h"

UsingSym_(IntLiteral)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(IntLiteral__Compiler)
struct ClassInfo IntLiteral__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 108, 2, Proto_(IntLiteral__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(IntLiteral), nil, nil };
struct object IntLiteral__Compiler = 
	{ &IntLiteral__Compiler__classInfo_, {nil, nil} };



#define value__fld_	(0)
#define index__fld_	(1)


obj_ access__IntLiteral__Compiler(obj_ this_)
{
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ build_settings__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineString_(0, "tagged-ints")
	DefineString_(1, "SmallInt_(")
	DefineString_(2, ")")
	DefineString_(3, "Int_(")
	DefineString_(4, ")")
	DefineString_(5, "Int_(")
	DefineString_(6, ")")
	UsingMethod_(_pl_) UsingMethod_(at_co_) UsingMethod_(index) UsingMethod_(shared_ints) UsingMethod_(string) UsingMethod_(value) UsingMethod_(value_name)
	UsingClass_(Main)

		{
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(at_co_, t0_, Str_(0));
		if (t1_)
			{
			t0_ = Call_(value, this_);
			t1_ = Call_(string, t0_);
			t2_ = Call_(_pl_, Str_(1), t1_);
			t3_ = Call_(_pl_, t2_, Str_(2));
			return t3_;
			}
		t4_ = build_settings__Main(Proto_(Main));
		t5_ = Call_(shared_ints, t4_);
		if (t5_)
			{
			t0_ = Call_(value_name, this_);
			t1_ = Call_(_pl_, Str_(3), t0_);
			t2_ = Call_(_pl_, t1_, Str_(4));
			return t2_;
			}
		else
			{
			t3_ = Call_(index, this_);
			t4_ = Call_(string, t3_);
			t5_ = Call_(_pl_, Str_(5), t4_);
			t6_ = Call_(_pl_, t5_, Str_(6));
			return t6_;
			}
		}
	return nil;
}


obj_ compile_co___IntLiteral__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_int_literal_co_)

		{
		t0_ = Call_(compile_int_literal_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___IntLiteral__Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(int_) UsingMethod_(value_co_)

		{
		t0_ = Call_(int_, value);
		t1_ = Call_(value_co_, this_, t0_);
		}
	return nil;
}


obj_ emit_code_co___IntLiteral__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(1073741823)
	UsingInt_(1073741824)
	DefineString_(0, "tagged-ints")
	UsingMethod_(_lt_) UsingMethod_(_gt_) UsingMethod_(add_co_) UsingMethod_(at_co_) UsingMethod_(int_literals) UsingMethod_(shared_ints) UsingMethod_(unary_minus) UsingMethod_(using_int_co_) UsingMethod_(value)
	UsingSharedField_(compiler, Main) 
	UsingClass_(LiteralResult__CCompiler)
	UsingClass_(Main)

		{
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(at_co_, t0_, Str_(0));
		if (t1_)
			{
			/*  In order to generate code that'll run on both 32-bit and 64-bit */
			/*  systems, we'll only generate tagged ints for values that'll fit into */
			/*  31 bits. */
			t0_ = Call_(value, this_);
			t1_ = Call_(_lt_, t0_, SmallInt_(1073741823));
			if (t1_) {
				t2_ = Call_(value, this_);
				t3_ = Call_(unary_minus, SmallInt_(1073741824));
				t4_ = Call_(_gt_, t2_, t3_);
				t1_ = t4_;
				}
			if (t1_)
				{
				t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
				return t0_;
				}
			}
		
		t1_ = build_settings__Main(Proto_(Main));
		t2_ = Call_(shared_ints, t1_);
		if (t2_)
			{
			t0_ = Call_(value, this_);
			t1_ = Call_(using_int_co_, SharedField_(compiler, Main), t0_);
			}
		t0_ = Call_(int_literals, builder);
		t1_ = Call_(add_co_, t0_, this_);
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		}
	return nil;
}


obj_ emit_declaration_co___IntLiteral__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(3)
	UsingInt_(5)
	DefineString_(0, "\tUsingInt_(")
	DefineString_(1, ")")
	DefineString_(2, "\tDefineInt_(")
	DefineString_(3, ", ")
	DefineString_(4, ")")
	UsingMethod_(index) UsingMethod_(send_co_) UsingMethod_(shared_ints) UsingMethod_(string) UsingMethod_(value) UsingMethod_(value_name)
	UsingClass_(Main)

		{
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(shared_ints, t0_);
		if (t1_)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
			t0_->fields[1] = Str_(0);
			t1_ = Call_(value_name, this_);
			t0_->fields[2] = t1_;
			t0_->fields[3] = Str_(1);
			t2_ = Call_(send_co_, stream, t0_);
			}
		else
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
			t0_->fields[1] = Str_(2);
			t1_ = Call_(index, this_);
			t2_ = Call_(string, t1_);
			t0_->fields[2] = t2_;
			t0_->fields[3] = Str_(3);
			t3_ = Call_(value, this_);
			t4_ = Call_(string, t3_);
			t0_->fields[4] = t4_;
			t0_->fields[5] = Str_(4);
			t5_ = Call_(send_co_, stream, t0_);
			}
		}
	return nil;
}


obj_ interpreted__IntLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		return t0_;
		}
	return nil;
}


obj_ is_literal__IntLiteral__Compiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ jolt_expression__IntLiteral__Compiler(obj_ this_)
{
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(trylon_int_literal)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(value)
	UsingClass_(Expression)

		{
		t0_ = Call_(value, this_);
		t1_ = with_co_with_co___Expression(Proto_(Expression), Sym_(trylon_int_literal), t0_);
		return t1_;
		}
	return nil;
}


obj_ new_co___IntLiteral__Compiler(obj_ this_, obj_ value)
{
	UsingClass_(IntLiteral__Compiler)
	obj_ obj = AllocObj_(IntLiteral__Compiler);
	create_co___IntLiteral__Compiler(obj, value);
	return obj;
}


obj_ prepare_to_emit__IntLiteral__Compiler(obj_ this_)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


obj_ translate_co___IntLiteral__Compiler(obj_ this_, obj_ compiler)
{
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(translateExpression_co_) UsingMethod_(value)
	UsingClass_(Expression)

		{
		t0_ = Call_(value, this_);
		t1_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t0_);
		t2_ = Call_(translateExpression_co_, compiler, t1_);
		return t2_;
		}
	return nil;
}


obj_ value_name__IntLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(0)
	DefineString_(0, "m")
	UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(string) UsingMethod_(unary_minus) UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		t1_ = Call_(_lt_, t0_, SmallInt_(0));
		if (t1_)
			{
			t0_ = Call_(value, this_);
			t1_ = Call_(unary_minus, t0_);
			t2_ = Call_(string, t1_);
			t3_ = Call_(_pl_, Str_(0), t2_);
			return t3_;
			}
		else
			{
			t4_ = Call_(value, this_);
			t5_ = Call_(string, t4_);
			return t5_;
			}
		}
	return nil;
}


