#include "Trylon_.h"

UsingClass_(ResultsNode__DictLiteral__Compiler) 
static obj_ tu0_[];
UsingSym_(DictLiteral)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(DictLiteral__Compiler)
struct ClassInfo DictLiteral__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 111, 4, Proto_(DictLiteral__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(DictLiteral), nil, ((obj_) tu0_) };
struct object DictLiteral__Compiler = 
	{ &DictLiteral__Compiler__classInfo_, {nil, nil, nil, nil} };

	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(ResultsNode__DictLiteral__Compiler) };


#define dict__fld_	(0)
#define index__fld_	(1)
#define results__fld_	(2)
#define next_node_index__fld_	(3)


obj_ ResultsNode__DictLiteral__Compiler__accessor_(obj_ this_)
{
	UsingClass_(ResultsNode__DictLiteral__Compiler)
	return Proto_(ResultsNode__DictLiteral__Compiler);
}


obj_ access__DictLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Dict_(")
	DefineString_(1, ")")
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


obj_ at_co_put_co___DictLiteral__Compiler(obj_ this_, obj_ key, obj_ value)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_put_co_) UsingMethod_(dict)

		{
		t0_ = Call_(dict, this_);
		t1_ = Call_(at_co_put_co_, t0_, key, value);
		}
	return nil;
}


obj_ build_results_co_builder_co___DictLiteral__Compiler(obj_ this_, obj_ node, obj_ builder)
{
	extern obj_ new_co_in_co___ResultsNode__DictLiteral__Compiler(obj_ this_, obj_ node_index, obj_ dict);
	extern obj_ new_co___StringLiteral__Compiler(obj_ this_, obj_ value);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(build_results_co_builder_co_) UsingMethod_(emit_code_co_) UsingMethod_(key) UsingMethod_(key_co_) UsingMethod_(left) UsingMethod_(left_co_) UsingMethod_(level) UsingMethod_(level_co_) UsingMethod_(next_node_index) UsingMethod_(next_node_index_co_) UsingMethod_(right) UsingMethod_(right_co_) UsingMethod_(value) UsingMethod_(value_co_)
	UsingClass_(ResultsNode__DictLiteral__Compiler)
	UsingClass_(StringLiteral__Compiler)

		{
		obj_ node_results;
		t0_ = Call_(next_node_index, this_);
		t1_ = new_co_in_co___ResultsNode__DictLiteral__Compiler(Proto_(ResultsNode__DictLiteral__Compiler), t0_, this_);
		node_results = t1_;
		t0_ = Call_(next_node_index, this_);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(next_node_index_co_, this_, t1_);
		t0_ = Call_(left, node);
		if (t0_)
			{
			t0_ = Call_(left, node);
			t1_ = Call_(build_results_co_builder_co_, this_, t0_, builder);
			t2_ = Call_(left_co_, node_results, t1_);
			}
		t0_ = Call_(right, node);
		if (t0_)
			{
			t0_ = Call_(right, node);
			t1_ = Call_(build_results_co_builder_co_, this_, t0_, builder);
			t2_ = Call_(right_co_, node_results, t1_);
			}
		/*  Keys and values are constants which will not be allowed to emit code, so */
		/*  we can call emit-code: on them without fear that they'll actually emit */
		/*  code.  The side-effect is that they set up the builder to declare them. */
		t0_ = Call_(key, node);
		t1_ = new_co___StringLiteral__Compiler(Proto_(StringLiteral__Compiler), t0_);
		t2_ = Call_(emit_code_co_, t1_, builder);
		t3_ = Call_(key_co_, node_results, t2_);
		t0_ = Call_(value, node);
		t1_ = Call_(emit_code_co_, t0_, builder);
		t2_ = Call_(value_co_, node_results, t1_);
		t0_ = Call_(level, node);
		t1_ = Call_(level_co_, node_results, t0_);
		return node_results;
		}
	return nil;
}


