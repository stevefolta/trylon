#include "Trylon_.h"

UsingClass_(Iterator__StreamLinesReader__Standard) UsingClass_(LineEnd__StreamLinesReader__Standard) UsingClass_(ReceivedBuffer__StreamLinesReader__Standard) 
static obj_ tu0_[];
UsingSym_(StreamLinesReader)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(StreamLinesReader__Standard)
struct ClassInfo StreamLinesReader__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 80, 5, Proto_(StreamLinesReader__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(StreamLinesReader), nil, ((obj_) tu0_) };
struct object StreamLinesReader__Standard = 
	{ &StreamLinesReader__Standard__classInfo_, {nil, nil, nil, nil, nil} };

	UsingInt_(3)
	UsingInt_(1024)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(3), Proto_(Iterator__StreamLinesReader__Standard), Proto_(LineEnd__StreamLinesReader__Standard), Proto_(ReceivedBuffer__StreamLinesReader__Standard) };

#define stream__fld_	(0)
#define buffer_size__fld_	(1)
#define pending_buffer__fld_	(2)
#define remainder__fld_	(3)
#define skip_initial_newline__fld_	(4)

DeclareSharedField_(default_buffer_size, StreamLinesReader__Standard, SmallInt_(1024))

obj_ Iterator__StreamLinesReader__Standard__accessor_(obj_ this_)
{
	UsingClass_(Iterator__StreamLinesReader__Standard)
	return Proto_(Iterator__StreamLinesReader__Standard);
}


obj_ LineEnd__StreamLinesReader__Standard__accessor_(obj_ this_)
{
	UsingClass_(LineEnd__StreamLinesReader__Standard)
	return Proto_(LineEnd__StreamLinesReader__Standard);
}


obj_ ReceivedBuffer__StreamLinesReader__Standard__accessor_(obj_ this_)
{
	UsingClass_(ReceivedBuffer__StreamLinesReader__Standard)
	return Proto_(ReceivedBuffer__StreamLinesReader__Standard);
}


obj_ create_co___StreamLinesReader__Standard(obj_ this_, obj_ stream)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(buffer_size_co_) UsingMethod_(default_buffer_size) UsingMethod_(stream_co_)

		{
		t0_ = Call_(stream_co_, this_, stream);
		t0_ = Call_(default_buffer_size, this_);
		t1_ = Call_(buffer_size_co_, this_, t0_);
		}
	return nil;
}


obj_ create_co_buffer_size_co___StreamLinesReader__Standard(obj_ this_, obj_ stream, obj_ buffer_size)
{
	obj_ t0_;
	UsingMethod_(buffer_size_co_) UsingMethod_(stream_co_)

		{
		t0_ = Call_(stream_co_, this_, stream);
		t0_ = Call_(buffer_size_co_, this_, buffer_size);
		}
	return nil;
}


obj_ default_buffer_size__StreamLinesReader__Standard(obj_ this_)
{
	return SharedField_(default_buffer_size, StreamLinesReader__Standard);
}


obj_ default_buffer_size_co___StreamLinesReader__Standard(obj_ this_, obj_ value)
{
	SetSharedField_(default_buffer_size, StreamLinesReader__Standard, value);
	return value;
}


obj_ find_line_end_in_co___StreamLinesReader__Standard(obj_ this_, obj_ string)
{
	extern obj_ new_co_was_return_co___LineEnd__StreamLinesReader__Standard(obj_ this_, obj_ index, obj_ was_return);
	extern obj_ new_co_was_return_co___LineEnd__StreamLinesReader__Standard(obj_ this_, obj_ index, obj_ was_return);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(13)
	UsingInt_(10)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_lt_) UsingMethod_(_eq__eq_) UsingMethod_(deref_char) UsingMethod_(start) UsingMethod_(stopper)
	UsingClass_(LineEnd__StreamLinesReader__Standard)

		{
		obj_ char_ptr, start, stopper;
		t0_ = Call_(start, string);
		start = t0_;
		char_ptr = start;
		t0_ = Call_(stopper, string);
		stopper = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_lt_, char_ptr, stopper);
			if (!(t0_))
				Break_(0)
			{
			obj_ c;
			t0_ = Call_(deref_char, char_ptr);
			c = t0_;
			t0_ = Call_(_eq__eq_, c, Int_(13));
			if (t0_)
				{
				t0_ = Call_(_, char_ptr, start);
				t1_ = new_co_was_return_co___LineEnd__StreamLinesReader__Standard(Proto_(LineEnd__StreamLinesReader__Standard), t0_, true_);
				return t1_;
				}
			else
				{
				t2_ = Call_(_eq__eq_, c, Int_(10));
				if (t2_)
					{
					t0_ = Call_(_, char_ptr, start);
					t1_ = new_co_was_return_co___LineEnd__StreamLinesReader__Standard(Proto_(LineEnd__StreamLinesReader__Standard), t0_, nil);
					return t1_;
					}
				}
			t2_ = Call_(_pl_, char_ptr, SmallInt_(1));
			char_ptr = t2_;
			}
			}
		return nil;
		}
	return nil;
}


