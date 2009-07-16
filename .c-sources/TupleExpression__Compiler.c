#include "Trylon_.h"

UsingSym_(TupleExpression)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(TupleExpression__Compiler)
struct ClassInfo TupleExpression__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 120, 4, Proto_(TupleExpression__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(TupleExpression), nil, nil };
struct object TupleExpression__Compiler = 
	{ &TupleExpression__Compiler__classInfo_, {nil, nil, nil, nil} };



#define members__fld_	(0)
#define index__fld_	(1)
#define results__fld_	(2)
#define size_result__fld_	(3)


obj_ access__TupleExpression__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "((obj_) tu")
	DefineString_(1, "_)")
	UsingMethod_(_pl_) UsingMethod_(index) UsingMethod_(string)

		{
		t0_ = Call_(index, this_);
		t1_ = Call_(string, t0_);
		t2_ = Call_(_pl_, Str_(0), t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		return t3_;
		}
	return nil;
}


obj_ add_member_co___TupleExpression__Compiler(obj_ this_, obj_ member)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(members)

		{
		t0_ = Call_(members, this_);
		t1_ = Call_(append_co_, t0_, member);
		}
	return nil;
}


obj_ compile_co___TupleExpression__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_tuple_expression_co_)

		{
		t0_ = Call_(compile_tuple_expression_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create__TupleExpression__Compiler(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(members_co_)
	UsingClass_(List__Standard)

		{
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(members_co_, this_, t0_);
		}
	return nil;
}


obj_ emit_code_co___TupleExpression__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co___IntLiteral__Compiler(obj_ this_, obj_ value);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___IntLiteral__Compiler(obj_ this_, obj_ value);
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
	UsingInt_(1)
	UsingInt_(1)
	DefineString_(0, "Tuple")
	DefineString_(1, "Using a non-literal tuple outside a method.")
	DefineString_(2, "extern obj_ new_co___Tuple__Standard(obj_, obj_);")
	DefineString_(3, " = new_co___Tuple__Standard(Proto_(Tuple__Standard), ")
	DefineString_(4, ");")
	DefineString_(5, "->fields[")
	DefineString_(6, "] = ")
	DefineString_(7, ";")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_extern_declaration_co_) UsingMethod_(add_line_co_) UsingMethod_(add_co_) UsingMethod_(append_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(emit_code_co_) UsingMethod_(get_standard_class_co_) UsingMethod_(get_temporary) UsingMethod_(go_forward) UsingMethod_(index) UsingMethod_(index_co_) UsingMethod_(is_done) UsingMethod_(is_literal) UsingMethod_(iterator) UsingMethod_(members) UsingMethod_(results) UsingMethod_(results_co_) UsingMethod_(size_result) UsingMethod_(size_result_co_) UsingMethod_(string) UsingMethod_(supports_only_literals) UsingMethod_(tuple_literals) UsingMethod_(using_proto_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(IntLiteral__Compiler)
	UsingClass_(List__Standard)
	UsingClass_(LiteralResult__CCompiler)
	UsingClass_(MessageException__Standard)

		{
		t0_ = Call_(is_literal, this_);
		if (t0_)
			{
			t0_ = Call_(get_standard_class_co_, SharedField_(compiler, Main), Str_(0));
			t1_ = Call_(using_proto_co_, builder, t0_);
			
			/*  Access all values first, so sub-tuples get declared first. */
			/*  Note that the emit-code: calls won't actually emit any code, they'll */
			/*  just set the member literals up in the builder. */
			t0_ = Call_(members, this_);
			t1_ = Call_(count, t0_);
			t2_ = Call_(string, t1_);
			t3_ = new_co___IntLiteral__Compiler(Proto_(IntLiteral__Compiler), t2_);
			t4_ = Call_(emit_code_co_, t3_, builder);
			t5_ = Call_(size_result_co_, this_, t4_);
			t0_ = new__List__Standard(Proto_(List__Standard));
			t1_ = Call_(results_co_, this_, t0_);
			t0_ = Call_(members, this_);
			ForStart_(0, t0_, member)
				{
				t0_ = Call_(results, this_);
				t1_ = Call_(emit_code_co_, member, builder);
				t2_ = Call_(append_co_, t0_, t1_);
				}
			ForEnd_(0)
			
			t0_ = Call_(tuple_literals, builder);
			t1_ = Call_(add_co_, t0_, this_);
			t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
			return t0_;
			}
		else
			{
			obj_ tuple;
			/*  Not all literals, so build it dynamically. */
			t1_ = Call_(supports_only_literals, builder);
			if (t1_)
				{
				t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(1));
				Throw_(t0_);
				}
			
			t1_ = Call_(add_extern_declaration_co_, builder, Str_(2));
			
			/*  Make the tuple object. */
			t0_ = Call_(get_temporary, builder);
			tuple = t0_;
			t0_ = Call_(members, this_);
			t1_ = Call_(count, t0_);
			t2_ = Call_(string, t1_);
			t3_ = new_co___IntLiteral__Compiler(Proto_(IntLiteral__Compiler), t2_);
			t4_ = Call_(emit_code_co_, t3_, builder);
			t5_ = Call_(size_result_co_, this_, t4_);
			t0_ = Call_(access, tuple);
			t1_ = Call_(_pl_, t0_, Str_(3));
			t2_ = Call_(size_result, this_);
			t3_ = Call_(access, t2_);
			t4_ = Call_(_pl_, t1_, t3_);
			t5_ = Call_(_pl_, t4_, Str_(4));
			t6_ = Call_(add_line_co_, builder, t5_);
			
			/*  Set its fields. */
			t0_ = Call_(index_co_, this_, SmallInt_(1));
			 	/*  Starts after the size. */
			t0_ = Call_(members, this_);
			ForStart_(1, t0_, member)
				{
				obj_ member_result;
				t0_ = Call_(emit_code_co_, member, builder);
				member_result = t0_;
				t0_ = Call_(access, tuple);
				t1_ = Call_(_pl_, t0_, Str_(5));
				t2_ = Call_(index, this_);
				t3_ = Call_(string, t2_);
				t4_ = Call_(_pl_, t1_, t3_);
				t5_ = Call_(_pl_, t4_, Str_(6));
				t6_ = Call_(access, member_result);
				t7_ = Call_(_pl_, t5_, t6_);
				t8_ = Call_(_pl_, t7_, Str_(7));
				t9_ = Call_(add_line_co_, builder, t8_);
				t0_ = Call_(index, this_);
				t1_ = Call_(_pl_, t0_, SmallInt_(1));
				t2_ = Call_(index_co_, this_, t1_);
				}
			ForEnd_(1)
			
			return tuple;
			}
		
		}
	return nil;
}


obj_ emit_declaration_co___TupleExpression__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(3)
	UsingInt_(2)
	UsingInt_(2)
	DefineString_(0, "Internal error: No results from literal tuple.")
	DefineString_(1, "static obj_ tu")
	DefineString_(2, "_[] = { ")
	DefineString_(3, "(obj_) StdClassRef_(Tuple), ")
	DefineString_(4, ", ")
	DefineString_(5, " };\n")
	UsingMethod_(access) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(index) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(results) UsingMethod_(size_result) UsingMethod_(string) UsingMethod_(write_all_co_) UsingMethod_(write_co_)
	UsingClass_(MessageException__Standard)

		{
		t0_ = Call_(results, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(0));
			Throw_(t0_);
			}
		t1_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
		t1_->fields[1] = Str_(1);
		t2_ = Call_(index, this_);
		t3_ = Call_(string, t2_);
		t1_->fields[2] = t3_;
		t1_->fields[3] = Str_(2);
		t4_ = Call_(write_all_co_, stream, t1_);
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
		t0_->fields[1] = Str_(3);
		t1_ = Call_(size_result, this_);
		t2_ = Call_(access, t1_);
		t0_->fields[2] = t2_;
		t3_ = Call_(write_all_co_, stream, t0_);
		t0_ = Call_(results, this_);
		ForStart_(0, t0_, member_result)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(2));
			t0_->fields[1] = Str_(4);
			t1_ = Call_(access, member_result);
			t0_->fields[2] = t1_;
			t2_ = Call_(write_all_co_, stream, t0_);
			}
		ForEnd_(0)
		t0_ = Call_(write_co_, stream, Str_(5));
		}
	return nil;
}


