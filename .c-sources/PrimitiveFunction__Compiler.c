#include "Trylon_.h"

UsingSym_(PrimitiveFunction)UsingClass_(Compiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(PrimitiveFunction__Compiler)
struct ClassInfo PrimitiveFunction__Compiler__classInfo_ = 
	{ 116, 2, Proto_(PrimitiveFunction__Compiler), Proto_(Compiler), Proto_(TrylonFunction__Compiler), nil, Sym_(PrimitiveFunction) ,nil };
struct object PrimitiveFunction__Compiler = 
	{ &PrimitiveFunction__Compiler__classInfo_, {nil, nil} };



#define name__fld_	(0)
#define on_proto__fld_	(1)


obj_ c_name__PrimitiveFunction__Compiler(obj_ this_)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "__")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(Compiler)

		{
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = Call_(name, this_);
		t4_ = mangle_name_co___Compiler(Proto_(Compiler), t3_);
		t5_ = Call_(_pl_, t2_, t4_);
		return t5_;
		
		}
	return nil;
}


obj_ c_signature__PrimitiveFunction__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "obj_ ")
	DefineString_(1, "(obj_ this_)")
	UsingMethod_(_pl_) UsingMethod_(c_name)

		{
		t0_ = Call_(c_name, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		return t2_;
		
		
		
		}
	return nil;
}


obj_ create_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto)
{
	obj_ t0_;
	UsingMethod_(name_co_) UsingMethod_(on_proto_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(on_proto_co_, this_, on_proto);
		
		
		
		
		
		}
	return nil;
}


obj_ emit_call_co___PrimitiveFunction__Compiler(obj_ this_, obj_ arguments)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 3)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	DefineInt_(3, 2)
	DefineInt_(4, 3)
	DefineInt_(5, 1)
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(jolt_expression) UsingMethod_(name) UsingMethod_(on_proto)
	UsingClass_(Expression)

		{
		obj_ expr, index;
		t0_ = Call_(count, arguments);
		t1_ = Call_(_pl_, t0_, Int_(0));
		t2_ = new_co___Expression(Proto_(Expression), t1_);
		expr = t2_;
		t0_ = Call_(at_co_put_co_, expr, Int_(1), Sym_(send));
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t1_);
		t3_ = Call_(at_co_put_co_, expr, Int_(2), t2_);
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(access, t0_);
		t2_ = Call_(at_co_put_co_, expr, Int_(3), t1_);
		index = Int_(4);
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(jolt_expression, arg);
			t1_ = Call_(at_co_put_co_, expr, index, t0_);
			t0_ = Call_(_pl_, index, Int_(5));
			index = t0_;
			}
		ForEnd_(0)
		return expr;
		
		}
	return nil;
}


obj_ interpret_call_with_co___PrimitiveFunction__Compiler(obj_ this_, obj_ arguments)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(interpret_proto_send_of_co_to_co_with_co_) UsingMethod_(name) UsingMethod_(on_proto)

		{
		t0_ = Call_(name, this_);
		t1_ = Call_(on_proto, this_);
		t2_ = Call_(interpret_proto_send_of_co_to_co_with_co_, this_, t0_, t1_, arguments);
		return t2_;
		
		
		}
	return nil;
}


obj_ name__PrimitiveFunction__Compiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___PrimitiveFunction__Compiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto)
{
	UsingClass_(PrimitiveFunction__Compiler)
	obj_ obj = AllocObj_(PrimitiveFunction__Compiler);
	create_co_on_proto_co___PrimitiveFunction__Compiler(obj, name, on_proto);
	return obj;
}


obj_ on_proto__PrimitiveFunction__Compiler(obj_ this_)
{
	return Field_(on_proto);
}


obj_ on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ value)
{
	Field_(on_proto) = value;
	return value;
}


obj_ translate_call_co_compiler_co___PrimitiveFunction__Compiler(obj_ this_, obj_ arguments, obj_ compiler)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 3)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	DefineInt_(3, 2)
	DefineInt_(4, 3)
	DefineInt_(5, 1)
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(translateExpression_co_)
	UsingClass_(Expression)

		{
		obj_ expr, index;
		t0_ = Call_(count, arguments);
		t1_ = Call_(_pl_, t0_, Int_(0));
		t2_ = new_co___Expression(Proto_(Expression), t1_);
		expr = t2_;
		t0_ = Call_(at_co_put_co_, expr, Int_(1), Sym_(send));
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t1_);
		t3_ = Call_(at_co_put_co_, expr, Int_(2), t2_);
		t0_ = Call_(on_proto, this_);
		t1_ = Call_(access, t0_);
		t2_ = Call_(at_co_put_co_, expr, Int_(3), t1_);
		index = Int_(4);
		ForStart_(0, arguments, arg)
			{
			t0_ = Call_(at_co_put_co_, expr, index, arg);
			t0_ = Call_(_pl_, index, Int_(5));
			index = t0_;
			}
		ForEnd_(0)
		t0_ = Call_(translateExpression_co_, compiler, expr);
		return t0_;
		
		
		}
	return nil;
}


