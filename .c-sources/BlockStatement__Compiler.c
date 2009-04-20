#include "Trylon_.h"

UsingSym_(BlockStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(BlockStatement__Compiler)
struct ClassInfo BlockStatement__Compiler__classInfo_ = 
	{ 131, 2, Proto_(BlockStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(BlockStatement) ,nil };
struct object BlockStatement__Compiler = 
	{ &BlockStatement__Compiler__classInfo_, {nil, nil} };


#define comment__fld_	(0)

#define block__fld_	(1)


obj_ block__BlockStatement__Compiler(obj_ this_)
{
	return Field_(block);
}


obj_ block_co___BlockStatement__Compiler(obj_ this_, obj_ value)
{
	Field_(block) = value;
	return value;
}


obj_ create_co___BlockStatement__Compiler(obj_ this_, obj_ block)
{
	obj_ t0_;
	UsingMethod_(block_co_)

		{
		t0_ = Call_(block_co_, this_, block);
		
		
		}
	return nil;
}


obj_ emit_code_co___BlockStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(emit_code_co_)

		{
		t0_ = Call_(block, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		
		}
	return nil;
}


obj_ interpreted__BlockStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(interpreted)

		{
		t0_ = Call_(block, this_);
		t1_ = Call_(interpreted, t0_);
		return t1_;
		
		}
	return nil;
}


obj_ jolt_expression__BlockStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(jolt_expression)

		{
		t0_ = Call_(block, this_);
		t1_ = Call_(jolt_expression, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ new_co___BlockStatement__Compiler(obj_ this_, obj_ block)
{
	UsingClass_(BlockStatement__Compiler)
	obj_ obj = AllocObj_(BlockStatement__Compiler);
	create_co___BlockStatement__Compiler(obj, block);
	return obj;
}


obj_ prepare_to_emit__BlockStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(block, this_);
		t1_ = Call_(prepare_to_emit, t0_);
		
		}
	return nil;
}


obj_ translate_co___BlockStatement__Compiler(obj_ this_, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(block) UsingMethod_(translate_co_)

		{
		t0_ = Call_(block, this_);
		t1_ = Call_(translate_co_, t0_, compiler);
		return t1_;
		
		
		
		
		}
	return nil;
}


