#include "Trylon_.h"

UsingSym_(Block)UsingClass_(Compiler)
UsingClass_(Context__Compiler)
UsingClass_(Block__Compiler)
struct ClassInfo Block__Compiler__classInfo_ = 
	{ 74, 12, Proto_(Block__Compiler), Proto_(Compiler), Proto_(Context__Compiler), nil, Sym_(Block) ,nil };
struct object Block__Compiler = 
	{ &Block__Compiler__classInfo_, {nil, nil, nil} };



#define parent__fld_	(0)
#define locals__fld_	(1)
#define statements__fld_	(2)


obj_ add_local_co___Block__Compiler(obj_ this_, obj_ local)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(at_co_put_co_) UsingMethod_(locals) UsingMethod_(locals_co_) UsingMethod_(name)
	extern obj_ new__Dictionary__Standard(obj_ this_);
	UsingClass_(Dictionary__Standard)

		{
		t0_ = Call_(locals, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
			t1_ = Call_(locals_co_, this_, t0_);
			
			}
		t0_ = Call_(locals, this_);
		t1_ = Call_(name, local);
		t2_ = Call_(at_co_put_co_, t0_, t1_, local);
		
		
		}
	return nil;
}


obj_ append_co___Block__Compiler(obj_ this_, obj_ statement)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(statements)

		{
		t0_ = Call_(statements, this_);
		t1_ = Call_(append_co_, t0_, statement);
		
		}
	return nil;
}


obj_ create_co___Block__Compiler(obj_ this_, obj_ parent)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(locals_co_) UsingMethod_(parent_co_) UsingMethod_(statements_co_)
	extern obj_ new__List__Standard(obj_ this_);
	UsingClass_(List__Standard)

		{
		t0_ = Call_(parent_co_, this_, parent);
		t0_ = Call_(locals_co_, this_, nil);
		 	/* Will be created if needed. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(statements_co_, this_, t0_);
		
		
		}
	return nil;
}


obj_ emit_code_co___Block__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "{")
	DefineString_(1, "obj_ ")
	DefineString_(2, ", ")
	DefineString_(3, ";")
	DefineString_(4, "}")
	UsingMethod_(_pl_) UsingMethod_(add_line_co_) UsingMethod_(current_item) UsingMethod_(emit_code_co_) UsingMethod_(go_forward) UsingMethod_(indent) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(locals) UsingMethod_(name) UsingMethod_(statements) UsingMethod_(string) UsingMethod_(unindent) UsingMethod_(values)
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
	UsingClass_(Compiler)
	UsingClass_(StringBuilder__Standard)

		{
		t0_ = Call_(indent, builder);
		t0_ = Call_(add_line_co_, builder, Str_(0));
		
		/* Declare locals. */
		t0_ = Call_(locals, this_);
		if (t0_) {
			t1_ = Call_(locals, this_);
			t2_ = Call_(is_empty, t1_);
			t3_ = Not_(t2_);
			t0_ = t3_;
			}
		if (t0_)
			{
			obj_ done_one, line;
			t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
			line = t0_;
			t0_ = Call_(_pl_, line, Str_(1));
			line = t0_;
			done_one = nil;
			t0_ = Call_(locals, this_);
			t1_ = Call_(values, t0_);
			ForStart_(0, t1_, local)
				{
				if (done_one)
					{
					t0_ = Call_(_pl_, line, Str_(2));
					line = t0_;
					}
				else
					{
					done_one = true_;
					}
				t0_ = Call_(name, local);
				t1_ = mangle_name_co___Compiler(Proto_(Compiler), t0_);
				t2_ = Call_(_pl_, line, t1_);
				line = t2_;
				}
			ForEnd_(0)
			t0_ = Call_(_pl_, line, Str_(3));
			line = t0_;
			t0_ = Call_(string, line);
			t1_ = Call_(add_line_co_, builder, t0_);
			
			}
		/* Body. */
		t0_ = Call_(statements, this_);
		ForStart_(1, t0_, statement)
			{
			t0_ = Call_(emit_code_co_, statement, builder);
			
			}
		ForEnd_(1)
		t0_ = Call_(add_line_co_, builder, Str_(4));
		t0_ = Call_(unindent, builder);
		
		
		}
	return nil;
}


