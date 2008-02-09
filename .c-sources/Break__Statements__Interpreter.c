#include "Trylon_.h"

UsingSym_(Break)UsingClass_(Statements__Interpreter)
UsingClass_(Exception__Standard)
UsingClass_(Break__Statements__Interpreter)
struct ClassInfo Break__Statements__Interpreter__classInfo_ = 
	{ 6, 0, Proto_(Break__Statements__Interpreter), Proto_(Statements__Interpreter), Proto_(Exception__Standard), nil, Sym_(Break) ,nil };
struct object Break__Statements__Interpreter = 
	{ &Break__Statements__Interpreter__classInfo_, {} };





obj_ message__Break__Statements__Interpreter(obj_ this_)
{
	DefineString_(0, "break")

		{
		return Str_(0);
		}
	return nil;
}


