#include "Trylon_.h"

UsingSym_(ProtoExpression)UsingClass_(CCompiler)
UsingClass_(TrylonExpression__Compiler)
UsingClass_(ProtoExpression__CCompiler)
struct ClassInfo ProtoExpression__CCompiler__classInfo_ = 
	{ 104, 1, Proto_(ProtoExpression__CCompiler), Proto_(CCompiler), Proto_(TrylonExpression__Compiler), nil, Sym_(ProtoExpression) ,nil };
struct object ProtoExpression__CCompiler = 
	{ &ProtoExpression__CCompiler__classInfo_, {nil} };



#define proto__fld_	(0)


obj_ access__ProtoExpression__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Proto_(")
	DefineString_(1, ")")
	UsingMethod_(_pl_) UsingMethod_(c_name) UsingMethod_(proto)

		{
		t0_ = Call_(proto, this_);
		t1_ = Call_(c_name, t0_);
		t2_ = Call_(_pl_, Str_(0), t1_);
		t3_ = Call_(_pl_, t2_, Str_(1));
		return t3_;
		
		}
	return nil;
}


obj_ create_co___ProtoExpression__CCompiler(obj_ this_, obj_ proto)
{
	obj_ t0_;
	UsingMethod_(proto_co_)

		{
		t0_ = Call_(proto_co_, this_, proto);
		
		}
	return nil;
}


obj_ emit_code_co___ProtoExpression__CCompiler(obj_ this_, obj_ builder)
{
	extern obj_ new_co___LiteralResult__CCompiler(obj_ this_, obj_ expression);
	obj_ t0_;
	UsingClass_(LiteralResult__CCompiler)

		{
		t0_ = new_co___LiteralResult__CCompiler(Proto_(LiteralResult__CCompiler), this_);
		return t0_;
		
		}
	return nil;
}


obj_ is_literal__ProtoExpression__CCompiler(obj_ this_)
{

		{
		return true_;
		
		}
	return nil;
}


obj_ new_co___ProtoExpression__CCompiler(obj_ this_, obj_ proto)
{
	UsingClass_(ProtoExpression__CCompiler)
	obj_ obj = AllocObj_(ProtoExpression__CCompiler);
	create_co___ProtoExpression__CCompiler(obj, proto);
	return obj;
}


obj_ prepare_to_emit__ProtoExpression__CCompiler(obj_ this_)
{

		{
		}
	return nil;
}


obj_ proto__ProtoExpression__CCompiler(obj_ this_)
{
	return Field_(proto);
}


obj_ proto_co___ProtoExpression__CCompiler(obj_ this_, obj_ value)
{
	Field_(proto) = value;
	return value;
}


