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
	extern MethodSpec_ message_not_understood__methods[];
	return Call_(message_not_understood, object);
}


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
	extern MethodSpec_ destroy__methods[];
	Call_(destroy, (obj_) obj);
}


void RegisterFinalizer_(obj_ object)
{
	GC_finalization_proc oldProc;
	GC_PTR oldData;
	GC_REGISTER_FINALIZER(object, &FinalizeObject_, NULL, &oldProc, &oldData);
}


int _Test_(obj_ object)
{
	extern class_spec_ Standard__Bool;
	if (object != NULL && object->class_ == (obj_) &Standard__Bool) {
		if (((struct Standard__Bool__internal*) object)->value)
			return 1;
		}
	return 0;
}


obj_ BuildInt_(int value)
{
	obj_ result = (obj_) GC_MALLOC(sizeof(struct object));
	((struct Standard__Int__internal*) result)->class_ = (obj_) &Standard__Int;
	((struct Standard__Int__internal*) result)->value = value;
	return result;
}


obj_ BuildFloat_(double value)
{
	struct Standard__Float__internal* result =
		(struct Standard__Float__internal*)
			GC_MALLOC(sizeof(struct Standard__Float__internal));
	result->class_ = (obj_) &Standard__Float;
	result->value = value;
	return (obj_) result;
}


obj_ BuildChar_(int value)
{
	obj_ result = (obj_) GC_MALLOC(sizeof(struct object));
	((struct Standard__Int__internal*) result)->class_ = (obj_) &Standard__Char;
	((struct Standard__Int__internal*) result)->value = value;
	return result;
}


obj_ BuildBytePtr_(byte_ptr_ value)
{
	obj_ result = (obj_) GC_MALLOC(sizeof(struct object));
	((struct Standard__BytePtr__internal*) result)->class_ =
		(obj_) &Standard__BytePtr;
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
	start = BuildBytePtr_((byte_ptr_) heapString);
	stopper = BuildBytePtr_((byte_ptr_) heapString + length);
	strObj =
		(struct Standard__String__internal*)
			GC_MALLOC(sizeof(struct Standard__String__internal));
	strObj->class_ = (obj_) &Standard__String;
	strObj->start = start;
	strObj->stopper = stopper;
	return (obj_) strObj;
}


char* MakeCString_(obj_ str)
{
	struct Standard__String__internal* strObj =
		(struct Standard__String__internal*) str;
	char*       	start;
	unsigned int	length;
	char*       	cString;

	start = BytePtrValue_(strObj->start);
	length = BytePtrValue_(strObj->stopper) - start;
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
	// Build the list of args.
	/***/

	// Call the main function.
	extern obj_ main_co___Main(obj_ args);
	obj_ result = main_co___Main(NULL); 	// ***

	// Return the result.
	if (result && result->class_ == (obj_) &Standard__Int)
		return IntValue_(result);
	else
		return 1;
}





_FinishExternC_
