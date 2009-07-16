#include "Trylon_.h"

UsingClass_(PosixProtoFunction__PosixProto__JoltCompiler) 
static obj_ tu0_[];
UsingSym_(PosixProto)UsingClass_(JoltCompiler)
UsingClass_(CompiledProto__Compiler)
UsingClass_(PosixProto__JoltCompiler)
struct ClassInfo PosixProto__JoltCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 80, 17, Proto_(PosixProto__JoltCompiler), Proto_(JoltCompiler), Proto_(CompiledProto__Compiler), nil, Sym_(PosixProto), nil, ((obj_) tu0_) };
struct object PosixProto__JoltCompiler = 
	{ &PosixProto__JoltCompiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil} };

	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(PosixProtoFunction__PosixProto__JoltCompiler) };


#define compile_info__fld_	(0)

#define name__fld_	(1)
#define parent__fld_	(2)
#define functions__fld_	(3)
#define fields__fld_	(4)
#define shared_fields__fld_	(5)
#define superclass__fld_	(6)
#define directories__fld_	(7)
#define uses_protos__fld_	(8)
#define subclasses__fld_	(9)
#define source_name__fld_	(10)
#define is_main__fld_	(11)
#define is_root_object__fld_	(12)
#define has_destroy__fld_	(13)
#define class_num__fld_	(14)
#define c_preamble__fld_	(15)
#define _dt_c_name__fld_	(16)



obj_ PosixProtoFunction__PosixProto__JoltCompiler__accessor_(obj_ this_)
{
	UsingClass_(PosixProtoFunction__PosixProto__JoltCompiler)
	return Proto_(PosixProtoFunction__PosixProto__JoltCompiler);
}


obj_ create_co_parent_co_directory_co___PosixProto__JoltCompiler(obj_ this_, obj_ name, obj_ parent, obj_ directory)
{
	obj_ create_co_parent_co___CompiledProto__Compiler(obj_, obj_, obj_);
	extern obj_ new_co___PosixProtoFunction__PosixProto__JoltCompiler(obj_ this_, obj_ name);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(0)
	UsingInt_(3)
	DefineString_(0, ".so")
	UsingMethod_(_) UsingMethod_(add_directory_co_) UsingMethod_(at_co_put_co_) UsingMethod_(current_item) UsingMethod_(ends_with_co_) UsingMethod_(functions) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(length) UsingMethod_(names) UsingMethod_(substr_co_length_co_)
	UsingClass_(PosixProtoFunction__PosixProto__JoltCompiler)

		{
		t0_ = create_co_parent_co___CompiledProto__Compiler(this_, name, parent);
		t0_ = Call_(add_directory_co_, this_, directory);
		
		/*  Add the subprotos now; this is sort of a workaround for not having the */
		/*  Posix proto handle doesNotUnderstand:. */
		t0_ = Call_(names, directory);
		ForStart_(0, t0_, file_name)
			{
			t0_ = Call_(ends_with_co_, file_name, Str_(0));
			if (t0_)
				{
				obj_ proto_function, proto_name;
				t0_ = Call_(length, file_name);
				t1_ = Call_(_, t0_, SmallInt_(3));
				t2_ = Call_(substr_co_length_co_, file_name, SmallInt_(0), t1_);
				proto_name = t2_;
				t0_ = new_co___PosixProtoFunction__PosixProto__JoltCompiler(Proto_(PosixProtoFunction__PosixProto__JoltCompiler), proto_name);
				proto_function = t0_;
				t0_ = Call_(functions, this_);
				t1_ = Call_(at_co_put_co_, t0_, proto_name, proto_function);
				}
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ new_co_parent_co_directory_co___PosixProto__JoltCompiler(obj_ this_, obj_ name, obj_ parent, obj_ directory)
{
	UsingClass_(PosixProto__JoltCompiler)
	obj_ obj = AllocObj_(PosixProto__JoltCompiler);
	create_co_parent_co_directory_co___PosixProto__JoltCompiler(obj, name, parent, directory);
	return obj;
}


