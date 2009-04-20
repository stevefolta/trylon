#include "Trylon_.h"

UsingSym_(IntLiteral)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(IntLiteral__Compiler)
struct ClassInfo IntLiteral__Compiler__classInfo_ = 
	{ 89, 2, Proto_(IntLiteral__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(IntLiteral) ,nil };
struct object IntLiteral__Compiler = 
	{ &IntLiteral__Compiler__classInfo_, {nil, nil} };



#define value__fld_	(0)
#define index__fld_	(1)


obj_ access__IntLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Int_(")
	DefineString_(1, ")")
	UsingMethod_(_pl_) UsingMethod_(index) UsingMethod_(string)

		{
		t0_ = Call_(index, this_);
		t1_ = Call_(string, t0_);
		t2_ = Call_(_pl_, Str_(0), t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		return t3_;
		
		
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
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_co_) UsingMethod_(int_literals)
	UsingClass_(LiteralResult__CCompiler)

		{
		t0_ = Call_(int_literals, builder);
		t1_ = Call_(add_co_, t0_, this_);
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		
		}
	return nil;
}


obj_ emit_declaration_co___IntLiteral__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineInt_(0, 5)
	DefineString_(0, "\tDefineInt_(")
	DefineString_(1, ", ")
	DefineString_(2, ")\n")
	UsingMethod_(index) UsingMethod_(string) UsingMethod_(value) UsingMethod_(write_all_co_)

		{
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(0));
		t0_->fields[1] = Str_(0);
		t1_ = Call_(index, this_);
		t2_ = Call_(string, t1_);
		t0_->fields[2] = t2_;
		t0_->fields[3] = Str_(1);
		t3_ = Call_(value, this_);
		t4_ = Call_(string, t3_);
		t0_->fields[4] = t4_;
		t0_->fields[5] = Str_(2);
		t5_ = Call_(write_all_co_, stream, t0_);
		
		}
	return nil;
}


obj_ index__IntLiteral__Compiler(obj_ this_)
{
	return Field_(index);
}


obj_ index_co___IntLiteral__Compiler(obj_ this_, obj_ value)
{
	Field_(index) = value;
	return value;
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
		/* Nothing to do. */
		
		
		
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


obj_ value__IntLiteral__Compiler(obj_ this_)
{
	return Field_(value);
}


obj_ value_co___IntLiteral__Compiler(obj_ this_, obj_ value)
{
	Field_(value) = value;
	return value;
}


