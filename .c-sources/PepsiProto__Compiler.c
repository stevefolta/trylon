#include "Trylon_.h"

UsingSym_(PepsiProto)UsingClass_(Compiler)
UsingClass_(CompiledProto__Compiler)
UsingClass_(PepsiProto__Compiler)
struct ClassInfo PepsiProto__Compiler__classInfo_ = 
	{ 77, 60, Proto_(PepsiProto__Compiler), Proto_(Compiler), Proto_(CompiledProto__Compiler), nil, Sym_(PepsiProto) ,nil };
struct object PepsiProto__Compiler = 
	{ &PepsiProto__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil} };



#define name__fld_	(0)
#define parent__fld_	(1)
#define functions__fld_	(2)
#define fields__fld_	(3)
#define shared_fields__fld_	(4)
#define superclass__fld_	(5)
#define directories__fld_	(6)
#define uses_protos__fld_	(7)
#define subclasses__fld_	(8)
#define source_name__fld_	(9)
#define is_main__fld_	(10)
#define is_root_object__fld_	(11)
#define class_num__fld_	(12)
#define c_preamble__fld_	(13)
#define _dt_c_name__fld_	(14)



obj_ create_co_parent_co___PepsiProto__Compiler(obj_ this_, obj_ name, obj_ parent)
{
	obj_ create_co_parent_co___CompiledProto__Compiler(obj_, obj_, obj_);
	obj_ t0_;

		{
		t0_ = create_co_parent_co___CompiledProto__Compiler(this_, name, parent);
		
		
		}
	return nil;
}


obj_ get_subproto_co___PepsiProto__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new_co_parent_co___CompiledProto__Compiler(obj_ this_, obj_ name, obj_ parent);
	obj_ t0_;
	UsingClass_(CompiledProto__Compiler)

		{
		/* *Always* return it. */
		/* Just return a CompiledProto, without calling add-proto, so we don't try to */
		/* do any codegen for it. */
		t0_ = new_co_parent_co___CompiledProto__Compiler(Proto_(CompiledProto__Compiler), name, this_);
		return t0_;
		
		
		
		
		}
	return nil;
}


obj_ new_co_parent_co___PepsiProto__Compiler(obj_ this_, obj_ name, obj_ parent)
{
	UsingClass_(PepsiProto__Compiler)
	obj_ obj = AllocObj_(PepsiProto__Compiler);
	create_co_parent_co___PepsiProto__Compiler(obj, name, parent);
	return obj;
}


