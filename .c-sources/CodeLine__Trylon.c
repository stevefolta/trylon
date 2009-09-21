#include "Trylon_.h"

UsingSym_(CodeLine)UsingClass_(Trylon)
UsingClass_(Object__Standard)
UsingClass_(CodeLine__Trylon)
struct ClassInfo CodeLine__Trylon__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 193, 2, Proto_(CodeLine__Trylon), Proto_(Trylon), Proto_(Object__Standard), nil, Sym_(CodeLine), nil, nil };
struct object CodeLine__Trylon = 
	{ &CodeLine__Trylon__classInfo_, {nil, nil} };


#define text__fld_	(0)
#define block__fld_	(1)


obj_ add_to_block_text_co_level_co___CodeLine__Trylon(obj_ this_, obj_ builder, obj_ level)
{
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t")
	DefineString_(1, "\n")
	UsingMethod_(_pl_) UsingMethod_(_gt_) UsingMethod_(add_to_block_text_co_level_co_) UsingMethod_(block) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(substr_co_length_co_) UsingMethod_(text)

		{
		t0_ = Call_(_gt_, level, SmallInt_(0));
		if (t0_)
			{
			t0_ = Call_(substr_co_length_co_, Str_(0), SmallInt_(0), level);
			t1_ = Call_(_pl_, builder, t0_);
			builder = t1_;
			}
		t0_ = Call_(text, this_);
		t1_ = Call_(_pl_, builder, t0_);
		builder = t1_;
		t0_ = Call_(_pl_, builder, Str_(1));
		builder = t0_;
		t0_ = Call_(block, this_);
		if (t0_)
			{
			t0_ = Call_(block, this_);
			ForStart_(0, t0_, line)
				{
				t0_ = Call_(_pl_, level, SmallInt_(1));
				t1_ = Call_(add_to_block_text_co_level_co_, line, builder, t0_);
				}
			ForEnd_(0)
			}
		}
	return nil;
}


obj_ add_to_flattened_lines_co___CodeLine__Trylon(obj_ this_, obj_ lines)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_to_flattened_lines_co_) UsingMethod_(append_co_) UsingMethod_(block) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(text)

		{
		t0_ = Call_(text, this_);
		t1_ = Call_(append_co_, lines, t0_);
		t0_ = Call_(block, this_);
		if (t0_)
			{
			t0_ = Call_(block, this_);
			ForStart_(0, t0_, line)
				{
				t0_ = Call_(add_to_flattened_lines_co_, line, lines);
				}
			ForEnd_(0)
			}
		}
	return nil;
}


obj_ block_as_text__CodeLine__Trylon(obj_ this_)
{
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	obj_ t0_;
	UsingInt_(0)
	UsingMethod_(add_to_block_text_co_level_co_) UsingMethod_(block) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(string)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ builder;
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		builder = t0_;
		t0_ = Call_(block, this_);
		ForStart_(0, t0_, line)
			{
			t0_ = Call_(add_to_block_text_co_level_co_, line, builder, SmallInt_(0));
			}
		ForEnd_(0)
		t0_ = Call_(string, builder);
		return t0_;
		}
	return nil;
}


obj_ create_co___CodeLine__Trylon(obj_ this_, obj_ text)
{
	obj_ t0_;
	UsingMethod_(block_co_) UsingMethod_(text_co_)

		{
		t0_ = Call_(text_co_, this_, text);
		t0_ = Call_(block_co_, this_, nil);
		}
	return nil;
}


obj_ create_co_block_co___CodeLine__Trylon(obj_ this_, obj_ text, obj_ block)
{
	obj_ t0_;
	UsingMethod_(block_co_) UsingMethod_(text_co_)

		{
		t0_ = Call_(text_co_, this_, text);
		t0_ = Call_(block_co_, this_, block);
		}
	return nil;
}


obj_ flattened_block__CodeLine__Trylon(obj_ this_)
{
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	UsingMethod_(add_to_flattened_lines_co_) UsingMethod_(block) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator)
	UsingClass_(List__Standard)

		{
		obj_ lines;
		t0_ = new__List__Standard(Proto_(List__Standard));
		lines = t0_;
		t0_ = Call_(block, this_);
		if (t0_)
			{
			t0_ = Call_(block, this_);
			ForStart_(0, t0_, line)
				{
				t0_ = Call_(add_to_flattened_lines_co_, line, lines);
				}
			ForEnd_(0)
			}
		return lines;
		}
	return nil;
}


obj_ flattened_block_text__CodeLine__Trylon(obj_ this_)
{
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	obj_ t0_;
	DefineString_(0, "\n")
	UsingMethod_(_pl_) UsingMethod_(current_item) UsingMethod_(flattened_block) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(string)
	UsingClass_(StringBuilder__Standard)

		{
		obj_ result;
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		result = t0_;
		t0_ = Call_(flattened_block, this_);
		ForStart_(0, t0_, line)
			{
			t0_ = Call_(_pl_, result, line);
			result = t0_;
			t0_ = Call_(_pl_, result, Str_(0));
			result = t0_;
			}
		ForEnd_(0)
		t0_ = Call_(string, result);
		return t0_;
		}
	return nil;
}


obj_ new_co___CodeLine__Trylon(obj_ this_, obj_ text)
{
	UsingClass_(CodeLine__Trylon)
	obj_ obj = AllocObj_(CodeLine__Trylon);
	create_co___CodeLine__Trylon(obj, text);
	return obj;
}


obj_ new_co_block_co___CodeLine__Trylon(obj_ this_, obj_ text, obj_ block)
{
	UsingClass_(CodeLine__Trylon)
	obj_ obj = AllocObj_(CodeLine__Trylon);
	create_co_block_co___CodeLine__Trylon(obj, text, block);
	return obj;
}


obj_ words__CodeLine__Trylon(obj_ this_)
{
	extern obj_ new_co___WordsLexer__Trylon(obj_ this_, obj_ string);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(text)
	UsingClass_(WordsLexer__Trylon)

		{
		t0_ = Call_(text, this_);
		t1_ = new_co___WordsLexer__Trylon(Proto_(WordsLexer__Trylon), t0_);
		return t1_;
		}
	return nil;
}