obj_ enclosing_method_context__Block__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(enclosing_method_context) UsingMethod_(parent)

		{
		t0_ = Call_(parent, this_);
		t1_ = Call_(enclosing_method_context, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ interpreted__Block__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(interpreted) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(statements)

		{
		t0_ = Call_(statements, this_);
		ForStart_(0, t0_, statement)
			{
			t0_ = Call_(interpreted, statement);
			}
		ForEnd_(0)
		return nil;
		
		
		}
	return nil;
}


obj_ is_empty__Block__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(is_empty) UsingMethod_(statements)

		{
		t0_ = Call_(statements, this_);
		t1_ = Call_(is_empty, t0_);
		return t1_;
		
		
		}
	return nil;
}


obj_ is_lambda__Block__Compiler(obj_ this_)
{

		{
		return nil;
		
		
		}
	return nil;
}


obj_ jolt_expression__Block__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineInt_(0, 1)
	DefineInt_(1, 0)
	DefineInt_(2, 1)
	DefineInt_(3, 0)
	DefineInt_(4, 1)
	DefineInt_(5, 1)
	DefineInt_(6, 0)
	DefineInt_(7, 1)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(first_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(jolt_expression) UsingMethod_(locals) UsingMethod_(name) UsingMethod_(statements) UsingMethod_(values)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(begin)
	UsingSym_(nil)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(begin)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(trylon_block)
	UsingClass_(Expression)

		{
		obj_ expr, num_statements;
		expr = nil;
		t0_ = Call_(statements, this_);
		t1_ = Call_(count, t0_);
		num_statements = t1_;
		t0_ = Call_(_eq__eq_, num_statements, Int_(0));
		if (t0_)
			{
			t0_ = Call_(statements, this_);
			t1_ = Call_(first_item, t0_);
			t2_ = Call_(jolt_expression, t1_);
			expr = t2_;
			}
		else
			{
			t0_ = Call_(_eq__eq_, num_statements, Int_(1));
			if (t0_)
				{
				t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(begin), Sym_(nil));
				return t0_;
				}
			else
				{
				obj_ index;
				t1_ = Call_(statements, this_);
				t2_ = Call_(count, t1_);
				t3_ = Call_(_pl_, t2_, Int_(2));
				t4_ = new_co___Expression(Proto_(Expression), t3_);
				expr = t4_;
				t0_ = Call_(at_co_put_co_, expr, Int_(3), Sym_(begin));
				index = Int_(4);
				t0_ = Call_(statements, this_);
				ForStart_(0, t0_, statement)
					{
					t0_ = Call_(jolt_expression, statement);
					t1_ = Call_(at_co_put_co_, expr, index, t0_);
					t0_ = Call_(_pl_, index, Int_(5));
					index = t0_;
					}
				ForEnd_(0)
				}
			}
		t0_ = Call_(locals, this_);
		if (t0_)
			{
			obj_ index, locals_expr;
			t0_ = Call_(locals, this_);
			t1_ = Call_(count, t0_);
			t2_ = new_co___Expression(Proto_(Expression), t1_);
			locals_expr = t2_;
			index = Int_(6);
			t0_ = Call_(locals, this_);
			t1_ = Call_(values, t0_);
			ForStart_(1, t1_, local)
				{
				t0_ = Call_(name, local);
				t1_ = Call_(intern, t0_);
				t2_ = Call_(at_co_put_co_, locals_expr, index, t1_);
				t0_ = Call_(_pl_, index, Int_(7));
				index = t0_;
				}
			ForEnd_(1)
			t0_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(trylon_block), locals_expr, expr);
			expr = t0_;
			}
		return expr;
		
		}
	return nil;
}


obj_ locals__Block__Compiler(obj_ this_)
{
	return Field_(locals);
}


