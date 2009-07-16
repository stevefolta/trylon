#include "Trylon_.h"

UsingSym_(RemoveContext)UsingClass_(Dictionary__Standard)
UsingClass_(Object__Standard)
UsingClass_(RemoveContext__Dictionary__Standard)
struct ClassInfo RemoveContext__Dictionary__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 43, 5, Proto_(RemoveContext__Dictionary__Standard), Proto_(Dictionary__Standard), Proto_(Object__Standard), nil, Sym_(RemoveContext), nil, nil };
struct object RemoveContext__Dictionary__Standard = 
	{ &RemoveContext__Dictionary__Standard__classInfo_, {nil, nil, nil, nil, nil} };


#define key__fld_	(0)
#define item_found__fld_	(1)
#define delete_node__fld_	(2)
#define last_node__fld_	(3)
#define deleted_value__fld_	(4)


obj_ create_co___RemoveContext__Dictionary__Standard(obj_ this_, obj_ key)
{
	obj_ t0_;
	UsingMethod_(item_found_co_) UsingMethod_(key_co_)

		{
		t0_ = Call_(key_co_, this_, key);
		t0_ = Call_(item_found_co_, this_, nil);
		}
	return nil;
}


obj_ new_co___RemoveContext__Dictionary__Standard(obj_ this_, obj_ key)
{
	UsingClass_(RemoveContext__Dictionary__Standard)
	obj_ obj = AllocObj_(RemoveContext__Dictionary__Standard);
	create_co___RemoveContext__Dictionary__Standard(obj, key);
	return obj;
}


