/* Standard__Implementation.c */

#include "Vlange_.h"
#ifdef OSX_FINK
	#include "gc.h"
#else
	#include "gc/gc.h"
#endif


obj_ allocate_object_sp_class__Standard__Implementation(obj_ classObj)
{
	struct Standard__Class__internal* class_ =
		(struct Standard__Class__internal*) classObj;
	int numSlots = class_->instance_size + 1;
	obj_ obj = (obj_) GC_MALLOC(numSlots * sizeof(obj_));
	obj->class_ = classObj;
	return obj;
}


obj_ allocate_object_sp_class_sp_with_extra_slots__Standard__Implementation(obj_ classObj, obj_ extraSlotsObj)
{
	struct Standard__Class__internal* class_ =
		(struct Standard__Class__internal*) classObj;
	int numSlots = class_->instance_size + IntValue_(extraSlotsObj) + 1;
	obj_ obj = (obj_) GC_MALLOC(numSlots * sizeof(obj_));
	obj->class_ = classObj;
	return obj;
}


obj_ allocate_sp_bytes__Standard__Implementation(obj_ size)
{
	char* value = (char*) GC_MALLOC(IntValue_(size));
	struct Standard__BytePtr__internal* ptr =
		(struct Standard__BytePtr__internal*)
			GC_MALLOC(sizeof(struct Standard__BytePtr__internal));
	ptr->class_ = (obj_) &Standard__BytePtr;
	ptr->value = value;
	return (obj_) ptr;
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
