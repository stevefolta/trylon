#include "Trylon_.h"

UsingSym_(Int)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(Int__Standard)
struct ClassInfo Int__Standard__classInfo_ = 
	{ 11, 0, Proto_(Int__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(Int) ,nil };
struct object Int__Standard = 
	{ &Int__Standard__classInfo_, {} };




#include <stdio.h>
#define Val	(IntValue_(this_))

obj_ _nt__eq___Int__Standard(obj_ this_, obj_ other)
{
return Bool_(Val != IntValue_(other));

}


obj_ _pc___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val % IntValue_(other));

}


obj_ _an___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val & IntValue_(other));

}


obj_ _st___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val * IntValue_(other));

}


obj_ _pl___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val + IntValue_(other));

}


obj_ ___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val - IntValue_(other));

}


obj_ _dv___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val / IntValue_(other));

}


obj_ _lt___Int__Standard(obj_ this_, obj_ other)
{
return Bool_(Val < IntValue_(other));

}


obj_ _lt__lt___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val << IntValue_(other));

}


obj_ _lt__eq___Int__Standard(obj_ this_, obj_ other)
{
return Bool_(Val <= IntValue_(other));

}


obj_ _eq__eq___Int__Standard(obj_ this_, obj_ other)
{
return Bool_(Val == IntValue_(other));

}


obj_ _gt___Int__Standard(obj_ this_, obj_ other)
{
return Bool_(Val > IntValue_(other));

}


obj_ _gt__eq___Int__Standard(obj_ this_, obj_ other)
{
return Bool_(Val >= IntValue_(other));


}


obj_ _gt__gt___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val >> IntValue_(other));


}


obj_ _xr___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val ^ IntValue_(other));

}


obj_ char___Int__Standard(obj_ this_)
{

		{
		return this_;
		}
	return nil;
}


obj_ char_string__Int__Standard(obj_ this_)
{
char str[5];
unsigned long c = (unsigned long) Val;
char* p = str;
if (c < 0x0080)
	*p++ = c;
else if (c < 0x0800) {
	*p++ = (c >> 6) | 0xC0;
	*p++ = (c & 0x3F) | 0x80;
	}
else if (c < 0x00010000) {
	*p++ = (c >> 12) | 0xE0;
	*p++ = ((c >> 6) & 0x3F) | 0x80;
	*p++ = (c & 0x3F) | 0x80;
	}
else if (c < 0x00110000) {
	*p++ = (c >> 18) | 0xF0;
	*p++ = ((c >> 12) & 0x3F) | 0x80;
	*p++ = ((c >> 6) & 0x3F) | 0x80;
	*p++ = (c & 0x3F) | 0x80;
	}
*p++ = 0;
return BuildString_(str);

}


obj_ debug_write__Int__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "Int: ")
	UsingMethod_(_pl_) UsingMethod_(string)
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	UsingClass_(Standard)

		{
		t0_ = Call_(string, this_);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = print_line_co___Standard(Proto_(Standard), t1_);
		
		
		
		}
	return nil;
}


obj_ float___Int__Standard(obj_ this_)
{
return BuildFloat_(Val);

}


obj_ int___Int__Standard(obj_ this_)
{

		{
		return this_;
		
		
		
		}
	return nil;
}


obj_ is_digit__Int__Standard(obj_ this_)
{
int val = Val;
return Bool_(val >= '0' && val <= '9');

}


obj_ is_whitespace__Int__Standard(obj_ this_)
{
int val = Val;
return Bool_(val == ' ' || val == '\t' || val == '\n' || val == '\r');



}


obj_ new__Int__Standard(obj_ this_)
{
return CloneObjExtra_(Proto_(Int__Standard), 1);


}


obj_ string__Int__Standard(obj_ this_)
{
char str[64];
sprintf(str, "%d", Val);
return BuildString_(str);

}


obj_ unary_minus__Int__Standard(obj_ this_)
{
return BuildInt_(-Val);


}


obj_ _or___Int__Standard(obj_ this_, obj_ other)
{
return BuildInt_(Val | IntValue_(other));

}


obj_ _tw___Int__Standard(obj_ this_)
{
return BuildInt_(~Val);

}


