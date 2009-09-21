#include "Trylon_.h"

UsingSym_(Stdout)UsingClass_(Standard)
UsingClass_(OutputStream__Standard)
UsingClass_(Stdout__Standard)
struct ClassInfo Stdout__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 53, 0, Proto_(Stdout__Standard), Proto_(Standard), Proto_(OutputStream__Standard), nil, Sym_(Stdout), nil, nil };
struct object Stdout__Standard = 
	{ &Stdout__Standard__classInfo_, {} };





#include <stdio.h>
obj_ write_buffer_co_length_co___Stdout__Standard(obj_ this_, obj_ buffer, obj_ length)
{
fwrite(BytePtrValue_(buffer), IntValue_(length), 1, stdout);
}


