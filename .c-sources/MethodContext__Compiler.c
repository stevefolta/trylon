#include "Trylon_.h"

UsingSym_(MethodContext)UsingClass_(Compiler)
UsingClass_(Context__Compiler)
UsingClass_(MethodContext__Compiler)
struct ClassInfo MethodContext__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 92, 2, Proto_(MethodContext__Compiler), Proto_(Compiler), Proto_(Context__Compiler), nil, Sym_(MethodContext), nil, nil };
struct object MethodContext__Compiler = 
	{ &MethodContext__Compiler__classInfo_, {nil, nil} };



#define arguments__fld_	(0)
#define parent__fld_	(1)


obj_ create_co_parent_co___MethodContext__Compiler(obj_ this_, obj_ arguments, obj_ parent)
{
	obj_ t0_;
	UsingMethod_(arguments_co_) UsingMethod_(parent_co_)

		{
		t0_ = Call_(arguments_co_, this_, arguments);
		t0_ = Call_(parent_co_, this_, parent);
		}
	return nil;
}


obj_ enclosing_method_context__MethodContext__Compiler(obj_ this_)
{

		{
		return this_;
		}
	return nil;
}


obj_ lookup_function_co___MethodContext__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new__ThisFunction__Compiler(obj_ this_);
	extern obj_ new_co___ArgumentFunction__Compiler(obj_ this_, obj_ arg);
	extern obj_ new_co___SetArgumentFunction__Compiler(obj_ this_, obj_ arg);
	extern obj_ new_co_on_proto_co___FunctionOnThis__Compiler(obj_ this_, obj_ name, obj_ on_proto);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, "this")
	DefineString_(1, ":")
	UsingMethod_(_) UsingMethod_(_eq__eq_) UsingMethod_(arguments) UsingMethod_(current_item) UsingMethod_(ends_with_co_) UsingMethod_(go_forward) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(length) UsingMethod_(lookup_function_co_) UsingMethod_(lookup_instance_function_co_) UsingMethod_(name) UsingMethod_(parent) UsingMethod_(substr_co_length_co_)
	UsingClass_(ArgumentFunction__Compiler)
	UsingClass_(FunctionOnThis__Compiler)
	UsingClass_(ProtoFunction__Compiler)
	UsingClass_(SetArgumentFunction__Compiler)
	UsingClass_(ThisFunction__Compiler)

		{
		obj_ found_function, is_setter, set_name;
		/*  "this" */
		t0_ = Call_(_eq__eq_, name, Str_(0));
		if (t0_)
			{
			t0_ = new__ThisFunction__Compiler(Proto_(ThisFunction__Compiler));
			return t0_;
			}
		
		/*  Arguments. */
		t1_ = Call_(ends_with_co_, name, Str_(1));
		is_setter = t1_;
		set_name = nil;
		if (is_setter)
			{
			t0_ = Call_(length, name);
			t1_ = Call_(_, t0_, SmallInt_(1));
			t2_ = Call_(substr_co_length_co_, name, SmallInt_(0), t1_);
			set_name = t2_;
			}
		t0_ = Call_(arguments, this_);
		ForStart_(0, t0_, argument)
			{
			t0_ = Call_(name, argument);
			t1_ = Call_(_eq__eq_, t0_, name);
			if (t1_)
				{
				t0_ = new_co___ArgumentFunction__Compiler(Proto_(ArgumentFunction__Compiler), argument);
				return t0_;
				}
			else
				{
				t1_ = is_setter;
				if (t1_) {
					t2_ = Call_(name, argument);
					t3_ = Call_(_eq__eq_, t2_, set_name);
					t1_ = t3_;
					}
				if (t1_)
					{
					t0_ = new_co___SetArgumentFunction__Compiler(Proto_(SetArgumentFunction__Compiler), argument);
					return t0_;
					}
				}
			}
		ForEnd_(0)
		
		/*  Function calls on "this". */
		/*  The parent will be a CompiledProto. */
		t1_ = Call_(parent, this_);
		t2_ = Call_(lookup_instance_function_co_, t1_, name);
		found_function = t2_;
		if (found_function)
			{
			t0_ = Call_(is_a_co_, found_function, Proto_(ProtoFunction__Compiler));
			if (t0_)
				{
				/*  Treat this specially, to make sure protos get loaded. */
				return found_function;
				}
			t0_ = Call_(parent, this_);
			t1_ = new_co_on_proto_co___FunctionOnThis__Compiler(Proto_(FunctionOnThis__Compiler), name, t0_);
			return t1_;
			}
		
		t2_ = Call_(parent, this_);
		t3_ = Call_(lookup_function_co_, t2_, name);
		return t3_;
		}
	return nil;
}


obj_ new_co_parent_co___MethodContext__Compiler(obj_ this_, obj_ arguments, obj_ parent)
{
	UsingClass_(MethodContext__Compiler)
	obj_ obj = AllocObj_(MethodContext__Compiler);
	create_co_parent_co___MethodContext__Compiler(obj, arguments, parent);
	return obj;
}


