#include "Trylon_.h"

UsingSym_(CodeLine)UsingClass_(Compiler)
UsingClass_(Object__Standard)
UsingClass_(CodeLine__Compiler)
struct ClassInfo CodeLine__Compiler__classInfo_ = 
	{ 165, 2, Proto_(CodeLine__Compiler), Proto_(Compiler), Proto_(Object__Standard), nil, Sym_(CodeLine) ,nil };
struct object CodeLine__Compiler = 
	{ &CodeLine__Compiler__classInfo_, {nil, nil} };


#define text__fld_	(0)
#define block__fld_	(1)


obj_ add_to_flattened_lines_co___CodeLine__Compiler(obj_ this_, obj_ lines)
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


obj_ block__CodeLine__Compiler(obj_ this_)
{
	return Field_(block);
}


obj_ block_co___CodeLine__Compiler(obj_ this_, obj_ value)
{
	Field_(block) = value;
	return value;
}


obj_ create_co___CodeLine__Compiler(obj_ this_, obj_ text)
{
	obj_ t0_;
	UsingMethod_(block_co_) UsingMethod_(text_co_)

		{
		t0_ = Call_(text_co_, this_, text);
		t0_ = Call_(block_co_, this_, nil);
		
		
		}
	return nil;
}


obj_ create_co_block_co___CodeLine__Compiler(obj_ this_, obj_ text, obj_ block)
{
	obj_ t0_;
	UsingMethod_(block_co_) UsingMethod_(text_co_)

		{
		t0_ = Call_(text_co_, this_, text);
		t0_ = Call_(block_co_, this_, block);
		
		}
	return nil;
}


obj_ flattened_block__CodeLine__Compiler(obj_ this_)
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


obj_ new_co___CodeLine__Compiler(obj_ this_, obj_ text)
{
	UsingClass_(CodeLine__Compiler)
	obj_ obj = AllocObj_(CodeLine__Compiler);
	create_co___CodeLine__Compiler(obj, text);
	return obj;
}


obj_ new_co_block_co___CodeLine__Compiler(obj_ this_, obj_ text, obj_ block)
{
	UsingClass_(CodeLine__Compiler)
	obj_ obj = AllocObj_(CodeLine__Compiler);
	create_co_block_co___CodeLine__Compiler(obj, text, block);
	return obj;
}


obj_ text__CodeLine__Compiler(obj_ this_)
{
	return Field_(text);
}


obj_ text_co___CodeLine__Compiler(obj_ this_, obj_ value)
{
	Field_(text) = value;
	return value;
}


obj_ words__CodeLine__Compiler(obj_ this_)
{
	extern obj_ new_co___WordsLexer__Compiler(obj_ this_, obj_ string);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(text)
	UsingClass_(WordsLexer__Compiler)

		{
		t0_ = Call_(text, this_);
		t1_ = new_co___WordsLexer__Compiler(Proto_(WordsLexer__Compiler), t0_);
		return t1_;
		
		
		}
	return nil;
}


