#include "Trylon_.h"

UsingSym_(CharacterLiteral)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(CharacterLiteral__Compiler)
struct ClassInfo CharacterLiteral__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 150, 2, Proto_(CharacterLiteral__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(CharacterLiteral), nil, nil };
struct object CharacterLiteral__Compiler = 
	{ &CharacterLiteral__Compiler__classInfo_, {nil, nil} };



#define char___fld_	(0)
#define index__fld_	(1)


obj_ access__CharacterLiteral__Compiler(obj_ this_)
{
	extern obj_ build_settings__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	DefineString_(0, "Int_(")
	DefineString_(1, ")")
	DefineString_(2, "Int_(")
	DefineString_(3, ")")
	UsingMethod_(_pl_) UsingMethod_(char_) UsingMethod_(index) UsingMethod_(shared_ints) UsingMethod_(string)
	UsingClass_(Main)

		{
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(shared_ints, t0_);
		if (t1_)
			{
			t0_ = Call_(char_, this_);
			t1_ = Call_(string, t0_);
			t2_ = Call_(_pl_, Str_(0), t1_);
			t3_ = Call_(_pl_, t2_, Str_(1));
			return t3_;
			}
		else
			{
			t4_ = Call_(index, this_);
			t5_ = Call_(string, t4_);
			t6_ = Call_(_pl_, Str_(2), t5_);
			t7_ = Call_(_pl_, t6_, Str_(3));
			return t7_;
			}
		}
	return nil;
}


obj_ compile_co___CharacterLiteral__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_char_literal_co_)

		{
		t0_ = Call_(compile_char_literal_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co___CharacterLiteral__Compiler(obj_ this_, obj_ char_)
{
	obj_ t0_;
	UsingMethod_(char_co_)

		{
		t0_ = Call_(char_co_, this_, char_);
		}
	return nil;
}


obj_ emit_code_co___CharacterLiteral__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_co_) UsingMethod_(char_) UsingMethod_(int_literals) UsingMethod_(shared_ints) UsingMethod_(using_int_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(LiteralResult__CCompiler)
	UsingClass_(Main)

		{
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(shared_ints, t0_);
		if (t1_)
			{
			t0_ = Call_(char_, this_);
			t1_ = Call_(using_int_co_, SharedField_(compiler, Main), t0_);
			}
		t0_ = Call_(int_literals, builder);
		t1_ = Call_(add_co_, t0_, this_);
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		}
	return nil;
}


obj_ emit_declaration_co___CharacterLiteral__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(3)
	UsingInt_(5)
	DefineString_(0, "\tUsingInt_(")
	DefineString_(1, ")")
	DefineString_(2, "\tDefineInt_(")
	DefineString_(3, ", ")
	DefineString_(4, ")")
	UsingMethod_(char_) UsingMethod_(index) UsingMethod_(send_co_) UsingMethod_(shared_ints) UsingMethod_(string)
	UsingClass_(Main)

		{
		obj_ char_string;
		char_string = nil;
			{
			t0_ = Call_(char_, this_);
			t1_ = Call_(string, t0_);
			char_string = t1_;
			}
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(shared_ints, t0_);
		if (t1_)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
			t0_->fields[1] = Str_(0);
			t0_->fields[2] = char_string;
			t0_->fields[3] = Str_(1);
			t1_ = Call_(send_co_, stream, t0_);
			}
		else
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
			t0_->fields[1] = Str_(2);
			t1_ = Call_(index, this_);
			t2_ = Call_(string, t1_);
			t0_->fields[2] = t2_;
			t0_->fields[3] = Str_(3);
			t0_->fields[4] = char_string;
			t0_->fields[5] = Str_(4);
			t3_ = Call_(send_co_, stream, t0_);
			}
		}
	return nil;
}


obj_ interpreted__CharacterLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(char_)

		{
		t0_ = Call_(char_, this_);
		return t0_;
		}
	return nil;
}


obj_ is_literal__CharacterLiteral__Compiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ new_co___CharacterLiteral__Compiler(obj_ this_, obj_ char_)
{
	UsingClass_(CharacterLiteral__Compiler)
	obj_ obj = AllocObj_(CharacterLiteral__Compiler);
	create_co___CharacterLiteral__Compiler(obj, char_);
	return obj;
}


obj_ resolve__CharacterLiteral__Compiler(obj_ this_)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