obj_ forward_declaration__TupleExpression__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "static obj_ tu")
	DefineString_(1, "_[];")
	UsingMethod_(_pl_) UsingMethod_(index) UsingMethod_(string)

		{
		t0_ = Call_(index, this_);
		t1_ = Call_(string, t0_);
		t2_ = Call_(_pl_, Str_(0), t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		return t3_;
		}
	return nil;
}


obj_ interpreted__TupleExpression__Compiler(obj_ this_)
{
	extern obj_ new_co___Tuple__Standard(obj_ this_, obj_ num_items);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(index) UsingMethod_(index_co_) UsingMethod_(interpreted) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(members) UsingMethod_(num_items)
	UsingClass_(Tuple__Standard)

		{
		obj_ size, tuple;
		t0_ = Call_(members, this_);
		t1_ = Call_(num_items, t0_);
		size = t1_;
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), size);
		tuple = t0_;
		t0_ = Call_(index_co_, this_, SmallInt_(0));
		t0_ = Call_(members, this_);
		ForStart_(0, t0_, member)
			{
			t0_ = Call_(index, this_);
			t1_ = Call_(interpreted, member);
			t2_ = Call_(at_co_put_co_, tuple, t0_, t1_);
			t0_ = Call_(index, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(index_co_, this_, t1_);
			}
		ForEnd_(0)
		return tuple;
		}
	return nil;
}


