#include "Trylon_.h"

UsingSym_(ResultsNode)UsingClass_(DictLiteral__Compiler)
UsingClass_(Object__Standard)
UsingClass_(ResultsNode__DictLiteral__Compiler)
struct ClassInfo ResultsNode__DictLiteral__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 175, 7, Proto_(ResultsNode__DictLiteral__Compiler), Proto_(DictLiteral__Compiler), Proto_(Object__Standard), nil, Sym_(ResultsNode), nil, nil };
struct object ResultsNode__DictLiteral__Compiler = 
	{ &ResultsNode__DictLiteral__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil} };


#define left__fld_	(0)
#define right__fld_	(1)
#define key__fld_	(2)
#define value__fld_	(3)
#define level__fld_	(4)
#define dict__fld_	(5)
#define node_index__fld_	(6)


obj_ access__ResultsNode__DictLiteral__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	obj_ t8_;
	DefineString_(0, "DictNode_(")
	DefineString_(1, ", ")
	DefineString_(2, ")")
	UsingMethod_(_pl_) UsingMethod_(dict) UsingMethod_(index) UsingMethod_(node_index) UsingMethod_(string)

		{
		t0_ = Call_(dict, this_);
		t1_ = Call_(index, t0_);
		t2_ = Call_(string, t1_);
		t3_ = Call_(_pl_, Str_(0), t2_);
		t4_ = Call_(_pl_, t3_, Str_(1));
		t5_ = Call_(node_index, this_);
		t6_ = Call_(string, t5_);
		t7_ = Call_(_pl_, t4_, t6_);
		t8_ = Call_(_pl_, t7_, Str_(2));
		return t8_;
		}
	return nil;
}


obj_ create_co_in_co___ResultsNode__DictLiteral__Compiler(obj_ this_, obj_ node_index, obj_ dict)
{
	obj_ t0_;
	UsingMethod_(dict_co_) UsingMethod_(node_index_co_)

		{
		t0_ = Call_(node_index_co_, this_, node_index);
		t0_ = Call_(dict_co_, this_, dict);
		}
	return nil;
}


obj_ emit_declaration_on_co___ResultsNode__DictLiteral__Compiler(obj_ this_, obj_ stream)
{
	UsingSym_(nil)
	UsingSym_(nil)
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
	obj_ t9_;
	obj_ t10_;
	obj_ t11_;
	obj_ t12_;
	UsingInt_(15)
	DefineString_(0, "DefineDictNode_(")
	DefineString_(1, ", ")
	DefineString_(2, ", ")
	DefineString_(3, ", ")
	DefineString_(4, ", ")
	DefineString_(5, ", ")
	DefineString_(6, ", ")
	DefineString_(7, ")\n")
	UsingMethod_(access) UsingMethod_(dict) UsingMethod_(emit_declaration_on_co_) UsingMethod_(index) UsingMethod_(key) UsingMethod_(left) UsingMethod_(level) UsingMethod_(node_index) UsingMethod_(right) UsingMethod_(string) UsingMethod_(value) UsingMethod_(write_all_co_)

		{
		obj_ left_access, right_access;
		left_access = Sym_(nil);
		t0_ = Call_(left, this_);
		if (t0_)
			{
			t0_ = Call_(left, this_);
			t1_ = Call_(emit_declaration_on_co_, t0_, stream);
			t0_ = Call_(left, this_);
			t1_ = Call_(access, t0_);
			left_access = t1_;
			}
		right_access = Sym_(nil);
		t0_ = Call_(right, this_);
		if (t0_)
			{
			t0_ = Call_(right, this_);
			t1_ = Call_(emit_declaration_on_co_, t0_, stream);
			t0_ = Call_(right, this_);
			t1_ = Call_(access, t0_);
			right_access = t1_;
			}
		t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(15));
		t0_->fields[1] = Str_(0);
		t1_ = Call_(dict, this_);
		t2_ = Call_(index, t1_);
		t3_ = Call_(string, t2_);
		t0_->fields[2] = t3_;
		t0_->fields[3] = Str_(1);
		t4_ = Call_(node_index, this_);
		t5_ = Call_(string, t4_);
		t0_->fields[4] = t5_;
		t0_->fields[5] = Str_(2);
		t6_ = Call_(key, this_);
		t7_ = Call_(access, t6_);
		t0_->fields[6] = t7_;
		t0_->fields[7] = Str_(3);
		t8_ = Call_(value, this_);
		t9_ = Call_(access, t8_);
		t0_->fields[8] = t9_;
		t0_->fields[9] = Str_(4);
		t0_->fields[10] = left_access;
		t0_->fields[11] = Str_(5);
		t0_->fields[12] = right_access;
		t0_->fields[13] = Str_(6);
		t10_ = Call_(level, this_);
		t11_ = Call_(string, t10_);
		t0_->fields[14] = t11_;
		t0_->fields[15] = Str_(7);
		t12_ = Call_(write_all_co_, stream, t0_);
		}
	return nil;
}


obj_ new_co_in_co___ResultsNode__DictLiteral__Compiler(obj_ this_, obj_ node_index, obj_ dict)
{
	UsingClass_(ResultsNode__DictLiteral__Compiler)
	obj_ obj = AllocObj_(ResultsNode__DictLiteral__Compiler);
	create_co_in_co___ResultsNode__DictLiteral__Compiler(obj, node_index, dict);
	return obj;
}


