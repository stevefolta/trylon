#include "Trylon_.h"

UsingSym_(Class)UsingClass_(CImplementation__Standard)
UsingClass_(Object__Standard)
UsingClass_(Class__CImplementation__Standard)
struct ClassInfo Class__CImplementation__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 7, 0, Proto_(Class__CImplementation__Standard), Proto_(CImplementation__Standard), Proto_(Object__Standard), nil, Sym_(Class), nil, nil };
struct object Class__CImplementation__Standard = 
	{ &Class__CImplementation__Standard__classInfo_, {} };




#define classInfo ((struct ClassInfo*) this_)
obj_ added_fields__Class__CImplementation__Standard(obj_ this_)
{
return classInfo->addedFields;
}


obj_ class_num__Class__CImplementation__Standard(obj_ this_)
{
return BuildInt_(classInfo->classNum);
}


obj_ dispatch_table_entry_for_co___Class__CImplementation__Standard(obj_ this_, obj_ selector)
{
fn_ptr_* entry_ptr = MethodLocation_(classInfo->proto, selector);
if (entry_ptr == nil)
return nil;
return BuildBytePtr_(entry_ptr);
}


obj_ install_method_co_machine_code_co___Class__CImplementation__Standard(obj_ this_, obj_ name, obj_ code)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_put_co_) UsingMethod_(deref_ptr_co_) UsingMethod_(dispatch_table_entry_for_co_) UsingMethod_(intern) UsingMethod_(new_methods) UsingMethod_(new_methods_co_)
	UsingClass_(Dictionary__Standard)

		{
		obj_ selector, table_entry_ptr;
		t0_ = Call_(intern, name);
		selector = t0_;
		
		/*  If it's in the dispatch table, patch that. */
		t0_ = Call_(dispatch_table_entry_for_co_, this_, selector);
		table_entry_ptr = t0_;
		if (table_entry_ptr)
			{
			t0_ = Call_(deref_ptr_co_, table_entry_ptr, code);
			return nil;
			}
		
		/*  Otherwise, add it to the "new-methods" dictionary. */
		t0_ = Call_(new_methods, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
			t1_ = Call_(new_methods_co_, this_, t0_);
			}
		t0_ = Call_(new_methods, this_);
		t1_ = Call_(at_co_put_co_, t0_, selector, code);
		}
	return nil;
}


obj_ name__Class__CImplementation__Standard(obj_ this_)
{
return classInfo->name;
}


obj_ new_methods__Class__CImplementation__Standard(obj_ this_)
{
return classInfo->newMethods;
}


obj_ new_methods_co___Class__CImplementation__Standard(obj_ this_, obj_ dict)
{
return classInfo->newMethods = dict;
}


obj_ new_co_field_names_co_parent_co_superclass_co___Class__CImplementation__Standard(obj_ this_, obj_ name, obj_ field_names, obj_ parent_context, obj_ superclass)
{
UsingMethod_(num_items)
UsingMethod_(iterator) UsingMethod_(is_done)
UsingMethod_(current_item) UsingMethod_(go_forward)

/* Count the total number of fields. */
int numAddedFields = 0;
if (field_names)
numAddedFields = IntValue_(Call_(num_items, field_names));
int totalFields = numAddedFields;
if (superclass)
totalFields += superclass->class_->numSlots;

/* Create the class. */
struct ClassInfo* newClass = Allocate_(sizeof(struct ClassInfo));
newClass->class_ = StdClassRef_(Class__CImplementation);
newClass->classNum = -1;
newClass->numSlots = totalFields;
newClass->parentContext = parent_context;
newClass->superclass = superclass;
newClass->name = name;

/* Set up "addedFields". */
obj_ addedFields = NewTuple_(numAddedFields);
int whichField = 0;
if (field_names) {
ForStart_(1, field_names, fieldName)
TuplePut_(addedFields, whichField, fieldName);
whichField += 1;
ForEnd_(1)
}
newClass->addedFields = addedFields;

/* Make the prototype. */
newClass->proto = AllocObjFromClassInfo_(newClass);

return (obj_) newClass;
}


obj_ num_slots__Class__CImplementation__Standard(obj_ this_)
{
return BuildInt_(classInfo->numSlots);
}


obj_ parent_context__Class__CImplementation__Standard(obj_ this_)
{
return classInfo->parentContext;
}


obj_ proto__Class__CImplementation__Standard(obj_ this_)
{
return classInfo->proto;
}


obj_ subprotos__Class__CImplementation__Standard(obj_ this_)
{
return classInfo->subprotos;
}


obj_ superclass__Class__CImplementation__Standard(obj_ this_)
{
return classInfo->superclass;
}


obj_ used_contexts__Class__CImplementation__Standard(obj_ this_)
{
return classInfo->usedContexts;
}


obj_ used_contexts_co___Class__CImplementation__Standard(obj_ this_, obj_ new_used_contexts)
{
classInfo->usedContexts = new_used_contexts;
return nil;
}


