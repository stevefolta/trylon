#include "Trylon_.h"

UsingSym_(FunctionOnThis)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(FunctionOnThis__Compiler)
struct ClassInfo FunctionOnThis__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 142, 2, Proto_(FunctionOnThis__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(FunctionOnThis), nil, nil };
struct object FunctionOnThis__Compiler = 
	{ &FunctionOnThis__Compiler__classInfo_, {nil, nil} };



#define name__fld_	(0)
#define on_proto__fld_	(1)


obj_ compile_call_co_with_co___FunctionOnThis__Compiler(obj_ this_, obj_ builder, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(compile_function_on_this_call_co_with_co_)

		{
		t0_ = Call_(compile_function_on_this_call_co_with_co_, builder, this_, arguments);
		return t0_;
		}
	return nil;
}


obj_ create_co_on_proto_co___FunctionOnThis__Compiler(obj_ this_, obj_ name, obj_ on_proto)
{
	obj_ t0_;
	UsingMethod_(name_co_) UsingMethod_(on_proto_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		}
	return nil;
}


obj_ emit_c_call_co_builder_co___FunctionOnThis__Compiler(obj_ this_, obj_ arguments, obj_ builder)
{
	extern obj_ emit_send_co_to_string_co_with_co_builder_co___CCompiler(obj_ this_, obj_ name, obj_ receiver, obj_ arguments, obj_ builder);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "this_")
	UsingMethod_(name)
	UsingClass_(CCompiler)

		{
		t0_ = Call_(name, this_);
		t1_ = emit_send_co_to_string_co_with_co_builder_co___CCompiler(Proto_(CCompiler), t0_, Str_(0), arguments, builder);
		return t1_;
		}
	return nil;
}


obj_ emit_call_co___FunctionOnThis__Compiler(obj_ this_, obj_ arguments)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingSym_(self)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(3)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(jolt_expression) UsingMethod_(name)
	UsingClass_(Expression)

		{
		obj_ expr, index;
		
		/*  Emit the call. */
		t0_ = Call_(count, arguments);
		t1_ = Call_(_pl_, t0_, SmallInt_(3));
		t2_ = new_co___Expression(Proto_(Expression), t1_);
		expr = t2_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), Sym_(send));
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t1_);
		t3_ = Call_(at_co_put_co_, expr, SmallInt_(1), t2_);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(2), Sym_(self));
		index = SmallInt_(3);
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(jolt_expression, arg);
			t1_ = Call_(at_co_put_co_, expr, index, t0_);
			t0_ = Call_(_pl_, index, SmallInt_(1));
			index = t0_;
			}
		ForEnd_(0)
		return expr;
		}
	return nil;
}


obj_ interpret_call_with_co___FunctionOnThis__Compiler(obj_ this_, obj_ arguments)
{

		{
		/*  ... */
		}
	return nil;
}


obj_ new_co_on_proto_co___FunctionOnThis__Compiler(obj_ this_, obj_ name, obj_ on_proto)
{
	UsingClass_(FunctionOnThis__Compiler)
	obj_ obj = AllocObj_(FunctionOnThis__Compiler);
	create_co_on_proto_co___FunctionOnThis__Compiler(obj, name, on_proto);
	return obj;
}


obj_ translate_call_co_compiler_co___FunctionOnThis__Compiler(obj_ this_, obj_ arguments, obj_ compiler)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	UsingSym_(self)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(3)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(translateExpression_co_)
	UsingClass_(Expression)

		{
		obj_ expr, index;
		t0_ = Call_(count, arguments);
		t1_ = Call_(_pl_, t0_, SmallInt_(3));
		t2_ = new_co___Expression(Proto_(Expression), t1_);
		expr = t2_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), Sym_(send));
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t1_);
		t3_ = Call_(at_co_put_co_, expr, SmallInt_(1), t2_);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(2), Sym_(self));
		index = SmallInt_(3);
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(at_co_put_co_, expr, index, arg);
			t0_ = Call_(_pl_, index, SmallInt_(1));
			index = t0_;
			}
		ForEnd_(0)
		t0_ = Call_(translateExpression_co_, compiler, expr);
		return t0_;
		}
	return nil;
}


