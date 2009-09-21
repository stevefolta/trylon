#include "Trylon_.h"

UsingSym_(ShortCircuitOr)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(ShortCircuitOr__Compiler)
struct ClassInfo ShortCircuitOr__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 151, 2, Proto_(ShortCircuitOr__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(ShortCircuitOr), nil, nil };
struct object ShortCircuitOr__Compiler = 
	{ &ShortCircuitOr__Compiler__classInfo_, {nil, nil} };



#define expr1__fld_	(0)
#define expr2__fld_	(1)


obj_ compile_co___ShortCircuitOr__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_short_circuit_or_co_)

		{
		t0_ = Call_(compile_short_circuit_or_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co_with_co___ShortCircuitOr__Compiler(obj_ this_, obj_ expr1, obj_ expr2)
{
	obj_ t0_;
	UsingMethod_(expr1_co_) UsingMethod_(expr2_co_)

		{
		t0_ = Call_(expr1_co_, this_, expr1);
		t0_ = Call_(expr2_co_, this_, expr2);
		}
	return nil;
}


obj_ emit_code_co___ShortCircuitOr__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, " = ")
	DefineString_(1, ";")
	DefineString_(2, "if ((")
	DefineString_(3, ") == nil) {")
	DefineString_(4, " = ")
	DefineString_(5, ";")
	DefineString_(6, "}")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(emit_code_co_) UsingMethod_(expr1) UsingMethod_(expr2) UsingMethod_(get_temporary) UsingMethod_(indent) UsingMethod_(is_a_co_) UsingMethod_(name) UsingMethod_(unindent)
	UsingClass_(Temporary__CCompiler)

		{
		obj_ result, result2;
		t0_ = Call_(expr1, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		result = t1_;
		t0_ = Call_(is_a_co_, result, Proto_(Temporary__CCompiler));
		t1_ = Not_(t0_);
		if (t1_)
			{
			obj_ temporary;
			/*  If it's already a temporary, we just reuse it for our final reault;  */
			/*  otherwise we need a new temporary. */
			t0_ = Call_(get_temporary, builder);
			temporary = t0_;
			t0_ = Call_(name, temporary);
			t1_ = Call_(_pl_, t0_, Str_(0));
			t2_ = Call_(access, result);
			t3_ = Call_(_pl_, t1_, t2_);
			t4_ = Call_(_pl_, t3_, Str_(1));
			t5_ = Call_(add_line_co_, builder, t4_);
			result = temporary;
			}
		
		t0_ = Call_(access, result);
		t1_ = Call_(_pl_, Str_(2), t0_);
		t2_ = Call_(_pl_, t1_, Str_(3));
		t3_ = Call_(add_line_co_, builder, t2_);
		t0_ = Call_(indent, builder);
		t0_ = Call_(expr2, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		result2 = t1_;
		t0_ = Call_(access, result);
		t1_ = Call_(_pl_, t0_, Str_(4));
		t2_ = Call_(access, result2);
		t3_ = Call_(_pl_, t1_, t2_);
		t4_ = Call_(_pl_, t3_, Str_(5));
		t5_ = Call_(add_line_co_, builder, t4_);
		t0_ = Call_(add_line_co_, builder, Str_(6));
		t0_ = Call_(unindent, builder);
		
		return result;
		}
	return nil;
}


obj_ interpreted__ShortCircuitOr__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(expr1) UsingMethod_(expr2) UsingMethod_(interpreted)

		{
		obj_ result;
		t0_ = Call_(expr1, this_);
		t1_ = Call_(interpreted, t0_);
		result = t1_;
		t0_ = Not_(result);
		if (t0_)
			{
			t0_ = Call_(expr2, this_);
			t1_ = Call_(interpreted, t0_);
			result = t1_;
			}
		return result;
		}
	return nil;
}


obj_ new_co_with_co___ShortCircuitOr__Compiler(obj_ this_, obj_ expr1, obj_ expr2)
{
	UsingClass_(ShortCircuitOr__Compiler)
	obj_ obj = AllocObj_(ShortCircuitOr__Compiler);
	create_co_with_co___ShortCircuitOr__Compiler(obj, expr1, expr2);
	return obj;
}


obj_ resolve__ShortCircuitOr__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(expr1) UsingMethod_(expr2) UsingMethod_(resolve)

		{
		t0_ = Call_(expr1, this_);
		t1_ = Call_(resolve, t0_);
		t0_ = Call_(expr2, this_);
		t1_ = Call_(resolve, t0_);
		}
	return nil;
}