obj_ locals_co___Block__Compiler(obj_ this_, obj_ value)
{
	Field_(locals) = value;
	return value;
}


obj_ lookup_function_autodeclaring_co___Block__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 58)
	DefineInt_(1, 1)
	DefineInt_(2, 0)
	DefineInt_(3, 1)
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(add_local_co_) UsingMethod_(index_of_co_) UsingMethod_(length) UsingMethod_(lookup_function_co_) UsingMethod_(substr_co_length_co_)
	extern obj_ new_co_type_co___CompiledField__Compiler(obj_ this_, obj_ name, obj_ type);
	extern obj_ new_co___LocalSetter__Compiler(obj_ this_, obj_ local);
	UsingClass_(LocalSetter__Compiler)
	UsingClass_(CompiledField__Compiler)

		{
		obj_ function;
		t0_ = Call_(lookup_function_co_, this_, name);
		function = t0_;
		if (function)
			{
			return function;
			
			}
		/* If it wasn't found, and it's a setter, autodeclare a local. */
		t0_ = Call_(index_of_co_, name, Int_(0));
		t1_ = Call_(length, name);
		t2_ = Call_(_, t1_, Int_(1));
		t3_ = Call_(_eq__eq_, t0_, t2_);
		if (t3_)
			{
			obj_ local;
			t0_ = Call_(length, name);
			t1_ = Call_(_, t0_, Int_(3));
			t2_ = Call_(substr_co_length_co_, name, Int_(2), t1_);
			t3_ = new_co_type_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), t2_, nil);
			local = t3_;
			t0_ = Call_(add_local_co_, this_, local);
			t0_ = new_co___LocalSetter__Compiler(Proto_(LocalSetter__Compiler), local);
			return t0_;
			
			}
		return nil;
		
		
		}
	return nil;
}


obj_ lookup_function_co___Block__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineString_(0, ":")
	UsingMethod_(_) UsingMethod_(at_co_) UsingMethod_(ends_with_co_) UsingMethod_(length) UsingMethod_(locals) UsingMethod_(lookup_function_co_) UsingMethod_(parent) UsingMethod_(substr_co_length_co_)
	extern obj_ new_co___LocalSetter__Compiler(obj_ this_, obj_ local);
	extern obj_ new_co___LocalGetter__Compiler(obj_ this_, obj_ local);
	UsingClass_(LocalSetter__Compiler)
	UsingClass_(LocalGetter__Compiler)

		{
		obj_ function;
		/* See if there's a local for it. */
		t0_ = Call_(locals, this_);
		if (t0_)
			{
			obj_ is_setter, local, local_name;
			local_name = name;
			is_setter = nil;
			t0_ = Call_(ends_with_co_, name, Str_(0));
			if (t0_)
				{
				t0_ = Call_(length, name);
				t1_ = Call_(_, t0_, Int_(1));
				t2_ = Call_(substr_co_length_co_, name, Int_(0), t1_);
				local_name = t2_;
				is_setter = true_;
				}
			t0_ = Call_(locals, this_);
			t1_ = Call_(at_co_, t0_, local_name);
			local = t1_;
			if (local)
				{
				if (is_setter)
					{
					t0_ = new_co___LocalSetter__Compiler(Proto_(LocalSetter__Compiler), local);
					return t0_;
					}
				else
					{
					t1_ = new_co___LocalGetter__Compiler(Proto_(LocalGetter__Compiler), local);
					return t1_;
					
					}
				}
			}
		/* Otherwise, go up the chain. */
		t2_ = Call_(parent, this_);
		t3_ = Call_(lookup_function_co_, t2_, name);
		function = t3_;
		return function;
		
		
		}
	return nil;
}


obj_ new_co___Block__Compiler(obj_ this_, obj_ parent)
{
	UsingClass_(Block__Compiler)
	obj_ obj = AllocObj_(Block__Compiler);
	create_co___Block__Compiler(obj, parent);
	return obj;
}


