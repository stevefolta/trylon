#include "Trylon_.h"

UsingSym_(SymbolLiteral)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(SymbolLiteral__Compiler)
struct ClassInfo SymbolLiteral__Compiler__classInfo_ = 
	{ 90, 4, Proto_(SymbolLiteral__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(SymbolLiteral) ,nil };
struct object SymbolLiteral__Compiler = 
	{ &SymbolLiteral__Compiler__classInfo_, {nil} };



#define name__fld_	(0)


obj_ create_co___SymbolLiteral__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(name_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		
		
		}
	return nil;
}


obj_ emit_code_co___SymbolLiteral__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	extern obj_ new_co_is_constant_co___NameResult__CCompiler(obj_ this_, obj_ name, obj_ is_constant);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "UsingSym_(")
	DefineString_(1, ")")
	DefineString_(2, "Sym_(")
	DefineString_(3, ")")
	UsingMethod_(_pl_) UsingMethod_(add_extern_declaration_co_) UsingMethod_(name) UsingMethod_(using_symbol_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(Compiler)
	UsingClass_(NameResult__CCompiler)

		{
		obj_ mangled_name;
		t0_ = Call_(name, this_);
		t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
		mangled_name = t1_;
		t0_ = Call_(name, this_);
		t1_ = Call_(using_symbol_co_, SharedField_(compiler, Main), t0_);
		t0_ = Call_(_pl_, Str_(0), mangled_name);
		t1_ = Call_(_pl_, t0_, Str_(1));
		t2_ = Call_(add_extern_declaration_co_, builder, t1_);
		t0_ = Call_(_pl_, Str_(2), mangled_name);
		t1_ = Call_(_pl_, t0_, Str_(3));
		t2_ = new_co_is_constant_co___NameResult__CCompiler(Proto_(NameResult__CCompiler), t1_, true_);
		return t2_;
		
		}
	return nil;
}


obj_ emit_declaration_co___SymbolLiteral__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	DefineInt_(0, 3)
	DefineString_(0, "\tUsingSym_(")
	DefineString_(1, "\")\n")
	UsingMethod_(name) UsingMethod_(write_all_co_)
	UsingClass_(Compiler)

		{
		obj_ mangled_name;
		t0_ = Call_(name, this_);
		t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
		mangled_name = t1_;
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), Int_(0));
		t0_->fields[1] = Str_(0);
		t0_->fields[2] = mangled_name;
		t0_->fields[3] = Str_(1);
		t1_ = Call_(write_all_co_, stream, t0_);
		
		
		}
	return nil;
}


obj_ interpreted__SymbolLiteral__Compiler(obj_ this_)
{
	extern obj_ intern_co___Symbol__Standard(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(name)
	UsingClass_(Symbol__Standard)

		{
		t0_ = Call_(name, this_);
		t1_ = intern_co___Symbol__Standard(Proto_(Symbol__Standard), t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ is_literal__SymbolLiteral__Compiler(obj_ this_)
{

		{
		return true_;
		
		}
	return nil;
}


obj_ jolt_expression__SymbolLiteral__Compiler(obj_ this_)
{
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(intern) UsingMethod_(name)
	UsingClass_(Expression)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t1_);
		return t2_;
		
		}
	return nil;
}


obj_ name__SymbolLiteral__Compiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___SymbolLiteral__Compiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co___SymbolLiteral__Compiler(obj_ this_, obj_ name)
{
	UsingClass_(SymbolLiteral__Compiler)
	obj_ obj = AllocObj_(SymbolLiteral__Compiler);
	create_co___SymbolLiteral__Compiler(obj, name);
	return obj;
}


obj_ prepare_to_emit__SymbolLiteral__Compiler(obj_ this_)
{

		{
		/* Nothing to do. */
		
		
		
		
		}
	return nil;
}


obj_ translate_co___SymbolLiteral__Compiler(obj_ this_, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(jolt_expression) UsingMethod_(translateExpression_co_)

		{
		t0_ = Call_(jolt_expression, this_);
		t1_ = Call_(translateExpression_co_, compiler, t0_);
		return t1_;
		
		
		}
	return nil;
}