obj_ iterator__StreamLinesReader__Standard(obj_ this_)
{
	extern obj_ new_co___Iterator__StreamLinesReader__Standard(obj_ this_, obj_ reader);
	obj_ t0_;
	UsingClass_(Iterator__StreamLinesReader__Standard)

		{
		t0_ = new_co___Iterator__StreamLinesReader__Standard(Proto_(Iterator__StreamLinesReader__Standard), this_);
		return t0_;
		}
	return nil;
}


obj_ new_co___StreamLinesReader__Standard(obj_ this_, obj_ stream)
{
	UsingClass_(StreamLinesReader__Standard)
	obj_ obj = AllocObj_(StreamLinesReader__Standard);
	create_co___StreamLinesReader__Standard(obj, stream);
	return obj;
}


obj_ new_co_buffer_size_co___StreamLinesReader__Standard(obj_ this_, obj_ stream, obj_ buffer_size)
{
	UsingClass_(StreamLinesReader__Standard)
	obj_ obj = AllocObj_(StreamLinesReader__Standard);
	create_co_buffer_size_co___StreamLinesReader__Standard(obj, stream, buffer_size);
	return obj;
}


obj_ next__StreamLinesReader__Standard(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___ReceivedBuffer__StreamLinesReader__Standard(obj_ this_, obj_ capacity);
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(10)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(10)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(append_co_) UsingMethod_(buffer_size) UsingMethod_(current_item) UsingMethod_(find_line_end_in_co_) UsingMethod_(first_character) UsingMethod_(go_forward) UsingMethod_(index) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(pending_buffer) UsingMethod_(pending_buffer_co_) UsingMethod_(read_from_co_) UsingMethod_(remainder) UsingMethod_(remainder_co_) UsingMethod_(skip_initial_newline) UsingMethod_(skip_initial_newline_co_) UsingMethod_(stream) UsingMethod_(string) UsingMethod_(substr_co_) UsingMethod_(substr_co_length_co_) UsingMethod_(was_return)
	UsingClass_(List__Standard)
	UsingClass_(ReceivedBuffer__StreamLinesReader__Standard)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ buffers, contents, last_buffer, line_end, result;
		/*  If there's a already a pending-buffer, see if it's got a line. */
		t0_ = Call_(pending_buffer, this_);
		if (t0_) {
			t1_ = Call_(remainder, this_);
			t2_ = Call_(is_empty, t1_);
			t3_ = Not_(t2_);
			t0_ = t3_;
			}
		if (t0_)
			{
			obj_ line_end;
			t0_ = Call_(skip_initial_newline, this_);
			if (t0_)
				{
				t0_ = Call_(remainder, this_);
				t1_ = Call_(first_character, t0_);
				t2_ = Call_(_eq__eq_, t1_, Int_(10));
				if (t2_)
					{
					t0_ = Call_(remainder, this_);
					t1_ = Call_(substr_co_, t0_, SmallInt_(1));
					t2_ = Call_(remainder_co_, this_, t1_);
					}
				t0_ = Call_(skip_initial_newline_co_, this_, nil);
				}
			
			t0_ = Call_(remainder, this_);
			t1_ = Call_(find_line_end_in_co_, this_, t0_);
			line_end = t1_;
			if (line_end)
				{
				obj_ result;
				t0_ = Call_(remainder, this_);
				t1_ = Call_(index, line_end);
				t2_ = Call_(substr_co_length_co_, t0_, SmallInt_(0), t1_);
				result = t2_;
				t0_ = Call_(remainder, this_);
				t1_ = Call_(index, line_end);
				t2_ = Call_(_pl_, t1_, SmallInt_(1));
				t3_ = Call_(substr_co_, t0_, t2_);
				t4_ = Call_(remainder_co_, this_, t3_);
				t0_ = Call_(remainder, this_);
				t1_ = Call_(is_empty, t0_);
				if (t1_)
					{
					t0_ = Call_(pending_buffer_co_, this_, nil);
					}
				t0_ = Call_(was_return, line_end);
				t1_ = Call_(skip_initial_newline_co_, this_, t0_);
				return result;
				}
			}
		
		/*  Read buffers until we find the end of the line. */
		t0_ = new__List__Standard(Proto_(List__Standard));
		buffers = t0_;
		last_buffer = nil;
		contents = nil;
		line_end = nil;
		while (1) {
			ContinuePoint_(0)
			{
			t0_ = Call_(buffer_size, this_);
			t1_ = new_co___ReceivedBuffer__StreamLinesReader__Standard(Proto_(ReceivedBuffer__StreamLinesReader__Standard), t0_);
			last_buffer = t1_;
			t0_ = Call_(stream, this_);
			t1_ = Call_(read_from_co_, last_buffer, t0_);
			t0_ = Call_(string, last_buffer);
			contents = t0_;
			
			t0_ = Call_(skip_initial_newline, this_);
			if (t0_) {
				t1_ = Call_(is_empty, contents);
				t2_ = Not_(t1_);
				t0_ = t2_;
				}
			if (t0_)
				{
				t0_ = Call_(skip_initial_newline_co_, this_, nil);
				t0_ = Call_(first_character, contents);
				t1_ = Call_(_eq__eq_, t0_, Int_(10));
				if (t1_)
					{
					t0_ = Call_(substr_co_, contents, SmallInt_(1));
					contents = t0_;
					t0_ = Call_(is_empty, contents);
					if (t0_)
						{
						Continue_(0)
						}
					}
				}
			
			t0_ = Call_(find_line_end_in_co_, this_, contents);
			line_end = t0_;
			if (line_end)
				{
				Break_(0)
				}
			else
				{
				t0_ = Call_(is_empty, last_buffer);
				if (t0_)
					{
					/*  Reached the end with no EOL. */
					t0_ = Call_(pending_buffer, this_);
					t1_ = Not_(t0_);
					if (t1_) {
						t2_ = Call_(is_empty, buffers);
						t1_ = t2_;
						}
					if (t1_)
						{
						/*  We've returned the last line. */
						return nil;
						}
					Break_(0)
					}
				}
			
			t0_ = Call_(append_co_, buffers, last_buffer);
			}
		}
		
		/*  Assemble the result. */
		result = nil;
		t0_ = Call_(pending_buffer, this_);
		if ((t0_) == nil) {
			t1_ = Call_(is_empty, buffers);
			t2_ = Not_(t1_);
			t0_ = t2_;
			}
		if (t0_)
			{
			t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
			result = t0_;
			t0_ = Call_(pending_buffer, this_);
			if (t0_)
				{
				t0_ = Call_(remainder, this_);
				t1_ = Call_(_pl_, result, t0_);
				result = t1_;
				}
			ForStart_(1, buffers, buffer)
				{
				t0_ = Call_(string, buffer);
				t1_ = Call_(_pl_, result, t0_);
				result = t1_;
				}
			ForEnd_(1)
			if (line_end)
				{
				t0_ = Call_(index, line_end);
				t1_ = Call_(substr_co_length_co_, contents, SmallInt_(0), t0_);
				t2_ = Call_(_pl_, result, t1_);
				result = t2_;
				}
			t0_ = Call_(string, result);
			result = t0_;
			}
		else
			{
			t0_ = Call_(index, line_end);
			t1_ = Call_(substr_co_length_co_, contents, SmallInt_(0), t0_);
			result = t1_;
			}
		
		/*  Get ready for next time. */
		t0_ = Not_(line_end);
		if (t0_)
			{
			t0_ = Call_(remainder_co_, this_, contents);
			t0_ = Call_(skip_initial_newline_co_, this_, nil);
			}
		else
			{
			t0_ = Call_(index, line_end);
			t1_ = Call_(_pl_, t0_, SmallInt_(1));
			t2_ = Call_(substr_co_, contents, t1_);
			t3_ = Call_(remainder_co_, this_, t2_);
			t0_ = Call_(was_return, line_end);
			t1_ = Call_(skip_initial_newline_co_, this_, t0_);
			}
		t0_ = Call_(remainder, this_);
		t1_ = Call_(is_empty, t0_);
		if (t1_)
			{
			t0_ = Call_(pending_buffer_co_, this_, nil);
			}
		else
			{
			t0_ = Call_(pending_buffer_co_, this_, last_buffer);
			}
		
		return result;
		}
	return nil;
}