obj_ compile_co___DictLiteral__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_dict_literal_co_)

		{
		t0_ = Call_(compile_dict_literal_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create__DictLiteral__Compiler(obj_ this_)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(dict_co_)
	UsingClass_(Dictionary__Standard)

		{
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(dict_co_, this_, t0_);
		}
	return nil;
}


obj_ emit_code_co___DictLiteral__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	DefineString_(0, "Dictionary")
	UsingMethod_(add_co_) UsingMethod_(build_results_co_builder_co_) UsingMethod_(dict) UsingMethod_(dict_literals) UsingMethod_(get_standard_class_co_) UsingMethod_(next_node_index_co_) UsingMethod_(results_co_) UsingMethod_(root) UsingMethod_(using_proto_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(LiteralResult__CCompiler)

		{
		t0_ = Call_(get_standard_class_co_, SharedField_(compiler, Main), Str_(0));
		t1_ = Call_(using_proto_co_, builder, t0_);
		
		/*  Access all values first, so sub-dicts get declared first. */
		t0_ = Call_(next_node_index_co_, this_, SmallInt_(0));
		t0_ = Call_(dict, this_);
		t1_ = Call_(root, t0_);
		t2_ = Call_(build_results_co_builder_co_, this_, t1_, builder);
		t3_ = Call_(results_co_, this_, t2_);
		
		t0_ = Call_(dict_literals, builder);
		t1_ = Call_(add_co_, t0_, this_);
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		}
	return nil;
}


obj_ emit_declaration_co___DictLiteral__Compiler(obj_ this_, obj_ stream)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	UsingInt_(7)
	DefineString_(0, "DefineDict_(")
	DefineString_(1, ", ")
	DefineString_(2, ", ")
	DefineString_(3, ")\n")
	UsingMethod_(access) UsingMethod_(dict) UsingMethod_(emit_declaration_on_co_) UsingMethod_(index) UsingMethod_(num_items) UsingMethod_(results) UsingMethod_(string) UsingMethod_(write_all_co_)

		{
		t0_ = Call_(results, this_);
		t1_ = Call_(emit_declaration_on_co_, t0_, stream);
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(7));
		t0_->fields[1] = Str_(0);
		t1_ = Call_(index, this_);
		t2_ = Call_(string, t1_);
		t0_->fields[2] = t2_;
		t0_->fields[3] = Str_(1);
		t3_ = Call_(results, this_);
		t4_ = Call_(access, t3_);
		t0_->fields[4] = t4_;
		t0_->fields[5] = Str_(2);
		t5_ = Call_(dict, this_);
		t6_ = Call_(num_items, t5_);
		t7_ = Call_(string, t6_);
		t0_->fields[6] = t7_;
		t0_->fields[7] = Str_(3);
		t8_ = Call_(write_all_co_, stream, t0_);
		}
	return nil;
}


obj_ interpreted__DictLiteral__Compiler(obj_ this_)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(at_co_put_co_) UsingMethod_(current_item) UsingMethod_(dict) UsingMethod_(go_forward) UsingMethod_(interpreted) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(pairs) UsingMethod_(value)
	UsingClass_(Dictionary__Standard)

		{
		obj_ result;
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		result = t0_;
		t0_ = Call_(dict, this_);
		t1_ = Call_(pairs, t0_);
		ForStart_(0, t1_, entry)
			{
			t0_ = Call_(name, entry);
			t1_ = Call_(value, entry);
			t2_ = Call_(interpreted, t1_);
			t3_ = Call_(at_co_put_co_, result, t0_, t2_);
			}
		ForEnd_(0)
		return result;
		}
	return nil;
}


obj_ is_literal__DictLiteral__Compiler(obj_ this_)
{

		{
		return true_;
		}
	return nil;
}


obj_ new__DictLiteral__Compiler(obj_ this_)
{
	UsingClass_(DictLiteral__Compiler)
	obj_ obj = AllocObj_(DictLiteral__Compiler);
	create__DictLiteral__Compiler(obj);
	return obj;
}


obj_ prepare_to_emit__DictLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Dictionary")
	UsingMethod_(dict) UsingMethod_(get_standard_class_co_) UsingMethod_(prepare_to_emit_co_) UsingMethod_(root)
	UsingSharedField_(compiler, Main) 

		{
		t0_ = Call_(get_standard_class_co_, SharedField_(compiler, Main), Str_(0));
		t0_ = Call_(dict, this_);
		t1_ = Call_(root, t0_);
		t2_ = Call_(prepare_to_emit_co_, this_, t1_);
		}
	return nil;
}


obj_ prepare_to_emit_co___DictLiteral__Compiler(obj_ this_, obj_ node)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(left) UsingMethod_(prepare_to_emit) UsingMethod_(prepare_to_emit_co_) UsingMethod_(right) UsingMethod_(value)

		{
		t0_ = Call_(left, node);
		if (t0_)
			{
			t0_ = Call_(left, node);
			t1_ = Call_(prepare_to_emit_co_, this_, t0_);
			}
		t0_ = Call_(right, node);
		if (t0_)
			{
			t0_ = Call_(right, node);
			t1_ = Call_(prepare_to_emit_co_, this_, t0_);
			}
		t0_ = Call_(value, node);
		t1_ = Call_(prepare_to_emit, t0_);
		}
	return nil;
}


