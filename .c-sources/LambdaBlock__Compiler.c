#include "Trylon_.h"

UsingSym_(LambdaBlock)UsingClass_(Compiler)
UsingClass_(Block__Compiler)
UsingClass_(LambdaBlock__Compiler)
struct ClassInfo LambdaBlock__Compiler__classInfo_ = 
	{ 73, 16, Proto_(LambdaBlock__Compiler), Proto_(Compiler), Proto_(Block__Compiler), nil, Sym_(LambdaBlock) ,nil };
struct object LambdaBlock__Compiler = 
	{ &LambdaBlock__Compiler__classInfo_, {nil, nil, nil, nil} };



#define parent__fld_	(0)
#define locals__fld_	(1)
#define statements__fld_	(2)

#define arguments__fld_	(3)


obj_ add_argument_co___LambdaBlock__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(arguments) UsingMethod_(at_co_put_co_)
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	UsingClass_(CompiledField__Compiler)

		{
		t0_ = Call_(arguments, this_);
		t1_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), name, nil);
		t2_ = Call_(at_co_put_co_, t0_, name, t1_);
		
		
		}
	return nil;
}


obj_ arguments__LambdaBlock__Compiler(obj_ this_)
{
	return Field_(arguments);
}


obj_ arguments_co___LambdaBlock__Compiler(obj_ this_, obj_ value)
{
	Field_(arguments) = value;
	return value;
}


obj_ create_co___LambdaBlock__Compiler(obj_ this_, obj_ parent)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(arguments_co_)
	obj_ create_co___Block__Compiler(obj_, obj_);
	extern obj_ new__Dictionary__Standard(obj_ this_);
	UsingClass_(Dictionary__Standard)

		{
		t0_ = create_co___Block__Compiler(this_, parent);
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(arguments_co_, this_, t0_);
		
		
		}
	return nil;
}


obj_ is_lambda__LambdaBlock__Compiler(obj_ this_)
{

		{
		return true_;
		
		
		}
	return nil;
}


obj_ jolt_expression__LambdaBlock__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	UsingMethod_(arguments) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(lambda)
	obj_ jolt_expression__Block__Compiler(obj_);
	UsingClass_(Expression)

		{
		obj_ args, index;
		t0_ = Call_(arguments, this_);
		t1_ = Call_(count, t0_);
		t2_ = new_co___Expression(Proto_(Expression), t1_);
		args = t2_;
		index = Int_(0);
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, arg)
			{
			t0_ = Call_(name, arg);
			t1_ = Call_(intern, t0_);
			t2_ = Call_(at_co_put_co_, args, index, t1_);
			}
		ForEnd_(0)
		t0_ = jolt_expression__Block__Compiler(this_);
		t1_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(lambda), args, t0_);
		return t1_;
		
		
		
		
		}
	return nil;
}


obj_ lookup_function_co___LambdaBlock__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineString_(0, ":")
	UsingMethod_(_) UsingMethod_(arguments) UsingMethod_(at_co_) UsingMethod_(ends_with_co_) UsingMethod_(length) UsingMethod_(substr_co_length_co_)
	extern obj_ new_co___SetArgumentFunction__Compiler(obj_ this_, obj_ arg);
	extern obj_ new_co___ArgumentFunction__Compiler(obj_ this_, obj_ arg);
	obj_ lookup_function_co___Block__Compiler(obj_, obj_);
	UsingClass_(SetArgumentFunction__Compiler)
	UsingClass_(ArgumentFunction__Compiler)

		{
		obj_ arg, arg_name, is_setter;
		/* See if there's an argument for it. */
		arg_name = name;
		is_setter = nil;
		t0_ = Call_(ends_with_co_, name, Str_(0));
		if (t0_)
			{
			t0_ = Call_(length, name);
			t1_ = Call_(_, t0_, Int_(1));
			t2_ = Call_(substr_co_length_co_, name, Int_(0), t1_);
			arg_name = t2_;
			is_setter = true_;
			}
		t0_ = Call_(arguments, this_);
		t1_ = Call_(at_co_, t0_, arg_name);
		arg = t1_;
		if (arg)
			{
			if (is_setter)
				{
				t0_ = new_co___SetArgumentFunction__Compiler(Proto_(SetArgumentFunction__Compiler), arg);
				return t0_;
				}
			else
				{
				t1_ = new_co___ArgumentFunction__Compiler(Proto_(ArgumentFunction__Compiler), arg);
				return t1_;
				
				}
			}
		t2_ = lookup_function_co___Block__Compiler(this_, name);
		return t2_;
		
		
		}
	return nil;
}


obj_ new_co___LambdaBlock__Compiler(obj_ this_, obj_ parent)
{
	UsingClass_(LambdaBlock__Compiler)
	obj_ obj = AllocObj_(LambdaBlock__Compiler);
	create_co___LambdaBlock__Compiler(obj, parent);
	return obj;
}


