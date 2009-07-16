#include "Trylon_.h"

UsingSym_(PosixProtoFunction)UsingClass_(PosixProto__JoltCompiler)
UsingClass_(TrylonFunction__Compiler)
UsingClass_(PosixProtoFunction__PosixProto__JoltCompiler)
struct ClassInfo PosixProtoFunction__PosixProto__JoltCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 144, 1, Proto_(PosixProtoFunction__PosixProto__JoltCompiler), Proto_(PosixProto__JoltCompiler), Proto_(TrylonFunction__Compiler), nil, Sym_(PosixProtoFunction), nil, nil };
struct object PosixProtoFunction__PosixProto__JoltCompiler = 
	{ &PosixProtoFunction__PosixProto__JoltCompiler__classInfo_, {nil} };



#define name__fld_	(0)


obj_ create_co___PosixProtoFunction__PosixProto__JoltCompiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(name_co_)

		{
		t0_ = Call_(name_co_, this_, name);
		}
	return nil;
}


obj_ emit_code__PosixProtoFunction__PosixProto__JoltCompiler(obj_ this_)
{
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(load_trylon_posix_proto)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	extern obj_ new_co___Expression(obj_ this_, obj_ num_items);
	UsingSym_(define_send)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(quote)
	extern obj_ with_co_with_co___Expression(obj_ this_, obj_ value_1, obj_ value_2);
	UsingSym_(trylon_proto)
	UsingSym_(Posix)
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(4)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(2)
	UsingInt_(3)
	UsingMethod_(at_co_put_co_) UsingMethod_(intern) UsingMethod_(name)
	UsingClass_(Expression)

		{
		obj_ body, expr;
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t1_);
		t3_ = with_co_with_co___Expression(Proto_(Expression), Sym_(load_trylon_posix_proto), t2_);
		body = t3_;
		t0_ = new_co___Expression(Proto_(Expression), SmallInt_(4));
		expr = t0_;
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(0), Sym_(define_send));
		t0_ = Call_(name, this_);
		t1_ = Call_(intern, t0_);
		t2_ = with_co_with_co___Expression(Proto_(Expression), Sym_(quote), t1_);
		t3_ = Call_(at_co_put_co_, expr, SmallInt_(1), t2_);
		t0_ = with_co_with_co___Expression(Proto_(Expression), Sym_(trylon_proto), Sym_(Posix));
		t1_ = Call_(at_co_put_co_, expr, SmallInt_(2), t0_);
		t0_ = Call_(at_co_put_co_, expr, SmallInt_(3), body);
		return expr;
		}
	return nil;
}


obj_ new_co___PosixProtoFunction__PosixProto__JoltCompiler(obj_ this_, obj_ name)
{
	UsingClass_(PosixProtoFunction__PosixProto__JoltCompiler)
	obj_ obj = AllocObj_(PosixProtoFunction__PosixProto__JoltCompiler);
	create_co___PosixProtoFunction__PosixProto__JoltCompiler(obj, name);
	return obj;
}


