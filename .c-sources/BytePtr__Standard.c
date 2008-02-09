#include "Trylon_.h"

UsingSym_(BytePtr)UsingClass_(Standard)
UsingClass_(Object__Standard)
UsingClass_(BytePtr__Standard)
struct ClassInfo BytePtr__Standard__classInfo_ = 
	{ 1, 0, Proto_(BytePtr__Standard), Proto_(Standard), Proto_(Object__Standard), nil, Sym_(BytePtr) ,nil };
struct object BytePtr__Standard = 
	{ &BytePtr__Standard__classInfo_, {} };




#include <string.h>
#include <stdio.h>

obj_ _nt__eq___BytePtr__Standard(obj_ this_, obj_ arg)
{
return Bool_(BytePtrValue_(this_) != BytePtrValue_(arg));
}


obj_ _pl___BytePtr__Standard(obj_ this_, obj_ arg)
{
return BuildBytePtr_(BytePtrValue_(this_) + IntValue_(arg));
}


obj_ ___BytePtr__Standard(obj_ this_, obj_ arg)
{
if (arg->class_ == StdClassRef_(BytePtr))
	return BuildInt_(BytePtrValue_(this_) - BytePtrValue_(arg));
else
	return BuildBytePtr_(BytePtrValue_(this_) - IntValue_(arg));

}


obj_ _lt___BytePtr__Standard(obj_ this_, obj_ arg)
{
return Bool_(BytePtrValue_(this_) < BytePtrValue_(arg));
}


obj_ _lt__eq___BytePtr__Standard(obj_ this_, obj_ arg)
{
return Bool_(BytePtrValue_(this_) <= BytePtrValue_(arg));
}


obj_ _eq__eq___BytePtr__Standard(obj_ this_, obj_ arg)
{
return Bool_(BytePtrValue_(this_) == BytePtrValue_(arg));
}


obj_ _gt___BytePtr__Standard(obj_ this_, obj_ arg)
{
return Bool_(BytePtrValue_(this_) > BytePtrValue_(arg));
}


obj_ _gt__eq___BytePtr__Standard(obj_ this_, obj_ arg)
{
return Bool_(BytePtrValue_(this_) >= BytePtrValue_(arg));

}


obj_ as_object__BytePtr__Standard(obj_ this_)
{
return (obj_) BytePtrValue_(this_);

}


obj_ byte_at_co___BytePtr__Standard(obj_ this_, obj_ index)
{
return BuildInt_(BytePtrValue_(this_)[IntValue_(index)]);

}


obj_ byte_at_co_put_co___BytePtr__Standard(obj_ this_, obj_ index, obj_ value)
{
BytePtrValue_(this_)[IntValue_(index)] = IntValue_(value);

}


obj_ char_at_co___BytePtr__Standard(obj_ this_, obj_ index)
{
return BuildInt_(BytePtrValue_(this_)[IntValue_(index)]);
}


obj_ char_at_co_put_co___BytePtr__Standard(obj_ this_, obj_ index, obj_ value)
{
BytePtrValue_(this_)[IntValue_(index)] = IntValue_(value);
}


obj_ copy_from_co_length_co___BytePtr__Standard(obj_ this_, obj_ source, obj_ length)
{
memcpy(BytePtrValue_(this_), BytePtrValue_(source), IntValue_(length));

}


obj_ debug_write__BytePtr__Standard(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "BytePtr: ")
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


obj_ deref_char__BytePtr__Standard(obj_ this_)
{
return BuildInt_(*(char*) BytePtrValue_(this_));
}


obj_ deref_int__BytePtr__Standard(obj_ this_)
{
return BuildInt_(*(int*) BytePtrValue_(this_));
}


obj_ deref_ptr__BytePtr__Standard(obj_ this_)
{
return BuildBytePtr_(*(byte_ptr_*) BytePtrValue_(this_));
}


obj_ int_at_co___BytePtr__Standard(obj_ this_, obj_ index)
{
return BuildInt_(((int*) BytePtrValue_(this_))[IntValue_(index)]);
}


obj_ int_at_co_put_co___BytePtr__Standard(obj_ this_, obj_ index, obj_ value)
{
((int*) BytePtrValue_(this_))[IntValue_(index)] = IntValue_(value);
}


obj_ new_non_pointer_co___BytePtr__Standard(obj_ this_, obj_ size)
{
	obj_ t0_;
	extern obj_ allocate_bytes_non_ptr_co___Implementation__Standard(obj_ this_, obj_ num_bytes);
	UsingClass_(Implementation__Standard)

		{
		t0_ = allocate_bytes_non_ptr_co___Implementation__Standard(Proto_(Implementation__Standard), size);
		return t0_;
		
		
		}
	return nil;
}


obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size)
{
	obj_ t0_;
	extern obj_ allocate_bytes_co___Implementation__Standard(obj_ this_, obj_ num_bytes);
	UsingClass_(Implementation__Standard)

		{
		t0_ = allocate_bytes_co___Implementation__Standard(Proto_(Implementation__Standard), size);
		return t0_;
		
		}
	return nil;
}


obj_ object_at_co___BytePtr__Standard(obj_ this_, obj_ index)
{
return ((obj_*) BytePtrValue_(this_))[IntValue_(index)];
}


obj_ object_at_co_put_co___BytePtr__Standard(obj_ this_, obj_ index, obj_ value)
{
((obj_*) BytePtrValue_(this_))[IntValue_(index)] = value;
}


obj_ ptr_at_co___BytePtr__Standard(obj_ this_, obj_ index)
{
return BuildBytePtr_(((byte_ptr_*) BytePtrValue_(this_))[IntValue_(index)]);
}


obj_ ptr_at_co_put_co___BytePtr__Standard(obj_ this_, obj_ index, obj_ value)
{
((byte_ptr_*) BytePtrValue_(this_))[IntValue_(index)] = BytePtrValue_(value);
}


obj_ string__BytePtr__Standard(obj_ this_)
{
char str[64];
sprintf(str, "0x%08X", BytePtrValue_(this_));
return BuildString_(str);


}


