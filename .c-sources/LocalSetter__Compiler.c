#include "Trylon_.h"

UsingSym_(LocalSetter)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(LocalSetter__Compiler)
struct ClassInfo LocalSetter__Compiler__classInfo_ = 
	{ 119, 4, Proto_(LocalSetter__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(LocalSetter) ,nil };
struct object LocalSetter__Compiler = 
	{ &LocalSetter__Compiler__classInfo_, {nil} };



#define local__fld_	(0)


obj_ create_co___LocalSetter__Compiler(obj_ this_, obj_ local)
{
	obj_ t0_;
	UsingMethod_(local_co_)

		{
		t0_ = Call_(local_co_, this_, local);
		
		
		
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___LocalSetter__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, " = ")
	DefineString_(1, ";")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(emit_code_co_) UsingMethod_(first_item) UsingMethod_(local) UsingMethod_(name)
	UsingClass_(Compiler)

		{
		obj_ mangled_name, value;
		t0_ = Call_(local, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		mangled_name = t2_;
		t0_ = Call_(first_item, arguments);
		t1_ = Call_(emit_code_co_, t0_, builder);
		value = t1_;
		t0_ = Call_(_pl_, mangled_name, Str_(0));
		t1_ = Call_(access, value);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		t4_ = Call_(add_line_co_, builder, t3_);
		return value;
		
		
		}
	return nil;
}


obj_ emit_call_co___LocalSetter__Compiler(obj_ this_, obj_ arguments)
{
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(set)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingMethod_(first_item) UsingMethod_(intern) UsingMethod_(jolt_expression) UsingMethod_(local) UsingMethod_(name)
	UsingClass_(Expression)

		{
		t0_ = Call_(local, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(intern, t1_);
		t3_ = Call_(first_item, arguments);
		t4_ = Call_(jolt_expression, t3_);
		t5_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(set), t2_, t4_);
		return t5_;
		
		
		}
	return nil;
}


obj_ interpret_call_with_co___LocalSetter__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(first_item) UsingMethod_(initial_value_co_) UsingMethod_(interpreted) UsingMethod_(local)

		{
		t0_ = Call_(local, this_);
		t1_ = Call_(first_item, arguments);
		t2_ = Call_(interpreted, t1_);
		t3_ = Call_(initial_value_co_, t0_, t2_);
		
		}
	return nil;
}


obj_ local__LocalSetter__Compiler(obj_ this_)
{
	return Field_(local);
}


obj_ local_co___LocalSetter__Compiler(obj_ this_, obj_ value)
{
	Field_(local) = value;
	return value;
}


obj_ new_co___LocalSetter__Compiler(obj_ this_, obj_ local)
{
	UsingClass_(LocalSetter__Compiler)
	obj_ obj = AllocObj_(LocalSetter__Compiler);
	create_co___LocalSetter__Compiler(obj, local);
	return obj;
}


obj_ translate_call_co_compiler_co___LocalSetter__Compiler(obj_ this_, obj_ arguments, obj_ compiler)
{
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(set)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingMethod_(first_item) UsingMethod_(intern) UsingMethod_(local) UsingMethod_(name) UsingMethod_(translateExpression_co_)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = Call_(local, this_);
		t1_ = Call_(name, t0_);
		t2_ = Call_(intern, t1_);
		t3_ = Call_(first_item, arguments);
		t4_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(set), t2_, t3_);
		expr = t4_;
		t0_ = Call_(translateExpression_co_, compiler, expr);
		return t0_;
		
		
		}
	return nil;
}


