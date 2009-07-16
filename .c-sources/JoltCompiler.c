#include "Trylon_.h"

UsingClass_(BogueObject__JoltCompiler) UsingClass_(Expressions__JoltCompiler) UsingClass_(Functions__JoltCompiler) UsingClass_(Objects__JoltCompiler) UsingClass_(PosixProto__JoltCompiler) UsingClass_(Statements__JoltCompiler) 
static obj_ tu0_[];
UsingSym_(JoltCompiler)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(JoltCompiler)
struct ClassInfo JoltCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 72, 0, Proto_(JoltCompiler), Proto_(Main), Proto_(Object__Standard), nil, Sym_(JoltCompiler), nil, ((obj_) tu0_) };
struct object JoltCompiler = 
	{ &JoltCompiler__classInfo_, {} };

	UsingInt_(6)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(6), Proto_(BogueObject__JoltCompiler), Proto_(Expressions__JoltCompiler), Proto_(Functions__JoltCompiler), Proto_(Objects__JoltCompiler), Proto_(PosixProto__JoltCompiler), Proto_(Statements__JoltCompiler) };



obj_ BogueObject__JoltCompiler__accessor_(obj_ this_)
{
	UsingClass_(BogueObject__JoltCompiler)
	return Proto_(BogueObject__JoltCompiler);
}


obj_ Expressions__JoltCompiler__accessor_(obj_ this_)
{
	UsingClass_(Expressions__JoltCompiler)
	return Proto_(Expressions__JoltCompiler);
}


obj_ Functions__JoltCompiler__accessor_(obj_ this_)
{
	UsingClass_(Functions__JoltCompiler)
	return Proto_(Functions__JoltCompiler);
}


obj_ Objects__JoltCompiler__accessor_(obj_ this_)
{
	UsingClass_(Objects__JoltCompiler)
	return Proto_(Objects__JoltCompiler);
}


obj_ PosixProto__JoltCompiler__accessor_(obj_ this_)
{
	UsingClass_(PosixProto__JoltCompiler)
	return Proto_(PosixProto__JoltCompiler);
}


obj_ Statements__JoltCompiler__accessor_(obj_ this_)
{
	UsingClass_(Statements__JoltCompiler)
	return Proto_(Statements__JoltCompiler);
}


obj_ emit_jolt_co___JoltCompiler(obj_ this_, obj_ compiler)
{
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ status_reporter__Main(obj_ this_);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file);
	extern obj_ status_reporter__Main(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, ".")
	DefineString_(1, "Emitting code...")
	DefineString_(2, "Emitting load.k...")
	DefineString_(3, "/load.k")
	DefineString_(4, "(load-trylon-proto ")
	DefineString_(5, ")")
	UsingMethod_(_pl_) UsingMethod_(all_protos) UsingMethod_(build_settings) UsingMethod_(close) UsingMethod_(create_subdirectory_co_) UsingMethod_(current_item) UsingMethod_(emit_code) UsingMethod_(entry_is_directory_co_) UsingMethod_(full_name) UsingMethod_(go_forward) UsingMethod_(indent) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(jolt_sources_dir) UsingMethod_(report_co_) UsingMethod_(unindent) UsingMethod_(write_line) UsingMethod_(write_co_)
	UsingClass_(ExistingFileStream__Standard)
	UsingClass_(FileDirectory__Standard)
	UsingClass_(File__Standard)
	UsingClass_(Main)

		{
		obj_ directory, file, path, stream;
		/*  Create the sources directory. */
		t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), Str_(0));
		directory = t0_;
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(jolt_sources_dir, t0_);
		t2_ = Call_(entry_is_directory_co_, directory, t1_);
		t3_ = Not_(t2_);
		if (t3_)
			{
			t0_ = build_settings__Main(Proto_(Main));
			t1_ = Call_(jolt_sources_dir, t0_);
			t2_ = Call_(create_subdirectory_co_, directory, t1_);
			}
		
		/*  Emit the classes and packages. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, Str_(1));
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(indent, t0_);
		t0_ = Call_(all_protos, compiler);
		ForStart_(0, t0_, proto)
			{
			obj_ is_changed;
			t0_ = Call_(emit_code, proto);
			is_changed = t0_;
			}
		ForEnd_(0)
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(unindent, t0_);
		
		/*  Emit load.k. */
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(report_co_, t0_, Str_(2));
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(indent, t0_);
		t0_ = Call_(build_settings, compiler);
		t1_ = Call_(jolt_sources_dir, t0_);
		t2_ = Call_(_pl_, t1_, Str_(3));
		path = t2_;
		t0_ = new_co___File__Standard(Proto_(File__Standard), path);
		file = t0_;
		t0_ = new_co___ExistingFileStream__Standard(Proto_(ExistingFileStream__Standard), file);
		stream = t0_;
		t0_ = Call_(all_protos, compiler);
		ForStart_(1, t0_, proto)
			{
			t0_ = Call_(full_name, proto);
			t1_ = Call_(_pl_, Str_(4), t0_);
			t2_ = Call_(_pl_, t1_, Str_(5));
			t3_ = Call_(write_co_, stream, t2_);
			t0_ = Call_(write_line, stream);
			}
		ForEnd_(1)
		t0_ = Call_(close, stream);
		t0_ = status_reporter__Main(Proto_(Main));
		t1_ = Call_(unindent, t0_);
		}
	return nil;
}


obj_ references__JoltCompiler(obj_ this_)
{
	UsingClass_(Expressions__JoltCompiler)
	UsingClass_(Functions__JoltCompiler)
	UsingClass_(Objects__JoltCompiler)
	UsingClass_(Statements__JoltCompiler)

		{
		}
	return nil;
}


