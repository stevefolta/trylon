#include "Trylon_.h"

UsingSym_(NilTest)UsingClass_(Compiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(NilTest__Compiler)
struct ClassInfo NilTest__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 153, 2, Proto_(NilTest__Compiler), Proto_(Compiler), Proto_(TrylonExpression__Compiler), nil, Sym_(NilTest), nil, nil };
struct object NilTest__Compiler = 
	{ &NilTest__Compiler__classInfo_, {nil, nil} };



#define object__fld_	(0)
#define is_nil__fld_	(1)


obj_ compile_co___NilTest__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_nil_test_co_)

		{
		t0_ = Call_(compile_nil_test_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co_is_nil_co___NilTest__Compiler(obj_ this_, obj_ object, obj_ is_nil)
{
	obj_ t0_;
	UsingMethod_(is_nil_co_) UsingMethod_(object_co_)

		{
		t0_ = Call_(object_co_, this_, object);
		t0_ = Call_(is_nil_co_, this_, is_nil);
		}
	return nil;
}


obj_ emit_code_co___NilTest__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	obj_ t7_;
	DefineString_(0, "Not_")
	DefineString_(1, "Bool_")
	DefineString_(2, " = ")
	DefineString_(3, "(")
	DefineString_(4, ");")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(emit_code_co_) UsingMethod_(get_temporary) UsingMethod_(is_nil) UsingMethod_(name) UsingMethod_(object)

		{
		obj_ object_result, temp, test;
		test = Str_(0);
		t0_ = Call_(is_nil, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			test = Str_(1);
			}
		t0_ = Call_(object, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		object_result = t1_;
		t0_ = Call_(get_temporary, builder);
		temp = t0_;
		t0_ = Call_(name, temp);
		t1_ = Call_(_pl_, t0_, Str_(2));
		t2_ = Call_(_pl_, t1_, test);
		t3_ = Call_(_pl_, t2_, Str_(3));
		t4_ = Call_(access, object_result);
		t5_ = Call_(_pl_, t3_, t4_);
		t6_ = Call_(_pl_, t5_, Str_(4));
		t7_ = Call_(add_line_co_, builder, t6_);
		return temp;
		}
	return nil;
}


obj_ interpreted__NilTest__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(interpreted) UsingMethod_(is_nil) UsingMethod_(object)

		{
		obj_ result;
		t0_ = Call_(object, this_);
		t1_ = Call_(interpreted, t0_);
		t2_ = Not_(t1_);
		result = t2_;
		t0_ = Call_(is_nil, this_);
		if (t0_)
			{
			t0_ = Not_(result);
			result = t0_;
			}
		return result;
		}
	return nil;
}


obj_ new_co_is_nil_co___NilTest__Compiler(obj_ this_, obj_ object, obj_ is_nil)
{
	UsingClass_(NilTest__Compiler)
	obj_ obj = AllocObj_(NilTest__Compiler);
	create_co_is_nil_co___NilTest__Compiler(obj, object, is_nil);
	return obj;
}


obj_ resolve__NilTest__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(object) UsingMethod_(resolve)

		{
		t0_ = Call_(object, this_);
		t1_ = Call_(resolve, t0_);
		}
	return nil;
}


