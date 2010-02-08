#include "Trylon_.h"

UsingSym_(FloatLiteral)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(FloatLiteral__Compiler)
struct ClassInfo FloatLiteral__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 150, 2, Proto_(FloatLiteral__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(FloatLiteral), nil, nil };
struct object FloatLiteral__Compiler = 
	{ &FloatLiteral__Compiler__classInfo_, {nil, nil} };



#define value__fld_	(0)
#define index__fld_	(1)


obj_ access__FloatLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Float_(")
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


obj_ compile_co___FloatLiteral__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_float_literal_co_)

		{
		t0_ = Call_(compile_float_literal_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___FloatLiteral__Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(float_) UsingMethod_(value_co_)

		{
		t0_ = Call_(float_, value);
		t1_ = Call_(value_co_, this_, t0_);
		}
	return nil;
}


obj_ emit_code_co___FloatLiteral__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_co_) UsingMethod_(float_literals)
	UsingClass_(LiteralResult__CCompiler)

		{
		t0_ = Call_(float_literals, builder);
		t1_ = Call_(add_co_, t0_, this_);
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		}
	return nil;
}


obj_ emit_declaration_co___FloatLiteral__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(5)
	DefineString_(0, "\tDefineFloat_(")
	DefineString_(1, ", ")
	DefineString_(2, ")\n")
	UsingMethod_(index) UsingMethod_(string) UsingMethod_(value) UsingMethod_(write_all_co_)

		{
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
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


obj_ interpreted__FloatLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		return t0_;
		}
	return nil;
}


obj_ is_literal__FloatLiteral__Compiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ new_co___FloatLiteral__Compiler(obj_ this_, obj_ value)
{
	UsingClass_(FloatLiteral__Compiler)
	obj_ obj = AllocObj_(FloatLiteral__Compiler);
	create_co___FloatLiteral__Compiler(obj, value);
	return obj;
}


obj_ resolve__FloatLiteral__Compiler(obj_ this_)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


