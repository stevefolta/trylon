/* Trylon_.c */

#include "Trylon_.h"
#include <stdio.h>
#include <string.h>
#ifdef OSX_FINK
	#include "gc.h"
#else
	#include "gc/gc.h"
#endif


_StartExternC_

#ifdef BASIC_RUNTIME_TEST
// Fake Class and Object
struct Standard__Class {
	struct Standard__Class*	class_;
};
struct Standard__Object {
	struct Standard__Class*	class_;
};
// Fake some methods
MethodSpec_ message_not_understood__methods[] = {
	{ NULL, NULL }
};
/***
MethodSpec_* message_not_understood__methods =
	message_not_understood__methodsarray;
	// shouldn't need this, but GCC is stupid
***/
struct MethodSpec_ destroy__methods[] = {
	{ NULL, NULL }
};
#endif


static obj_ SendMessageNotUnderstood_(obj_ object, ...)
{
	UsingMethod_(message_not_understood);
	return Call_(message_not_understood, object);
}


#if defined(ROW_DISPLACEMENT_DISPATCH_) && !defined(UNSAFE_DISPATCH_)
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
#endif 	// ROW_DISPLACEMENT_DISPATCH_ && !UNSAFE_DISPATCH_


#ifdef SLOW_DISPATCH_
fn_ptr_ Dispatch_(MethodSpec_* methods, obj_ object)
{
	obj_ theClass = object->class_;
	for (; methods->class_ != NULL; ++methods) {
		if (methods->class_ == theClass)
			return methods->method;
		}

	// Does this "NULL" entry have a method?  If so, it's on Object, so
	// everyone uses it.
	if (methods->method)
		return methods->method;

	// Send message-not-understood:instead.
	// *** Eventually, we want to actually specify *which* message wasn't
	// *** understood, and also pass the arguments.
	return (fn_ptr_) &SendMessageNotUnderstood_;
}
#endif 	// SLOW_DISPATCH_


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


static void FinalizeObject_(GC_PTR obj, GC_PTR clientData)
{
	UsingMethod_(destroy);
	Call_(destroy, (obj_) obj);
}


void RegisterFinalizer_(obj_ object)
{
	GC_finalization_proc oldProc;
	GC_PTR oldData;
	GC_REGISTER_FINALIZER(object, &FinalizeObject_, NULL, &oldProc, &oldData);
}


#ifdef NOT_NOW
int Test_(obj_ object)
{
	/* "nil" and "false" are false; everything else is true. */
	return (object != NULL && object != false__Standard);

/*** Old-style: only "true" is true.
	extern class_spec_ Standard__Bool;
	if (object != NULL && object->class_ == (obj_) &Standard__Bool) {
		if (((struct Standard__Bool__internal*) object)->value)
			return 1;
		}
	return 0;
***/
}
#endif 	// NOT_NOW


obj_ BuildInt_(int value)
{
	obj_ result = (obj_) GC_MALLOC(sizeof(struct object));
	((struct Standard__Int__internal*) result)->class_ = &Standard__Int;
	((struct Standard__Int__internal*) result)->value = value;
	return result;
}


obj_ BuildFloat_(double value)
{
	struct Standard__Float__internal* result =
		(struct Standard__Float__internal*)
			GC_MALLOC(sizeof(struct Standard__Float__internal));
	result->class_ = &Standard__Float;
	result->value = value;
	return (obj_) result;
}


obj_ BuildChar_(int value)
{
	obj_ result = (obj_) GC_MALLOC(sizeof(struct object));
	((struct Standard__Int__internal*) result)->class_ = &Standard__Char;
	((struct Standard__Int__internal*) result)->value = value;
	return result;
}


obj_ BuildBytePtr_(byte_ptr_ value)
{
	obj_ result = (obj_) GC_MALLOC(sizeof(struct object));
	((struct Standard__BytePtr__internal*) result)->class_ =
		&Standard__BytePtr;
	((struct Standard__BytePtr__internal*) result)->value = value;
	return result;
}


obj_ BuildString_(const char* cString)
{
	unsigned int	length;
	char*       	heapString;
	obj_        	start, stopper;
	struct Standard__String__internal* strObj;

	// Copy the string to the heap.
	length = strlen(cString);
	heapString = (char*) GC_MALLOC(length + 1);
	memcpy(heapString, cString, length + 1);

	// Build the string object.
	strObj =
		(struct Standard__String__internal*)
			GC_MALLOC(sizeof(struct Standard__String__internal));
	strObj->class_ = &Standard__String;
#ifndef SEMI_PRIMITIVE_STRINGS_
	strObj->start = BuildBytePtr_((byte_ptr_) heapString);
	strObj->stopper = BuildBytePtr_((byte_ptr_) heapString + length);
#else 	// SEMI_PRIMITIVE_STRINGS_
	strObj->start = (byte_ptr_) heapString;
	strObj->stopper = (byte_ptr_) heapString + length;
#endif 	// SEMI_PRIMITIVE_STRINGS_
	return (obj_) strObj;
}


char* MakeCString_(obj_ str)
{
	struct Standard__String__internal* strObj =
		(struct Standard__String__internal*) str;
	char*       	start;
	unsigned int	length;
	char*       	cString;

	start = StringStart_(strObj);
	length = StringStopper_(strObj) - start;
	cString = GC_MALLOC(length + 1);
	memcpy(cString, start, length);
	cString[length] = 0;
	return cString;
}


void* Allocate_(int numBytes)
{
	return GC_MALLOC(numBytes);
}



int main(int argc, char* argv[])
{
	obj_ args, result;
	int whichArg;
	extern obj_ main_co___Main(obj_ args);
	extern obj_ new__Standard__List();
	UsingMethod_(append_co_)

	// Build the list of args.
	args = new__Standard__List();
	for (whichArg = 0; whichArg < argc; ++whichArg)
		Call_(append_co_, args, BuildString_(argv[whichArg]));

	// Call the main function.
	result = main_co___Main(args);

	// Return the result.
	if (result && result->class_ == &Standard__Int)
		return IntValue_(result);
	else
		return 1;
}



/* Debugging */

char* className_(obj_ object)
{
	struct Standard__Class__internal* classObj;
	struct Standard__String__internal* nameObj;

	if (object == NULL)
		return "NULL";

	classObj = (struct Standard__Class__internal*) object->class_;
	nameObj = (struct Standard__String__internal*) classObj->name;
#ifndef SEMI_PRIMITIVE_STRINGS_
	return BytePtrValue_(nameObj->start);
#else 	// SEMI_PRIMITIVE_STRINGS_
	return nameObj->start;
#endif 	// SEMI_PRIMITIVE_STRINGS_
}


#ifdef DEBUGGER
obj_ showObj_(obj_ object)
{
	obj_ str;
	UsingMethod_(debug_write)

	if (object == NULL)
		return NULL;

	str = Call_(debug_write, object);
	return object;
}
#endif


_FinishExternC_
