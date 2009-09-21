#include "Trylon_.h"

UsingClass_(Expressions__Interpreter) UsingClass_(Functions__Interpreter) UsingClass_(PrimitiveObject__Interpreter) UsingClass_(Statements__Interpreter) 
static obj_ tu0_[];
UsingSym_(Interpreter)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(Interpreter)
struct ClassInfo Interpreter__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 66, 1, Proto_(Interpreter), Proto_(Main), Proto_(Object__Standard), nil, Sym_(Interpreter), nil, ((obj_) tu0_) };
struct object Interpreter = 
	{ &Interpreter__classInfo_, {nil} };

	UsingInt_(4)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(4), Proto_(Expressions__Interpreter), Proto_(Functions__Interpreter), Proto_(PrimitiveObject__Interpreter), Proto_(Statements__Interpreter) };

#define _dt_build_settings__fld_	(0)


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
	extern obj_ new__BuildSettings__Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_dt_build_settings) UsingMethod_(_dt_build_settings_co_)
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
		/*  Nothing to do. */
		}
	return nil;
}


obj_ interpret_send_of_co_to_co_with_co___Interpreter(obj_ this_, obj_ name, obj_ object, obj_ arguments)
{
	extern obj_ new_co___Tuple__Standard(obj_ this_, obj_ num_items);
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	obj_ t9_;
	obj_ t10_;
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(4)
	UsingInt_(5)
	UsingInt_(6)
	UsingInt_(7)
	UsingInt_(8)
	UsingInt_(9)
	UsingInt_(10)
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(4)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(4)
	UsingInt_(5)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(4)
	UsingInt_(5)
	UsingInt_(6)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(4)
	UsingInt_(5)
	UsingInt_(6)
	UsingInt_(7)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(4)
	UsingInt_(5)
	UsingInt_(6)
	UsingInt_(7)
	UsingInt_(8)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(4)
	UsingInt_(5)
	UsingInt_(6)
	UsingInt_(7)
	UsingInt_(8)
	UsingInt_(9)
	DefineString_(0, "Interpreter can't handle that many arguments ('")
	DefineString_(1, "').")
	UsingMethod_(_pl_) UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(interpreted) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(num_items) UsingMethod_(perform_co_) UsingMethod_(perform_co_with_co_) UsingMethod_(perform_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_) UsingMethod_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_)
	UsingClass_(Standard)
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
		index = SmallInt_(0);
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(interpreted, arg);
			t1_ = Call_(at_co_put_co_, args, index, t0_);
			t0_ = Call_(_pl_, index, SmallInt_(1));
			index = t0_;
			}
		ForEnd_(0)
		result = nil;
		Switch_(num_args)
		if (SwitchMatches_(SmallInt_(0)))
			{
			t0_ = Call_(perform_co_, obj, name);
			result = t0_;
			}
		else if (SwitchMatches_(SmallInt_(1)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(perform_co_with_co_, obj, name, t0_);
			result = t1_;
			}
		else if (SwitchMatches_(SmallInt_(2)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(at_co_, args, SmallInt_(1));
			t2_ = Call_(perform_co_with_co_with_co_, obj, name, t0_, t1_);
			result = t2_;
			}
		else if (SwitchMatches_(SmallInt_(3)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(at_co_, args, SmallInt_(1));
			t2_ = Call_(at_co_, args, SmallInt_(2));
			t3_ = Call_(perform_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_);
			result = t3_;
			}
		else if (SwitchMatches_(SmallInt_(4)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(at_co_, args, SmallInt_(1));
			t2_ = Call_(at_co_, args, SmallInt_(2));
			t3_ = Call_(at_co_, args, SmallInt_(3));
			t4_ = Call_(perform_co_with_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_, t3_);
			result = t4_;
			}
		else if (SwitchMatches_(SmallInt_(5)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(at_co_, args, SmallInt_(1));
			t2_ = Call_(at_co_, args, SmallInt_(2));
			t3_ = Call_(at_co_, args, SmallInt_(3));
			t4_ = Call_(at_co_, args, SmallInt_(4));
			t5_ = Call_(perform_co_with_co_with_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_, t3_, t4_);
			result = t5_;
			}
		else if (SwitchMatches_(SmallInt_(6)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(at_co_, args, SmallInt_(1));
			t2_ = Call_(at_co_, args, SmallInt_(2));
			t3_ = Call_(at_co_, args, SmallInt_(3));
			t4_ = Call_(at_co_, args, SmallInt_(4));
			t5_ = Call_(at_co_, args, SmallInt_(5));
			t6_ = Call_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_, t3_, t4_, t5_);
			result = t6_;
			}
		else if (SwitchMatches_(SmallInt_(7)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(at_co_, args, SmallInt_(1));
			t2_ = Call_(at_co_, args, SmallInt_(2));
			t3_ = Call_(at_co_, args, SmallInt_(3));
			t4_ = Call_(at_co_, args, SmallInt_(4));
			t5_ = Call_(at_co_, args, SmallInt_(5));
			t6_ = Call_(at_co_, args, SmallInt_(6));
			t7_ = Call_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_, t3_, t4_, t5_, t6_);
			result = t7_;
			}
		else if (SwitchMatches_(SmallInt_(8)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(at_co_, args, SmallInt_(1));
			t2_ = Call_(at_co_, args, SmallInt_(2));
			t3_ = Call_(at_co_, args, SmallInt_(3));
			t4_ = Call_(at_co_, args, SmallInt_(4));
			t5_ = Call_(at_co_, args, SmallInt_(5));
			t6_ = Call_(at_co_, args, SmallInt_(6));
			t7_ = Call_(at_co_, args, SmallInt_(7));
			t8_ = Call_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_, t3_, t4_, t5_, t6_, t7_);
			result = t8_;
			}
		else if (SwitchMatches_(SmallInt_(9)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(at_co_, args, SmallInt_(1));
			t2_ = Call_(at_co_, args, SmallInt_(2));
			t3_ = Call_(at_co_, args, SmallInt_(3));
			t4_ = Call_(at_co_, args, SmallInt_(4));
			t5_ = Call_(at_co_, args, SmallInt_(5));
			t6_ = Call_(at_co_, args, SmallInt_(6));
			t7_ = Call_(at_co_, args, SmallInt_(7));
			t8_ = Call_(at_co_, args, SmallInt_(8));
			t9_ = Call_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_, t3_, t4_, t5_, t6_, t7_, t8_);
			result = t9_;
			}
		else if (SwitchMatches_(SmallInt_(10)))
			{
			t0_ = Call_(at_co_, args, SmallInt_(0));
			t1_ = Call_(at_co_, args, SmallInt_(1));
			t2_ = Call_(at_co_, args, SmallInt_(2));
			t3_ = Call_(at_co_, args, SmallInt_(3));
			t4_ = Call_(at_co_, args, SmallInt_(4));
			t5_ = Call_(at_co_, args, SmallInt_(5));
			t6_ = Call_(at_co_, args, SmallInt_(6));
			t7_ = Call_(at_co_, args, SmallInt_(7));
			t8_ = Call_(at_co_, args, SmallInt_(8));
			t9_ = Call_(at_co_, args, SmallInt_(9));
			t10_ = Call_(perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_, obj, name, t0_, t1_, t2_, t3_, t4_, t5_, t6_, t7_, t8_, t9_);
			result = t10_;
			}
		else
			{
			t0_ = Call_(_pl_, Str_(0), name);
			t1_ = Call_(_pl_, t0_, Str_(1));
			t2_ = error_co___Standard(Proto_(Standard), t1_);
			}
		EndSwitch_
		return result;
		}
	return nil;
}


obj_ interpret_co___Interpreter(obj_ this_, obj_ code)
{
	extern obj_ new_co___ExistingClass__Compiler(obj_ this_, obj_ proto);
	extern obj_ new_co___LinesLexer__Trylon(obj_ this_, obj_ text);
	extern obj_ new_co_in_co___MethodParser__Compiler(obj_ this_, obj_ lines, obj_ context);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(interpreted) UsingMethod_(lex) UsingMethod_(parse) UsingMethod_(resolve)
	UsingSharedField_(compiler, Main) 
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(LinesLexer__Trylon)
	UsingClass_(Main)
	UsingClass_(MethodParser__Compiler)

		{
		obj_ context, lines, main_context, parse_tree, parser, result;
		SetSharedField_(compiler, Main, this_);
		
		/*  Get the Main context to interpret it in. */
		main_context = nil;
			{
			main_context = Proto_(Main);
			}
		t0_ = new_co___ExistingClass__Compiler(Proto_(ExistingClass__Compiler), main_context);
		context = t0_;
		t0_ = new_co___LinesLexer__Trylon(Proto_(LinesLexer__Trylon), code);
		t1_ = Call_(lex, t0_);
		lines = t1_;
		
		/*  Interpret. */
		t0_ = new_co_in_co___MethodParser__Compiler(Proto_(MethodParser__Compiler), lines, context);
		parser = t0_;
		t0_ = Call_(parse, parser);
		parse_tree = t0_;
		t0_ = Call_(resolve, parse_tree);
		t0_ = Call_(interpreted, parse_tree);
		result = t0_;
		
		SetSharedField_(compiler, Main, nil);
		return result;
		}
	return nil;
}


obj_ references__Interpreter(obj_ this_)
{
	UsingClass_(Expressions__Interpreter)
	UsingClass_(Functions__Interpreter)
	UsingClass_(Statements__Interpreter)

		{
		}
	return nil;
}