obj_ is_literal__TupleExpression__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(is_literal) UsingMethod_(iterator) UsingMethod_(members)

		{
		t0_ = Call_(members, this_);
		ForStart_(0, t0_, member)
			{
			t0_ = Call_(is_literal, member);
			t1_ = Not_(t0_);
			if (t1_)
				{
				return nil;
				}
			}
		ForEnd_(0)
		return true_;
		}
	return nil;
}


obj_ jolt_expression__TupleExpression__Compiler(obj_ this_)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(trylon_tuple)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(index) UsingMethod_(index_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(jolt_expression) UsingMethod_(members)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = Call_(members, this_);
		t1_ = Call_(count, t0_);
		t2_ = Call_(_pl_, t1_, SmallInt_(1));
		t3_ = new_co___Expression(Proto_(Expression), t2_);
		expr = t3_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), Sym_(trylon_tuple));
		t0_ = Call_(index_co_, this_, SmallInt_(1));
		t0_ = Call_(members, this_);
		ForStart_(0, t0_, member)
			{
			t0_ = Call_(index, this_);
			t1_ = Call_(jolt_expression, member);
			t2_ = Call_(at_co_put_co_, expr, t0_, t1_);
			t0_ = Call_(index, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(index_co_, this_, t1_);
			}
		ForEnd_(0)
		return expr;
		}
	return nil;
}


obj_ new__TupleExpression__Compiler(obj_ this_)
{
	UsingClass_(TupleExpression__Compiler)
	obj_ obj = AllocObj_(TupleExpression__Compiler);
	create__TupleExpression__Compiler(obj);
	return obj;
}


obj_ prepare_to_emit__TupleExpression__Compiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(members) UsingMethod_(prepare_to_emit)

		{
		t0_ = Call_(members, this_);
		ForStart_(0, t0_, member)
			{
			t0_ = Call_(prepare_to_emit, member);
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ translate_co___TupleExpression__Compiler(obj_ this_, obj_ compiler)
{
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(trylon_tuple)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(count) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(index) UsingMethod_(index_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(members) UsingMethod_(translateExpression_co_)
	UsingClass_(Expression)

		{
		obj_ expr;
		t0_ = Call_(members, this_);
		t1_ = Call_(count, t0_);
		t2_ = Call_(_pl_, t1_, SmallInt_(1));
		t3_ = new_co___Expression(Proto_(Expression), t2_);
		expr = t3_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), Sym_(trylon_tuple));
		t0_ = Call_(index_co_, this_, SmallInt_(1));
		t0_ = Call_(members, this_);
		ForStart_(0, t0_, member)
			{
			t0_ = Call_(index, this_);
			t1_ = Call_(at_co_put_co_, expr, t0_, member);
			t0_ = Call_(index, this_);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(index_co_, this_, t1_);
			}
		ForEnd_(0)
		t0_ = Call_(translateExpression_co_, compiler, expr);
		return t0_;
		}
	return nil;
}


