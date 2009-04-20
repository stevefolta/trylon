#include "Trylon_.h"

UsingSym_(SuperCall)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(SuperCall__Compiler)
struct ClassInfo SuperCall__Compiler__classInfo_ = 
	{ 88, 2, Proto_(SuperCall__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(SuperCall) ,nil };
struct object SuperCall__Compiler = 
	{ &SuperCall__Compiler__classInfo_, {nil, nil} };



#define name__fld_	(0)
#define arguments__fld_	(1)


obj_ arguments__SuperCall__Compiler(obj_ this_)
{
	return Field_(arguments);
}


obj_ arguments_co___SuperCall__Compiler(obj_ this_, obj_ value)
{
	Field_(arguments) = value;
	return value;
}


obj_ create_co_arguments_co___SuperCall__Compiler(obj_ this_, obj_ name, obj_ arguments)
{
	obj_ t0_;
	UsingMethod_(arguments_co_) UsingMethod_(name_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(arguments_co_, this_, arguments);
		
		
		}
	return nil;
}


obj_ emit_code_co___SuperCall__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "Attempt to do a super call on a class with no superclass.")
	DefineString_(1, "__")
	DefineString_(2, "obj_ ")
	DefineString_(3, "(obj_")
	DefineString_(4, ", obj_")
	DefineString_(5, ");")
	DefineString_(6, " = ")
	DefineString_(7, "(this_")
	DefineString_(8, ", ")
	DefineString_(9, ");")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_extern_declaration_co_) UsingMethod_(add_line_co_) UsingMethod_(append_co_) UsingMethod_(arguments) UsingMethod_(c_name) UsingMethod_(current_item) UsingMethod_(emit_code_co_) UsingMethod_(function) UsingMethod_(get_temporary) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(string) UsingMethod_(superclass)
	UsingClass_(Compiler)
	UsingClass_(List__Standard)
	UsingClass_(MessageException__Standard)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ arg_results, declaration, fn_name, line, result, superclass;
		t0_ = Call_(function, builder);
		t1_ = Call_(on_proto, t0_);
		t2_ = Call_(superclass, t1_);
		superclass = t2_;
		t0_ = Not_(superclass);
		if (t0_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t0_);
			}
		t1_ = Call_(name, this_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		t4_ = Call_(c_name, superclass);
		t5_ = Call_(_pl_, t3_, t4_);
		fn_name = t5_;
		
		/* Declare it. */
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		declaration = t0_;
		t0_ = Call_(_pl_, declaration, Str_(2));
		declaration = t0_;
		t0_ = Call_(_pl_, declaration, fn_name);
		declaration = t0_;
		t0_ = Call_(_pl_, declaration, Str_(3));
		declaration = t0_;
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, arg)
			{
			t0_ = Call_(_pl_, declaration, Str_(4));
			declaration = t0_;
			}
		ForEnd_(0)
		t0_ = Call_(_pl_, declaration, Str_(5));
		declaration = t0_;
		t0_ = Call_(string, declaration);
		t1_ = Call_(add_extern_declaration_co_, builder, t0_);
		
		/* Call it. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		arg_results = t0_;
		t0_ = Call_(arguments, this_);
		ForStart_(1, t0_, arg)
			{
			t0_ = Call_(emit_code_co_, arg, builder);
			t1_ = Call_(append_co_, arg_results, t0_);
			}
		ForEnd_(1)
		t0_ = Call_(get_temporary, builder);
		result = t0_;
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		line = t0_;
		t0_ = Call_(access, result);
		t1_ = Call_(_pl_, line, t0_);
		line = t1_;
		t0_ = Call_(_pl_, line, Str_(6));
		line = t0_;
		t0_ = Call_(_pl_, line, fn_name);
		line = t0_;
		t0_ = Call_(_pl_, line, Str_(7));
		line = t0_;
		ForStart_(2, arg_results, arg)
			{
			t0_ = Call_(_pl_, line, Str_(8));
			line = t0_;
			t0_ = Call_(access, arg);
			t1_ = Call_(_pl_, line, t0_);
			line = t1_;
			}
		ForEnd_(2)
		t0_ = Call_(_pl_, line, Str_(9));
		line = t0_;
		t0_ = Call_(string, line);
		t1_ = Call_(add_line_co_, builder, t0_);
		return result;
		
		
		
		}
	return nil;
}


obj_ interpreted__SuperCall__Compiler(obj_ this_)
{

		{
		/* ... */
		
		
		
		}
	return nil;
}


obj_ jolt_expression__SuperCall__Compiler(obj_ this_)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(super_send)
	UsingSym_(self)
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
	UsingMethod_(_pl_) UsingMethod_(arguments) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(jolt_expression) UsingMethod_(name)
	UsingClass_(Expression)

		{
		obj_ expr, index;
		t0_ = Call_(arguments, this_);
		t1_ = Call_(count, t0_);
		t2_ = Call_(_pl_, t1_, Int_(0));
		t3_ = new_co___Expression(Proto_(Expression), t2_);
		expr = t3_;
		t0_ = Call_(at_co_put_co_, expr, Int_(1), Sym_(super_send));
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = Call_(at_co_put_co_, expr, Int_(2), t1_);
		t0_ = Call_(at_co_put_co_, expr, Int_(3), Sym_(self));
		index = Int_(4);
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, arg)
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


obj_ name__SuperCall__Compiler(obj_ this_)
{
	return Field_(name);
}


obj_ name_co___SuperCall__Compiler(obj_ this_, obj_ value)
{
	Field_(name) = value;
	return value;
}


obj_ new_co_arguments_co___SuperCall__Compiler(obj_ this_, obj_ name, obj_ arguments)
{
	UsingClass_(SuperCall__Compiler)
	obj_ obj = AllocObj_(SuperCall__Compiler);
	create_co_arguments_co___SuperCall__Compiler(obj, name, arguments);
	return obj;
}


obj_ prepare_to_emit__SuperCall__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(arguments) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, arg)
			{
			t0_ = Call_(prepare_to_emit, arg);
			
			
			
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ translate_co___SuperCall__Compiler(obj_ this_, obj_ compiler)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(super_send)
	UsingSym_(self)
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
	UsingMethod_(_pl_) UsingMethod_(arguments) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(translateExpression_co_) UsingMethod_(translateSymbol_co_)
	UsingClass_(Expression)

		{
		obj_ expr, index;
		t0_ = Call_(arguments, this_);
		t1_ = Call_(count, t0_);
		t2_ = Call_(_pl_, t1_, Int_(0));
		t3_ = new_co___Expression(Proto_(Expression), t2_);
		expr = t3_;
		t0_ = Call_(at_co_put_co_, expr, Int_(1), Sym_(super_send));
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = Call_(at_co_put_co_, expr, Int_(2), t1_);
		t0_ = Call_(translateSymbol_co_, compiler, Sym_(self));
		t1_ = Call_(at_co_put_co_, expr, Int_(3), t0_);
		index = Int_(4);
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, arg)
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


