#include "Trylon_.h"

UsingSym_(ExistingFileStream)UsingClass_(Standard)
UsingClass_(OutputStream__Standard)
UsingClass_(ExistingFileStream__Standard)
struct ClassInfo ExistingFileStream__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 60, 5, Proto_(ExistingFileStream__Standard), Proto_(Standard), Proto_(OutputStream__Standard), nil, Sym_(ExistingFileStream), nil, nil };
struct object ExistingFileStream__Standard = 
	{ &ExistingFileStream__Standard__classInfo_, {nil, nil, nil, nil, nil} };



#define file__fld_	(0)
#define contents__fld_	(1)
#define remaining_contents__fld_	(2)
#define matches_so_far__fld_	(3)
#define output_stream__fld_	(4)


obj_ close__ExistingFileStream__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(0)
	DefineString_(0, "")
	DefineString_(1, "")
	UsingMethod_(_) UsingMethod_(close) UsingMethod_(contents) UsingMethod_(contents_co_) UsingMethod_(file) UsingMethod_(is_empty) UsingMethod_(length) UsingMethod_(matches_so_far) UsingMethod_(output_stream) UsingMethod_(output_stream_co_) UsingMethod_(remaining_contents) UsingMethod_(remaining_contents_co_) UsingMethod_(substr_co_length_co_) UsingMethod_(write_co_)

		{
		t0_ = Call_(matches_so_far, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(output_stream, this_);
			t1_ = Call_(close, t0_);
			}
		else
			{
			t0_ = Call_(remaining_contents, this_);
			t1_ = Call_(is_empty, t0_);
			t2_ = Not_(t1_);
			if (t2_)
				{
				obj_ length_so_far;
				/*  The new one is shorter than the old one (albeit otherwise identical).   */
				/*  Rewrite it.  (We could use truncate(), but this is a little easier...) */
				t0_ = Call_(contents, this_);
				t1_ = Call_(length, t0_);
				t2_ = Call_(remaining_contents, this_);
				t3_ = Call_(length, t2_);
				t4_ = Call_(_, t1_, t3_);
				length_so_far = t4_;
				t0_ = Call_(file, this_);
				t1_ = Call_(output_stream, t0_);
				t2_ = Call_(output_stream_co_, this_, t1_);
				t0_ = Call_(output_stream, this_);
				t1_ = Call_(contents, this_);
				t2_ = Call_(substr_co_length_co_, t1_, SmallInt_(0), length_so_far);
				t3_ = Call_(write_co_, t0_, t2_);
				t0_ = Call_(contents_co_, this_, Str_(0));
				t0_ = Call_(remaining_contents_co_, this_, Str_(1));
				t0_ = Call_(output_stream, this_);
				t1_ = Call_(close, t0_);
				}
			}
		}
	return nil;
}


obj_ create_co___ExistingFileStream__Standard(obj_ this_, obj_ file)
{
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, "")
	DefineString_(1, "")
	UsingMethod_(contents) UsingMethod_(contents_co_) UsingMethod_(exists) UsingMethod_(file_co_) UsingMethod_(is_a_co_) UsingMethod_(matches_so_far_co_) UsingMethod_(output_stream_co_) UsingMethod_(remaining_contents_co_)
	UsingClass_(File__Standard)
	UsingClass_(String__Standard)

		{
		t0_ = Call_(is_a_co_, file, Proto_(String__Standard));
		if (t0_)
			{
			t0_ = new_co___File__Standard(Proto_(File__Standard), file);
			file = t0_;
			}
		t0_ = Call_(file_co_, this_, file);
		t0_ = Call_(exists, file);
		if (t0_)
			{
			t0_ = Call_(contents, file);
			t1_ = Call_(contents_co_, this_, t0_);
			t0_ = Call_(contents, this_);
			t1_ = Call_(remaining_contents_co_, this_, t0_);
			}
		else
			{
			t0_ = Call_(contents_co_, this_, Str_(0));
			t0_ = Call_(remaining_contents_co_, this_, Str_(1));
			}
		/*  Even if it doesn't match (ie. doesn't exist), "matches-so-far" is set  */
		/*  so "write-buffer" will create the file. */
		t0_ = Call_(matches_so_far_co_, this_, true_);
		t0_ = Call_(output_stream_co_, this_, nil);
		}
	return nil;
}


