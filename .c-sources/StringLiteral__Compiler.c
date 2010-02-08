#include "Trylon_.h"

UsingSym_(StringLiteral)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(StringLiteral__Compiler)
struct ClassInfo StringLiteral__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 151, 2, Proto_(StringLiteral__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(StringLiteral), nil, nil };
struct object StringLiteral__Compiler = 
	{ &StringLiteral__Compiler__classInfo_, {nil, nil} };



#define value__fld_	(0)
#define index__fld_	(1)


obj_ access__StringLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Str_(")
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


obj_ compile_co___StringLiteral__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_string_literal_co_)

		{
		t0_ = Call_(compile_string_literal_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___StringLiteral__Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	UsingMethod_(value_co_)

		{
		t0_ = Call_(value_co_, this_, value);
		}
	return nil;
}


obj_ emit_code_co___StringLiteral__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_co_) UsingMethod_(string_literals)
	UsingClass_(LiteralResult__CCompiler)

		{
		t0_ = Call_(string_literals, builder);
		t1_ = Call_(add_co_, t0_, this_);
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		}
	return nil;
}


obj_ emit_declaration_co___StringLiteral__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ escape_string_for_c_co___CCompiler(obj_ this_, obj_ string);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(5)
	DefineString_(0, "\tDefineString_(")
	DefineString_(1, ", \"")
	DefineString_(2, "\")\n")
	UsingMethod_(index) UsingMethod_(string) UsingMethod_(value) UsingMethod_(write_all_co_)
	UsingClass_(CCompiler)

		{
		obj_ escaped_string;
		t0_ = Call_(value, this_);
		t1_ = Call_(string, t0_);
		t2_ = escape_string_for_c_co___CCompiler(Proto_(CCompiler), t1_);
		escaped_string = t2_;
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
		t0_->fields[1] = Str_(0);
		t1_ = Call_(index, this_);
		t2_ = Call_(string, t1_);
		t0_->fields[2] = t2_;
		t0_->fields[3] = Str_(1);
		t0_->fields[4] = escaped_string;
		t0_->fields[5] = Str_(2);
		t3_ = Call_(write_all_co_, stream, t0_);
		}
	return nil;
}


obj_ interpreted__StringLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(value)

		{
		t0_ = Call_(value, this_);
		return t0_;
		}
	return nil;
}


obj_ is_literal__StringLiteral__Compiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ new_co___StringLiteral__Compiler(obj_ this_, obj_ value)
{
	UsingClass_(StringLiteral__Compiler)
	obj_ obj = AllocObj_(StringLiteral__Compiler);
	create_co___StringLiteral__Compiler(obj, value);
	return obj;
}


obj_ resolve__StringLiteral__Compiler(obj_ this_)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


