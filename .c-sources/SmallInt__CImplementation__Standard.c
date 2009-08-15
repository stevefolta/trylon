#include "Trylon_.h"

UsingSym_(SmallInt)UsingClass_(CImplementation__Standard)
UsingClass_(Int__Standard)
UsingClass_(SmallInt__CImplementation__Standard)
struct ClassInfo SmallInt__CImplementation__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 7, 0, Proto_(SmallInt__CImplementation__Standard), Proto_(CImplementation__Standard), Proto_(Int__Standard), nil, Sym_(SmallInt), nil, nil };
struct object SmallInt__CImplementation__Standard = 
	{ &SmallInt__CImplementation__Standard__classInfo_, {} };





#include <stddef.h>
#include <stdio.h>

#define TaggedValue(val) ((ptrdiff_t) val >> 1)
obj_ _nt__eq___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return Bool_(TaggedValue(this_) != IntValue_(other));
}


obj_ _pc___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) % IntValue_(other));
}


obj_ _an___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) & IntValue_(other));
}


obj_ _st___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) * IntValue_(other));
}


obj_ _pl___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) + IntValue_(other));
}


obj_ ___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) - IntValue_(other));
}


obj_ _dt_added_fields__SmallInt__CImplementation__Standard(obj_ this_)
{
return StdClassRef_(SmallInt__CImplementation)->addedFields;
}


obj_ _dt_class__SmallInt__CImplementation__Standard(obj_ this_)
{
return (obj_) StdClassRef_(SmallInt__CImplementation);
}


obj_ _dt_object_size__SmallInt__CImplementation__Standard(obj_ this_)
{
return BuildInt_(sizeof(classref_) + this_->class_->numSlots * sizeof(obj_));
}


obj_ _dt_parent_context__SmallInt__CImplementation__Standard(obj_ this_)
{
return StdClassRef_(SmallInt__CImplementation)->parentContext;
}


obj_ _dt_proto__SmallInt__CImplementation__Standard(obj_ this_)
{
return Proto_(SmallInt__CImplementation__Standard);
}


obj_ _dt_proto_name__SmallInt__CImplementation__Standard(obj_ this_)
{
return StdClassRef_(SmallInt__CImplementation)->name;
}


obj_ _dt_subprotos__SmallInt__CImplementation__Standard(obj_ this_)
{
return StdClassRef_(SmallInt__CImplementation)->subprotos;
}


obj_ _dt_superclass__SmallInt__CImplementation__Standard(obj_ this_)
{
return StdClassRef_(SmallInt__CImplementation)->superclass;
}


obj_ _dt_used_contexts__SmallInt__CImplementation__Standard(obj_ this_)
{
return StdClassRef_(SmallInt__CImplementation)->usedContexts;
}


obj_ _dv___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) / IntValue_(other));
}


obj_ _lt___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return Bool_(TaggedValue(this_) < IntValue_(other));
}


obj_ _lt__lt___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) << IntValue_(other));
}


obj_ _lt__eq___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return Bool_(TaggedValue(this_) <= IntValue_(other));
}


obj_ _eq__eq___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return Bool_(TaggedValue(this_) == IntValue_(other));
}


obj_ _gt___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return Bool_(TaggedValue(this_) > IntValue_(other));
}


obj_ _gt__eq___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return Bool_(TaggedValue(this_) >= IntValue_(other));
}


obj_ _gt__gt___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) >> IntValue_(other));
}


obj_ _xr___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) ^ IntValue_(other));
}


obj_ char_string__SmallInt__CImplementation__Standard(obj_ this_)
{
char str[5];
unsigned long c = (unsigned long) TaggedValue(this_);
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


obj_ float___SmallInt__CImplementation__Standard(obj_ this_)
{
return BuildFloat_(TaggedValue(this_));
}


obj_ is_digit__SmallInt__CImplementation__Standard(obj_ this_)
{
int val = TaggedValue(this_);
return Bool_(val >= '0' && val <= '9');
}


obj_ is_whitespace__SmallInt__CImplementation__Standard(obj_ this_)
{
int val = TaggedValue(this_);
return Bool_(val == ' ' || val == '\t' || val == '\n' || val == '\r');
}


obj_ string__SmallInt__CImplementation__Standard(obj_ this_)
{
char str[64];
sprintf(str, "%d", TaggedValue(this_));
return BuildString_(str);
}


obj_ unary_minus__SmallInt__CImplementation__Standard(obj_ this_)
{
return BuildInt_(-TaggedValue(this_));
}


obj_ _or___SmallInt__CImplementation__Standard(obj_ this_, obj_ other)
{
return BuildInt_(TaggedValue(this_) | IntValue_(other));
}


obj_ _tw___SmallInt__CImplementation__Standard(obj_ this_)
{
return BuildInt_(~TaggedValue(this_));
}


