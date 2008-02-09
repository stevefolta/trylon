/* Trylon_.c */

#include "Trylon_.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifdef OSX_FINK
	#include "gc.h"
#else
	#include "gc/gc.h"
#endif

static obj_ SendMessageNotUnderstood_(obj_ object, ...)
{
	UsingMethod_(message_not_understood);
	return Call_(message_not_understood, object);
}


fn_ptr_ Dispatch_(selector_ selector, obj_ object)
{
	struct RDTableEntry_* entry =
		&dispatchTable_[selector + ClassNumFor_(object)];

	if (entry->selector == selector)
		return entry->method;

	// Send message-not-understood:instead.
	// *** Eventually, we want to actually specify *which* message wasn't
	// *** understood, and also pass the arguments.
	return (fn_ptr_) &SendMessageNotUnderstood_;
}


obj_ RespondsTo_(obj_ object, selector_ selector)
{
	struct RDTableEntry_* entry =
		&dispatchTable_[selector + ClassNumFor_(object)];

	return Bool_(entry->selector == selector);
}


obj_ AllocObjFromClassInfo_(struct ClassInfo* classInfo)
{
	obj_ object = (obj_) GC_MALLOC(sizeof(classref_) + classInfo->size);
	object->class_ = classInfo;
	return object;
}


static ExceptionCatcher_* currentExceptionCatcher = NULL;

void PushException_(ExceptionCatcher_* catcher)
{
	catcher->nextCatcher = currentExceptionCatcher;
	currentExceptionCatcher = catcher;
}


void Throw_(obj_ object)
{
	if (currentExceptionCatcher == NULL) {
		// Catastrophic failure!
		printf("\n**** Uncaught exception! ****\n\n");
		exit(1);
		}

	longjmp(currentExceptionCatcher->jumpBuf, (int) object);
}


void PopException_()
{
	if (currentExceptionCatcher == NULL) {
		// Catastrophic failure, and it's probably the compiler's fault!
		printf("\n**** Compiler error: generated bad _PopException_()! ***\n\n");
		exit(1);
		}

	currentExceptionCatcher = currentExceptionCatcher->nextCatcher;
}


static void FinalizeObject_(void* obj, void* clientData)
{
	UsingMethod_(destroy);
	Call_(destroy, (obj_) obj);
}


void RegisterFinalizer_(obj_ object)
{
	GC_finalization_proc oldProc;
	void* oldData;
	GC_REGISTER_FINALIZER(object, &FinalizeObject_, NULL, &oldProc, &oldData);
}



obj_ BuildInt_(int value)
{
	struct Standard__Int__internal* result =
		(struct Standard__Int__internal*)
			GC_MALLOC(sizeof(struct Standard__Int__internal));
	result->class_ = StdClassRef_(Int);
	result->value = value;
	return (obj_) result;
}


obj_ BuildFloat_(double value)
{
	struct Standard__Float__internal* result =
		(struct Standard__Float__internal*)
			GC_MALLOC(sizeof(struct Standard__Float__internal));
	result->class_ = StdClassRef_(Float);
	result->value = value;
	return (obj_) result;
}


obj_ BuildBytePtr_(void* value)
{
	struct Standard__BytePtr__internal* result =
		(struct Standard__BytePtr__internal*)
			GC_MALLOC(sizeof(struct Standard__BytePtr__internal));
	result->class_ = StdClassRef_(BytePtr);
	result->value = value;
	return (obj_) result;
}


obj_ BuildString_(const char* cString)
{
	unsigned int	length;
	char*       	heapString;
	obj_        	start, stopper;
	struct Standard__String__internal* strObj;

	// Copy the string to the heap.
	length = strlen(cString);
	heapString = (char*) GC_MALLOC_ATOMIC(length + 1);
	memcpy(heapString, cString, length + 1);

	// Build the string object.
	strObj =
		(struct Standard__String__internal*)
			GC_MALLOC(sizeof(struct Standard__String__internal));
	strObj->class_ = StdClassRef_(String);
	strObj->start = BuildBytePtr_((byte_ptr_) heapString);
	strObj->stopper = BuildBytePtr_((byte_ptr_) heapString + length);
	return (obj_) strObj;
}


obj_ BuildStringOfLength_(const char* cString, unsigned int length)
{
	char*	heapString;
	struct Standard__String__internal* strObj;

	// Copy the string to the heap.
	heapString = (char*) GC_MALLOC(length + 1);
	memcpy(heapString, cString, length + 1);

	// Build the string object.
	strObj =
		(struct Standard__String__internal*)
			GC_MALLOC(sizeof(struct Standard__String__internal));
	strObj->class_ = StdClassRef_(String);
	strObj->start = BuildBytePtr_((byte_ptr_) heapString);
	strObj->stopper = BuildBytePtr_((byte_ptr_) heapString + length);
	return (obj_) strObj;
}


obj_ BuildStringStartStopper_(const char* start, const char* stopper)
{
	struct Standard__String__internal* strObj;

	// Build the string object.
	strObj =
		(struct Standard__String__internal*)
			GC_MALLOC(sizeof(struct Standard__String__internal));
	strObj->class_ = StdClassRef_(String);
	strObj->start = BuildBytePtr_((byte_ptr_) start);
	strObj->stopper = BuildBytePtr_((byte_ptr_) stopper);
	return (obj_) strObj;
}


char* CString_(obj_ str)
{
	struct Standard__String__internal* strObj =
		(struct Standard__String__internal*) str;
	char*       	start;
	unsigned int	length;
	char*       	cString;

	start = StringStart_(strObj);
	length = StringStopper_(strObj) - start;
	cString = GC_MALLOC_ATOMIC(length + 1);
	memcpy(cString, start, length);
	cString[length] = 0;
	return cString;
}


void* Allocate_(int numBytes)
{
	return GC_MALLOC(numBytes);
}


void* AllocNonPtr_(int numBytes)
{
	return GC_MALLOC_ATOMIC(numBytes);
}


obj_ CloneObj_(obj_ object)
{
	return AllocObjFromClassInfo_(object->class_);
}


obj_ CloneObjExtra_(obj_ object, int numExtraFields)
{
	size_t size =
		sizeof(classref_) + object->class_->size + numExtraFields * sizeof(obj_);
	obj_ newObject = (obj_) GC_MALLOC(size);
	newObject->class_ = object->class_;
	return newObject;
}



int main(int argc, char* argv[])
{
	obj_ args, result;
	int whichArg;
	extern obj_ main_co___Main(obj_ this_, obj_ args);
	extern obj_ new__List__Standard(obj_ this_);
	UsingMethod_(append_co_)
	UsingClass_(Main) UsingClass_(List__Standard)

	GC_INIT();

	// Build the list of args.
	args = new__List__Standard(Proto_(List__Standard));
	for (whichArg = 0; whichArg < argc; ++whichArg)
		Call_(append_co_, args, BuildString_(argv[whichArg]));

	// Call the main function.
	result = main_co___Main(Proto_(Main), args);

	// Return the result.
	if (result && result->class_ == StdClassRef_(Int))
		return IntValue_(result);
	else
		return 1;
}



/* Debugging */

const char* className_(obj_ object)
{
	if (object == NULL)
		return "NULL";

	return StringStart_(object->class_->name);
}


obj_ showObj_(obj_ object)
{
	obj_ str;
	UsingMethod_(debug_write)

	if (object == NULL)
		return NULL;

	str = Call_(debug_write, object);
	return object;
}



/*
	Copyright 2005 - 2007 Steve Folta.
	See the License file.
*/

