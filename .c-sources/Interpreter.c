#include "Trylon_.h"

UsingSym_(Interpreter)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(Interpreter)
struct ClassInfo Interpreter__classInfo_ = 
	{ 63, 4, Proto_(Interpreter), Proto_(Main), Proto_(Object__Standard), nil, Sym_(Interpreter) ,nil };
struct object Interpreter = 
	{ &Interpreter__classInfo_, {nil} };


#define _dt_build_settings__fld_	(0)


obj_ _dt_build_settings__Interpreter(obj_ this_)
{
	return Field_(_dt_build_settings);
}


obj_ _dt_build_settings_co___Interpreter(obj_ this_, obj_ value)
{
	Field_(_dt_build_settings) = value;
	return value;
}


obj_ Expressions__Interpreter__accessor_(obj_ this_)
{
	UsingClass_(Expressions__Interpreter)
	return Proto_(Expressions__Interpreter);
}


obj_ Functions__Interpreter__accessor_(obj_ this_)
{
	UsingClass_(Functions__Interpreter)
	return Proto_(Functions__Interpreter);
}


obj_ PrimitiveObject__Interpreter__accessor_(obj_ this_)
{
	UsingClass_(PrimitiveObject__Interpreter)
	return Proto_(PrimitiveObject__Interpreter);
}


obj_ Statements__Interpreter__accessor_(obj_ this_)
{
	UsingClass_(Statements__Interpreter)
	return Proto_(Statements__Interpreter);
}


obj_ build_settings__Interpreter(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_dt_build_settings) UsingMethod_(_dt_build_settings_co_)
	extern obj_ new__BuildSettings__Compiler(obj_ this_);
	UsingClass_(BuildSettings__Compiler)

		{
		t0_ = Call_(_dt_build_settings, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = new__BuildSettings__Compiler(Proto_(BuildSettings__Compiler));
			t1_ = Call_(_dt_build_settings_co_, this_, t0_);
			}
		t0_ = Call_(_dt_build_settings, this_);
		return t0_;
		}
	return nil;
}


obj_ calling_selector_co___Interpreter(obj_ this_, obj_ selector)
{

		{
		/* Nothing to do. */
		
		}
	return nil;
}


obj_ interpret_send_of_co_to_co_with_co___Interpreter(obj_ this_, obj_ name, obj_ object, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineInt_(2, 0)
	DefineInt_(3, 1)
	DefineInt_(4, 2)
	DefineInt_(5, 3)
	DefineInt_(6, 4)
	DefineInt_(7, 0)
	DefineInt_(8, 0)
	DefineInt_(9, 1)
	DefineInt_(10, 0)
	DefineInt_(11, 1)
	DefineInt_(12, 2)
	DefineInt_(13, 0)
	DefineInt_(14, 1)
	DefineInt_(15, 2)
	DefineInt_(16, 3)
	UsingMethod_(_pl_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(interpreted) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(num_items) UsingMethod_(perform_co_) UsingMethod_(perform_co_with_co_) UsingMethod_(perform_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_with_co_)
	extern obj_ new_co___Tuple__Standard(obj_ this_, obj_ num_items);
	UsingClass_(Tuple__Standard)

		{
		obj_ args, index, num_args, obj, result;
		t0_ = Call_(intern, name);
		name = t0_;
		t0_ = Call_(num_items, arguments);
		num_args = t0_;
		t0_ = Call_(interpreted, object);
		obj = t0_;
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), num_args);
		args = t0_;
		index = Int_(0);
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(interpreted, arg);
			t1_ = Call_(at_co_put_co_, args, index, t0_);
			t0_ = Call_(_pl_, index, Int_(1));
			index = t0_;
			}
		ForEnd_(0)
		result = nil;
		Switch_(num_args)
		if (SwitchMatches_(Int_(2)))
			{
			t0_ = Call_(perform_co_, obj, name);
			result = t0_;
			}
		else if (SwitchMatches_(Int_(3)))
			{
			t0_ = Call_(at_co_, args, Int_(7));
			t1_ = Call_(perform_co_with_co_, obj, name, t0_);
			result = t1_;
			}
		else if (SwitchMatches_(Int_(4)))
			{
			t0_ = Call_(at_co_, args, Int_(8));
			t1_ = Call_(at_co_, args, Int_(9));
			t2_ = Call_(perform_co_with_co_with_co_, obj, name, t0_, t1_);
			result = t2_;
			}
		else if (SwitchMatches_(Int_(5)))
			{
			t0_ = Call_(at_co_, args, Int_(10));
			t1_ = Call_(at_co_, args, Int_(11));
			t2_ = Call_(at_co_, args, Int_(12));
			t3_ = Call_(perform_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_);
			result = t3_;
			}
		else if (SwitchMatches_(Int_(6)))
			{
			t0_ = Call_(at_co_, args, Int_(13));
			t1_ = Call_(at_co_, args, Int_(14));
			t2_ = Call_(at_co_, args, Int_(15));
			t3_ = Call_(at_co_, args, Int_(16));
			t4_ = Call_(perform_co_with_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_, t3_);
			result = t4_;
			}
		EndSwitch_
		return result;
		
		
		
		}
	return nil;
}


obj_ interpret_co___Interpreter(obj_ this_, obj_ code)
{
	obj_ t0_;
	UsingMethod_(interpreted) UsingMethod_(parse_code) UsingMethod_(prepare_to_emit)
	UsingSharedField_(compiler, Main) 
	extern obj_ new_co___ExistingProto__Compiler(obj_ this_, obj_ proto);
	extern obj_ new_co_context_co___Parser__Compiler(obj_ this_, obj_ source, obj_ context);
	UsingClass_(Main)
	UsingClass_(Parser__Compiler)
	UsingClass_(ExistingProto__Compiler)

		{
		obj_ context, main_context, parse_tree, parser, result;
		main_context = nil;
			{
			main_context = Proto_(Main);
			}
		t0_ = new_co___ExistingProto__Compiler(Proto_(ExistingProto__Compiler), main_context);
		context = t0_;
		t0_ = new_co_context_co___Parser__Compiler(Proto_(Parser__Compiler), code, context);
		parser = t0_;
		t0_ = Call_(parse_code, parser);
		parse_tree = t0_;
		SetSharedField_(compiler, Main, this_);
		t0_ = Call_(prepare_to_emit, parse_tree);
		t0_ = Call_(interpreted, parse_tree);
		result = t0_;
		SetSharedField_(compiler, Main, nil);
		return result;
		
		
		}
	return nil;
}


obj_ references__Interpreter(obj_ this_)
{
	UsingClass_(Statements__Interpreter)
	UsingClass_(Functions__Interpreter)
	UsingClass_(Expressions__Interpreter)

		{
		
		}
	return nil;
}


