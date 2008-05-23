#include "Trylon_.h"

UsingSym_(FunctionCall)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(FunctionCall__Compiler)
struct ClassInfo FunctionCall__Compiler__classInfo_ = 
	{ 85, 16, Proto_(FunctionCall__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(FunctionCall) ,nil };
struct object FunctionCall__Compiler = 
	{ &FunctionCall__Compiler__classInfo_, {nil, nil, nil, nil} };



#define name__fld_	(0)
#define arguments__fld_	(1)
#define context__fld_	(2)
#define function__fld_	(3)


obj_ arguments__FunctionCall__Compiler(obj_ this_)
{
	return Field_(arguments);
}


obj_ arguments_co___FunctionCall__Compiler(obj_ this_, obj_ value)
{
	Field_(arguments) = value;
	return value;
}


obj_ context__FunctionCall__Compiler(obj_ this_)
{
	return Field_(context);
}


obj_ context_co___FunctionCall__Compiler(obj_ this_, obj_ value)
{
	Field_(context) = value;
	return value;
}


obj_ convert_to_setter_call_co___FunctionCall__Compiler(obj_ this_, obj_ value)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, ":")
	DefineString_(1, "put:")
	DefineString_(2, ":")
	UsingMethod_(_pl_) UsingMethod_(append_co_) UsingMethod_(arguments) UsingMethod_(ends_with_co_) UsingMethod_(name) UsingMethod_(name_co_)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(ends_with_co_, t0_, Str_(0));
		if (t1_)
			{
			t0_ = Call_(name, this_);
			t1_ = Call_(_pl_, t0_, Str_(1));
			t2_ = Call_(name_co_, this_, t1_);
			}
		else
			{
			t0_ = Call_(name, this_);
			t1_ = Call_(_pl_, t0_, Str_(2));
			t2_ = Call_(name_co_, this_, t1_);
			}
		t0_ = Call_(arguments, this_);
		t1_ = Call_(append_co_, t0_, value);
		
		
		}
	return nil;
}


obj_ copy__FunctionCall__Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co_arguments_co_context_co___FunctionCall__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ context);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(append_co_) UsingMethod_(arguments) UsingMethod_(context) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name)
	UsingClass_(List__Standard)
	UsingClass_(FunctionCall__Compiler)

		{
		obj_ copied_args;
		t0_ = new__List__Standard(Proto_(List__Standard));
		copied_args = t0_;
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, arg)
			{
			t0_ = Call_(append_co_, copied_args, arg);
			}
		ForEnd_(0)
		t0_ = Call_(name, this_);
		t1_ = Call_(context, this_);
		t2_ = new_co_arguments_co_context_co___FunctionCall__Compiler(Proto_(FunctionCall__Compiler), t0_, copied_args, t1_);
		return t2_;
		
		
		
		}
	return nil;
}


obj_ create_co_arguments_co_context_co___FunctionCall__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ context)
{
	obj_ t0_;
	UsingMethod_(arguments_co_) UsingMethod_(context_co_) UsingMethod_(name_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(arguments_co_, this_, arguments);
		t0_ = Call_(context_co_, this_, context);
		
		
		}
	return nil;
}


obj_ emit_code_co___FunctionCall__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineString_(0, "There is no \"")
	DefineString_(1, "\" function.")
	UsingMethod_(_pl_) UsingMethod_(arguments) UsingMethod_(emit_c_call_co_builder_co_) UsingMethod_(function) UsingMethod_(name)
	UsingClass_(MessageException__Standard)

		{
		/* We already got the function in prepare-to-emit. */
		t0_ = Call_(function, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(name, this_);
			t1_ = Call_(_pl_, Str_(0), t0_);
			t2_ = Call_(_pl_, t1_, Str_(1));
			t3_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t2_);
			Throw_(t3_);
			
			}
		t4_ = Call_(function, this_);
		t5_ = Call_(arguments, this_);
		t6_ = Call_(emit_c_call_co_builder_co_, t4_, t5_, builder);
		return t6_;
		
		
		}
	return nil;
}


obj_ function__FunctionCall__Compiler(obj_ this_)
{
	return Field_(function);
}