obj_ is_changed__ExistingFileStream__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(is_empty) UsingMethod_(matches_so_far) UsingMethod_(remaining_contents)

		{
		t0_ = Call_(matches_so_far, this_);
		if (t0_) {
			t1_ = Call_(remaining_contents, this_);
			t2_ = Call_(is_empty, t1_);
			t0_ = t2_;
			}
		t3_ = Not_(t0_);
		return t3_;
		}
	return nil;
}


obj_ new_co___ExistingFileStream__Standard(obj_ this_, obj_ file)
{
	UsingClass_(ExistingFileStream__Standard)
	obj_ obj = AllocObj_(ExistingFileStream__Standard);
	create_co___ExistingFileStream__Standard(obj, file);
	return obj;
}


obj_ write_buffer_co_length_co___ExistingFileStream__Standard(obj_ this_, obj_ buffer, obj_ length)
{
	extern obj_ new_co_length_co___String__Standard(obj_ this_, obj_ start, obj_ length);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	UsingInt_(0)
	UsingInt_(0)
	DefineString_(0, "")
	DefineString_(1, "")
	UsingMethod_(_nt__eq_) UsingMethod_(_) UsingMethod_(contents) UsingMethod_(contents_co_) UsingMethod_(file) UsingMethod_(length) UsingMethod_(matches_so_far) UsingMethod_(matches_so_far_co_) UsingMethod_(output_stream) UsingMethod_(output_stream_co_) UsingMethod_(remaining_contents) UsingMethod_(remaining_contents_co_) UsingMethod_(substr_co_length_co_) UsingMethod_(write_buffer_co_length_co_) UsingMethod_(write_co_)
	UsingClass_(String__Standard)

		{
		t0_ = Call_(matches_so_far, this_);
		if (t0_)
			{
			t0_ = new_co_length_co___String__Standard(Proto_(String__Standard), buffer, length);
			t1_ = Call_(remaining_contents, this_);
			t2_ = Call_(substr_co_length_co_, t1_, SmallInt_(0), length);
			t3_ = Call_(_nt__eq_, t0_, t2_);
			if (t3_)
				{
				obj_ length_so_far;
				/*  It has stopped matching -- rewrite the file. */
				t0_ = Call_(matches_so_far_co_, this_, nil);
				t0_ = Call_(file, this_);
				t1_ = Call_(output_stream, t0_);
				t2_ = Call_(output_stream_co_, this_, t1_);
				/*  Rewrite the contents to this point. */
				t0_ = Call_(contents, this_);
				t1_ = Call_(length, t0_);
				t2_ = Call_(remaining_contents, this_);
				t3_ = Call_(length, t2_);
				t4_ = Call_(_, t1_, t3_);
				length_so_far = t4_;
				t0_ = Call_(output_stream, this_);
				t1_ = Call_(contents, this_);
				t2_ = Call_(substr_co_length_co_, t1_, SmallInt_(0), length_so_far);
				t3_ = Call_(write_co_, t0_, t2_);
				/*  Clean up stuff we don't need anymore. */
				t0_ = Call_(contents_co_, this_, Str_(0));
				t0_ = Call_(remaining_contents_co_, this_, Str_(1));
				/*  The new stuff will be written below. */
				}
			else
				{
				t0_ = Call_(remaining_contents, this_);
				t1_ = Call_(remaining_contents, this_);
				t2_ = Call_(length, t1_);
				t3_ = Call_(_, t2_, length);
				t4_ = Call_(substr_co_length_co_, t0_, length, t3_);
				t5_ = Call_(remaining_contents_co_, this_, t4_);
				}
			}
		
		t0_ = Call_(matches_so_far, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = Call_(output_stream, this_);
			t1_ = Call_(write_buffer_co_length_co_, t0_, buffer, length);
			}
		}
	return nil;
}


