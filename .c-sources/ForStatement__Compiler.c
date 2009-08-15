#include "Trylon_.h"

UsingSym_(ForStatement)UsingClass_(Compiler)
UsingClass_(Statement__Compiler)
UsingClass_(ForStatement__Compiler)
struct ClassInfo ForStatement__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 168, 5, Proto_(ForStatement__Compiler), Proto_(Compiler), Proto_(Statement__Compiler), nil, Sym_(ForStatement), nil, nil };
struct object ForStatement__Compiler = 
	{ &ForStatement__Compiler__classInfo_, {nil, nil, nil, nil, nil} };


#define comment__fld_	(0)

#define local__fld_	(1)
#define collection__fld_	(2)
#define body__fld_	(3)
#define index__fld_	(4)


obj_ compile_co___ForStatement__Compiler(obj_ this_, obj_ builder)
{
	obj_ t0_;
	UsingMethod_(compile_for_co_)

		{
		t0_ = Call_(compile_for_co_, builder, this_);
		return t0_;
		}
	return nil;
}


obj_ create_co_collection_co_body_co_comment_co___ForStatement__Compiler(obj_ this_, obj_ local, obj_ collection, obj_ body, obj_ comment)
{
	obj_ t0_;
	UsingMethod_(body_co_) UsingMethod_(collection_co_) UsingMethod_(comment_co_) UsingMethod_(local_co_)

		{
		t0_ = Call_(local_co_, this_, local);
		t0_ = Call_(collection_co_, this_, collection);
		t0_ = Call_(body_co_, this_, body);
		t0_ = Call_(comment_co_, this_, comment);
		}
	return nil;
}


obj_ emit_code_co___ForStatement__Compiler(obj_ this_, obj_ builder)
{
	extern obj_ mangle_name_co___Compiler(obj_ this_, obj_ name);
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
	DefineString_(0, "iterator")
	DefineString_(1, "is-done")
	DefineString_(2, "current-item")
	DefineString_(3, "go-forward")
	DefineString_(4, "ForStart_(")
	DefineString_(5, ", ")
	DefineString_(6, ", ")
	DefineString_(7, ")")
	DefineString_(8, "ForEnd_(")
	DefineString_(9, ")")
	UsingMethod_(_pl_) UsingMethod_(access) UsingMethod_(add_line_co_) UsingMethod_(body) UsingMethod_(calling_method_co_) UsingMethod_(collection) UsingMethod_(cur_loop_index) UsingMethod_(emit_code_co_) UsingMethod_(end_loop) UsingMethod_(local) UsingMethod_(name) UsingMethod_(reset_temporaries) UsingMethod_(start_loop_co_) UsingMethod_(string)
	UsingClass_(Compiler)

		{
		obj_ collection_result, local_name;
		t0_ = Call_(calling_method_co_, builder, Str_(0));
		t0_ = Call_(calling_method_co_, builder, Str_(1));
		t0_ = Call_(calling_method_co_, builder, Str_(2));
		t0_ = Call_(calling_method_co_, builder, Str_(3));
		
		/*  Start the loop. */
		t0_ = Call_(collection, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		collection_result = t1_;
		t0_ = Call_(reset_temporaries, builder);
		t0_ = Call_(local, this_);
		t1_ = Call_(name, t0_);
		t2_ = mangle_name_co___Compiler(Proto_(Compiler), t1_);
		local_name = t2_;
		t0_ = Call_(start_loop_co_, builder, this_);
		t0_ = Call_(cur_loop_index, builder);
		t1_ = Call_(string, t0_);
		t2_ = Call_(_pl_, Str_(4), t1_);
		t3_ = Call_(_pl_, t2_, Str_(5));
		t4_ = Call_(access, collection_result);
		t5_ = Call_(_pl_, t3_, t4_);
		t6_ = Call_(_pl_, t5_, Str_(6));
		t7_ = Call_(_pl_, t6_, local_name);
		t8_ = Call_(_pl_, t7_, Str_(7));
		t9_ = Call_(add_line_co_, builder, t8_);
		
		/*  Body. */
		t0_ = Call_(body, this_);
		t1_ = Call_(emit_code_co_, t0_, builder);
		
		/*  Finish the loop. */
		t0_ = Call_(cur_loop_index, builder);
		t1_ = Call_(string, t0_);
		t2_ = Call_(_pl_, Str_(8), t1_);
		t3_ = Call_(_pl_, t2_, Str_(9));
		t4_ = Call_(add_line_co_, builder, t3_);
		t0_ = Call_(end_loop, builder);
		}
	return nil;
}


obj_ interpreted__ForStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_nt__eq_) UsingMethod_(body) UsingMethod_(collection) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(initial_value_co_) UsingMethod_(interpreted) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(local)
	UsingClass_(Break__Statements__Interpreter)
	UsingClass_(Continue__Statements__Interpreter)

		{
		Try_
			{
			t0_ = Call_(collection, this_);
			t1_ = Call_(interpreted, t0_);
			ForStart_(0, t1_, item)
				{
				t0_ = Call_(local, this_);
				t1_ = Call_(initial_value_co_, t0_, item);
				Try_
					{
					t0_ = Call_(body, this_);
					t1_ = Call_(interpreted, t0_);
					}
				TryElse_
					{
					t0_ = Call_(_nt__eq_, exception, Proto_(Continue__Statements__Interpreter));
					if (t0_)
						{
						Throw_(exception);
						}
					}
				EndTry_
				}
			ForEnd_(0)
			}
		TryElse_
			{
			t0_ = Call_(_nt__eq_, exception, Proto_(Break__Statements__Interpreter));
			if (t0_)
				{
				Throw_(exception);
				}
			}
		EndTry_
		}
	return nil;
}


obj_ new_co_collection_co_body_co_comment_co___ForStatement__Compiler(obj_ this_, obj_ local, obj_ collection, obj_ body, obj_ comment)
{
	UsingClass_(ForStatement__Compiler)
	obj_ obj = AllocObj_(ForStatement__Compiler);
	create_co_collection_co_body_co_comment_co___ForStatement__Compiler(obj, local, collection, body, comment);
	return obj;
}


obj_ resolve__ForStatement__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(body) UsingMethod_(collection) UsingMethod_(resolve)

		{
		t0_ = Call_(collection, this_);
		t1_ = Call_(resolve, t0_);
		t0_ = Call_(body, this_);
		t1_ = Call_(resolve, t0_);
		}
	return nil;
}


