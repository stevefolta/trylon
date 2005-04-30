/* Standard__Implementation.c */

#include "Trylon_.h"
#ifdef OSX_FINK
	#include "gc.h"
#else
	#include "gc/gc.h"
#endif


obj_ allocate_object_co___Standard__Implementation(obj_ classObj)
{
	struct Standard__Class__internal* class_ =
		(struct Standard__Class__internal*) classObj;
	int numSlots = class_->instance_size + 1;
	obj_ obj = (obj_) GC_MALLOC(numSlots * sizeof(obj_));
	obj->class_ = classObj;
	return obj;
}


obj_ allocate_object_co_with_extra_slots_co___Standard__Implementation(obj_ classObj, obj_ extraSlotsObj)
{
	struct Standard__Class__internal* class_ =
		(struct Standard__Class__internal*) classObj;
	int numSlots = class_->instance_size + IntValue_(extraSlotsObj) + 1;
	obj_ obj = (obj_) GC_MALLOC(numSlots * sizeof(obj_));
	obj->class_ = classObj;
	return obj;
}


obj_ allocate_bytes_co___Standard__Implementation(obj_ size)
{
	char* value = (char*) GC_MALLOC(IntValue_(size));
	struct Standard__BytePtr__internal* ptr =
		(struct Standard__BytePtr__internal*)
			GC_MALLOC(sizeof(struct Standard__BytePtr__internal));
	ptr->class_ = (obj_) &Standard__BytePtr;
	ptr->value = value;
	return (obj_) ptr;
}


obj_ allocate_bytes_non_pointer_co___Standard__Implementation(obj_ size)
{
	char* value = (char*) GC_MALLOC(IntValue_(size));
	struct Standard__BytePtr__internal* ptr =
		(struct Standard__BytePtr__internal*)
			GC_MALLOC_ATOMIC(sizeof(struct Standard__BytePtr__internal));
	ptr->class_ = (obj_) &Standard__BytePtr;
	ptr->value = value;
	return (obj_) ptr;
}


static int incrementalGCIsOn = 0;

obj_ incremental_gc__Standard__Implementation()
{
	return (incrementalGCIsOn ? true__Standard : false__Standard);
}

obj_ incremental_gc_co___Standard__Implementation(obj_ enable)
{
	if (Test_(enable)) {
		GC_enable_incremental();
		incrementalGCIsOn = 1;
		}
	/* The Boehm collector can't disable incremental GC. */

	return NULL;
}


obj_ gc_a_little__Standard__Implementation()
{
	int result = GC_collect_a_little();
	return (result ? true__Standard : false__Standard);
}



/*
	Copyright 2005 Steve Folta.
	See the License file.
*/