obj_ function_co___FunctionCall__Compiler(obj_ this_, obj_ value)
{
	Field_(function) = value;
	return value;
}


obj_ interpreted__FunctionCall__Compiler(obj_ this_)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineString_(0, "There is no \"")
	DefineString_(1, "\" function.")
	UsingMethod_(_pl_) UsingMethod_(arguments) UsingMethod_(function) UsingMethod_(interpret_call_with_co_) UsingMethod_(name)
	UsingClass_(MessageException__Standard)

		{
		/* We already got the function in prepare-to-emit. */
		t0_ = Call_(function, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(name, this_);
			t1_ = Call_(_pl_, Str_(0), t0_);
			t2_ = Call_(_pl_, t1_, Str_(1));
			t3_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t2_);
			Throw_(t3_);
			
			}
		t4_ = Call_(function, this_);
		t5_ = Call_(arguments, this_);
		t6_ = Call_(interpret_call_with_co_, t4_, t5_);
		return t6_;
		
		
		}
	return nil;
}


obj_ jolt_expression__FunctionCall__Compiler(obj_ this_)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineString_(0, "There is no \"")
	DefineString_(1, "\" function.")
	UsingMethod_(_pl_) UsingMethod_(arguments) UsingMethod_(emit_call_co_) UsingMethod_(function) UsingMethod_(name)
	UsingClass_(MessageException__Standard)

		{
		/* We already got the function in prepare-to-emit. */
		t0_ = Call_(function, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(name, this_);
			t1_ = Call_(_pl_, Str_(0), t0_);
			t2_ = Call_(_pl_, t1_, Str_(1));
			t3_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t2_);
			Throw_(t3_);
			
			}
		t4_ = Call_(function, this_);
		t5_ = Call_(arguments, this_);
		t6_ = Call_(emit_call_co_, t4_, t5_);
		return t6_;
		
		}
	return nil;
}


obj_ name__FunctionCall__Compiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___FunctionCall__Compiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co_arguments_co_context_co___FunctionCall__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ context)
{
	UsingClass_(FunctionCall__Compiler)
	obj_ obj = AllocObj_(FunctionCall__Compiler);
	create_co_arguments_co_context_co___FunctionCall__Compiler(obj, name, arguments, context);
	return obj;
}


obj_ prepare_to_emit__FunctionCall__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(arguments) UsingMethod_(context) UsingMethod_(current_item) UsingMethod_(function_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(lookup_function_autodeclaring_co_) UsingMethod_(name) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(context, this_);
		t1_ = Call_(name, this_);
		t2_ = Call_(lookup_function_autodeclaring_co_, t0_, t1_);
		t3_ = Call_(function_co_, this_, t2_);
		
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, arg)
			{
			t0_ = Call_(prepare_to_emit, arg);
			
			
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ translate_co___FunctionCall__Compiler(obj_ this_, obj_ compiler)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineString_(0, "There is no \"")
	DefineString_(1, "\" function.")
	UsingMethod_(_pl_) UsingMethod_(arguments) UsingMethod_(context) UsingMethod_(function) UsingMethod_(function_co_) UsingMethod_(lookup_function_autodeclaring_co_) UsingMethod_(name) UsingMethod_(translate_call_co_compiler_co_)
	UsingClass_(MessageException__Standard)

		{
		/* Are we using a prepare-to-emit phase?  Work either way. */
		t0_ = Call_(function, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(context, this_);
			t1_ = Call_(name, this_);
			t2_ = Call_(lookup_function_autodeclaring_co_, t0_, t1_);
			t3_ = Call_(function_co_, this_, t2_);
			t0_ = Call_(function, this_);
			t1_ = Not_(t0_);
			if (t1_)
				{
				t0_ = Call_(name, this_);
				t1_ = Call_(_pl_, Str_(0), t0_);
				t2_ = Call_(_pl_, t1_, Str_(1));
				t3_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t2_);
				Throw_(t3_);
				
				}
			}
		t4_ = Call_(function, this_);
		t5_ = Call_(arguments, this_);
		t6_ = Call_(translate_call_co_compiler_co_, t4_, t5_, compiler);
		return t6_;
		
		
		
		}
	return nil;
}


