#include "Trylon_.h"

UsingClass_(CodeLine__Trylon) UsingClass_(LinesLexer__Trylon) UsingClass_(WordsLexer__Trylon) 
static obj_ tu0_[];
UsingSym_(Trylon)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(Trylon)
struct ClassInfo Trylon__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 68, 0, Proto_(Trylon), Proto_(Main), Proto_(Object__Standard), nil, Sym_(Trylon), nil, ((obj_) tu0_) };
struct object Trylon = 
	{ &Trylon__classInfo_, {} };

	UsingInt_(3)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(3), Proto_(CodeLine__Trylon), Proto_(LinesLexer__Trylon), Proto_(WordsLexer__Trylon) };



obj_ CodeLine__Trylon__accessor_(obj_ this_)
{
	UsingClass_(CodeLine__Trylon)
	return Proto_(CodeLine__Trylon);
}


obj_ LinesLexer__Trylon__accessor_(obj_ this_)
{
	UsingClass_(LinesLexer__Trylon)
	return Proto_(LinesLexer__Trylon);
}


obj_ WordsLexer__Trylon__accessor_(obj_ this_)
{
	UsingClass_(WordsLexer__Trylon)
	return Proto_(WordsLexer__Trylon);
}