obj_ parent__Block__Compiler(obj_ this_)
{
	return Field_(parent);
}


obj_ parent_co___Block__Compiler(obj_ this_, obj_ value)
{
	Field_(parent) = value;
	return value;
}


obj_ prepare_to_emit__Block__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(prepare_to_emit) UsingMethod_(statements)

		{
		t0_ = Call_(statements, this_);
		ForStart_(0, t0_, statement)
			{
			t0_ = Call_(prepare_to_emit, statement);
			
			
			
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ prepend_co___Block__Compiler(obj_ this_, obj_ statement)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(prepend_co_) UsingMethod_(statements)

		{
		t0_ = Call_(statements, this_);
		t1_ = Call_(prepend_co_, t0_, statement);
		
		
		}
	return nil;
}


obj_ statements__Block__Compiler(obj_ this_)
{
	return Field_(statements);
}


obj_ statements_co___Block__Compiler(obj_ this_, obj_ value)
{
	Field_(statements) = value;
	return value;
}


obj_ translate_co___Block__Compiler(obj_ this_, obj_ compiler)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineInt_(0, 0)
	DefineInt_(1, 1)
	DefineInt_(2, 1)
	DefineInt_(3, 0)
	DefineInt_(4, 1)
	DefineInt_(5, 1)
	DefineInt_(6, 0)
	DefineInt_(7, 1)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(first_item) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(locals) UsingMethod_(name) UsingMethod_(statements) UsingMethod_(translate_co_) UsingMethod_(values)
	UsingSym_(nil)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(begin)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	extern obj_ with_co_with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2, obj_ value_3);
	UsingSym_(trylon_block)
	UsingClass_(Expression)

		{
		obj_ expr, num_statements;
		expr = nil;
		t0_ = Call_(statements, this_);
		t1_ = Call_(count, t0_);
		num_statements = t1_;
		t0_ = Call_(_eq__eq_, num_statements, Int_(0));
		if (t0_)
			{
			t0_ = Call_(translate_co_, Sym_(nil), compiler);
			return t0_;
			}
		else
			{
			t1_ = Call_(_eq__eq_, num_statements, Int_(1));
			if (t1_)
				{
				t0_ = Call_(statements, this_);
				t1_ = Call_(first_item, t0_);
				expr = t1_;
				}
			else
				{
				obj_ index;
				t0_ = Call_(statements, this_);
				t1_ = Call_(count, t0_);
				t2_ = Call_(_pl_, t1_, Int_(2));
				t3_ = new_co___Expression(Proto_(Expression), t2_);
				expr = t3_;
				t0_ = Call_(at_co_put_co_, expr, Int_(3), Sym_(begin));
				index = Int_(4);
				t0_ = Call_(statements, this_);
				ForStart_(0, t0_, statement)
					{
					t0_ = Call_(at_co_put_co_, expr, index, statement);
					t0_ = Call_(_pl_, index, Int_(5));
					index = t0_;
					}
				ForEnd_(0)
				}
			}
		t0_ = Call_(locals, this_);
		if (t0_)
			{
			obj_ index, locals_expr;
			t0_ = Call_(locals, this_);
			t1_ = Call_(count, t0_);
			t2_ = new_co___Expression(Proto_(Expression), t1_);
			locals_expr = t2_;
			index = Int_(6);
			t0_ = Call_(locals, this_);
			t1_ = Call_(values, t0_);
			ForStart_(1, t1_, local)
				{
				t0_ = Call_(name, local);
				t1_ = Call_(intern, t0_);
				t2_ = Call_(at_co_put_co_, locals_expr, index, t1_);
				t0_ = Call_(_pl_, index, Int_(7));
				index = t0_;
				}
			ForEnd_(1)
			t0_ = with_co_with_co_with_co___Expression(Proto_(Expression), Sym_(trylon_block), locals_expr, expr);
			expr = t0_;
			}
		t0_ = Call_(translate_co_, expr, compiler);
		return t0_;
		
		
		}
	return nil;
}


