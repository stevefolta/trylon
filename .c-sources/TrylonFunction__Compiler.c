#include "Trylon_.h"

UsingSym_(TrylonFunction)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(TrylonFunction__Compiler)
struct ClassInfo TrylonFunction__Compiler__classInfo_ = 
	{ 123, 0, Proto_(TrylonFunction__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(TrylonFunction) ,nil };
struct object TrylonFunction__Compiler = 
	{ &TrylonFunction__Compiler__classInfo_, {} };




obj_ c_signature_co_arguments_co___TrylonFunction__Compiler(obj_ this_, obj_ c_name, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "obj_ ")
	DefineString_(1, "(obj_ this_")
	DefineString_(2, ", obj_ ")
	DefineString_(3, ")")
	UsingMethod_(_pl_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(string)
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	UsingClass_(Compiler)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ signature;
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		signature = t0_;
		t0_ = Call_(_pl_, signature, Str_(0));
		signature = t0_;
		t0_ = Call_(_pl_, signature, c_name);
		signature = t0_;
		t0_ = Call_(_pl_, signature, Str_(1));
		signature = t0_;
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(_pl_, signature, Str_(2));
			signature = t0_;
			t0_ = Call_(name, arg);
			t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
			t2_ = Call_(_pl_, signature, t1_);
			signature = t2_;
			}
		ForEnd_(0)
		t0_ = Call_(_pl_, signature, Str_(3));
		signature = t0_;
		t0_ = Call_(string, signature);
		return t0_;
		
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___TrylonFunction__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	obj_ t0_;
	extern obj_ virtual__Standard(obj_ this_);
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		
		}
	return nil;
}


obj_ emit_c_function_on_co___TrylonFunction__Compiler(obj_ this_, obj_ stream)
{

		{
		/* By default, do nothing. */
		/* (Not all functions result in object code.) */
		
		}
	return nil;
}


obj_ emit_call_co___TrylonFunction__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	extern obj_ virtual__Standard(obj_ this_);
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		
		}
	return nil;
}


obj_ emit_code__TrylonFunction__Compiler(obj_ this_)
{

		{
		/* Default: nothing to do. */
		return nil;
		
		}
	return nil;
}


obj_ emit_proto_send_co_arguments_co_builder_co___TrylonFunction__Compiler(obj_ this_, obj_ proto, obj_ arguments, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "extern ")
	DefineString_(1, ";")
	DefineString_(2, " = ")
	DefineString_(3, "(Proto_(")
	DefineString_(4, ")")
	DefineString_(5, ", ")
	DefineString_(6, ");")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_extern_declaration_co_) UsingMethod_(add_line_co_) UsingMethod_(add_co_) UsingMethod_(append_co_) UsingMethod_(c_name) UsingMethod_(c_signature) UsingMethod_(current_item) UsingMethod_(emit_code_co_) UsingMethod_(get_temporary) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(string) UsingMethod_(using_class_co_)
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	UsingClass_(List__Standard)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ arg_results, line, result;
		/* Calling class must respond to "c-name" and "c-signature". */
		t0_ = Call_(using_class_co_, builder, proto);
		t0_ = Call_(c_signature, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(add_extern_declaration_co_, builder, t2_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		arg_results = t0_;
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(emit_code_co_, arg, builder);
			t1_ = Call_(append_co_, arg_results, t0_);
			}
		ForEnd_(0)
		t0_ = Call_(get_temporary, builder);
		result = t0_;
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		line = t0_;
		t0_ = Call_(access, result);
		t1_ = Call_(add_co_, line, t0_);
		t0_ = Call_(add_co_, line, Str_(2));
		t0_ = Call_(c_name, this_);
		t1_ = Call_(add_co_, line, t0_);
		t0_ = Call_(add_co_, line, Str_(3));
		t0_ = Call_(c_name, proto);
		t1_ = Call_(add_co_, line, t0_);
		t0_ = Call_(add_co_, line, Str_(4));
		ForStart_(1, arg_results, arg)
			{
			t0_ = Call_(_pl_, line, Str_(5));
			line = t0_;
			t0_ = Call_(access, arg);
			t1_ = Call_(_pl_, line, t0_);
			line = t1_;
			}
		ForEnd_(1)
		t0_ = Call_(_pl_, line, Str_(6));
		line = t0_;
		t0_ = Call_(string, line);
		t1_ = Call_(add_line_co_, builder, t0_);
		return result;
		
		
		
		}
	return nil;
}


obj_ has_code__TrylonFunction__Compiler(obj_ this_)
{

		{
		return true_;
		
		
		
		}
	return nil;
}


obj_ interpret_call_with_co___TrylonFunction__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	extern obj_ virtual__Standard(obj_ this_);
	UsingClass_(Standard)

		{
		t0_ = virtual__Standard(Proto_(Standard));
		
		}
	return nil;
}


obj_ interpret_proto_send_of_co_to_co_with_co___TrylonFunction__Compiler(obj_ this_, obj_ name, obj_ proto, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(proto)
	extern obj_ new_co___PrimitiveObject__Interpreter(obj_ this_, obj_ object);
	extern obj_ interpret_send_of_co_to_co_with_co___Interpreter(obj_ this_, obj_ name, obj_ object, obj_ arguments);
	UsingClass_(Interpreter)
	UsingClass_(PrimitiveObject__Interpreter)

		{
		obj_ proto_expression;
		t0_ = Call_(proto, proto);
		t1_ = new_co___PrimitiveObject__Interpreter(Proto_(PrimitiveObject__Interpreter), t0_);
		proto_expression = t1_;
		t0_ = interpret_send_of_co_to_co_with_co___Interpreter(Proto_(Interpreter), name, proto_expression, arguments);
		return t0_;
		
		
		}
	return nil;
}


obj_ is_translatable__TrylonFunction__Compiler(obj_ this_)
{

		{
		return nil;
		
		
		
		}
	return nil;
}


obj_ prepare_to_emit__TrylonFunction__Compiler(obj_ this_)
{

		{
		/* Default: nothing to do. */
		
		}
	return nil;
}


obj_ translate_call_co_compiler_co___TrylonFunction__Compiler(obj_ this_, obj_ arguments, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(emit_call_co_) UsingMethod_(translate_co_)

		{
		/* Default: use emit-call. */
		t0_ = Call_(emit_call_co_, this_, arguments);
		t1_ = Call_(translate_co_, t0_, compiler);
		return t1_;
		
		}
	return nil;
}


