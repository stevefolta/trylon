/* Trylon_.c */

#include "Trylon_.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifdef SYMBOL_DISPATCH_
	#include <stdarg.h>
#endif
#ifdef OSX_FINK
	#include "gc.h"
#else
	#include "gc/gc.h"
#endif


#ifdef SYMBOL_DISPATCH_
// Not thread-safe!  We'll need to move this to thread-local storage if we
// support threads.
static obj_ unhandledMessage = nil;
#endif

static obj_ SendMessageNotUnderstood_(obj_ object, ...);


fn_ptr_ Dispatch_(dispatch_selector_ selectorIn, obj_ object)
{
#ifdef NIL_OBJECT_
	if (object == nil)
		object = &nil__Standard;
#endif
#if defined(NIL_OBJECT_) && defined(TAGGED_INTS_)
	else
#endif
#ifdef TAGGED_INTS_
	if (IsTaggedInt_(object))
		object = &SmallInt__CImplementation__Standard;
#endif

#ifdef SYMBOL_DISPATCH_
	selector_ selector =
		((struct Standard__Symbol__internal*) selectorIn)->selector;
#else
	int selector = selectorIn;
#endif

	// First, try to get it from the dispatch table.
	struct RDTableEntry_* entry =
		&dispatchTable_[selector + ClassNumFor_(object)];
	if (entry->selector == selector)
		return entry->method;

#if defined(SUPPORT_NEW_METHODS_) && defined(SYMBOL_DISPATCH_)
	// Next, try the "newMethods" dictionaries for this and all superclasses, and
	// the dispatch tables of the superclasses too.
	struct ClassInfo* classInfo = object->class_;
	for (;;) {
		if (classInfo->newMethods) {
			UsingMethod_(at_co_)
			obj_ method_ptr = Call_(at_co_, classInfo->newMethods, selectorIn);
			if (method_ptr)
				return (fn_ptr_) BytePtrValue_(method_ptr);
			}
		if (classInfo->superclass == nil)
			break;
		classInfo = classInfo->superclass->class_;
		entry = &dispatchTable_[selector + classInfo->classNum];
		if (entry->selector == selector)
			return entry->method;
		}
#endif

	// Message not understood.
	// Send 'message-not-understood:arguments:' instead.
#ifdef SYMBOL_DISPATCH_
	unhandledMessage = selectorIn;
#endif
	return (fn_ptr_) &SendMessageNotUnderstood_;
}


obj_ RespondsTo_(obj_ object, dispatch_selector_ selectorIn)
{
#ifdef NIL_OBJECT_
	if (object == nil)
		object = &nil__Standard;
#endif
#if defined(NIL_OBJECT_) && defined(TAGGED_INTS_)
	else
#endif
#ifdef TAGGED_INTS_
	if (IsTaggedInt_(object))
		object = &SmallInt__CImplementation__Standard;
#endif

#ifdef SYMBOL_DISPATCH_
	selector_ selector =
		((struct Standard__Symbol__internal*) selectorIn)->selector;
#else
	selector_ selector = selectorIn;
#endif

	// First, try the dispatch table.
	struct RDTableEntry_* entry =
		&dispatchTable_[selector + ClassNumFor_(object)];
	if (entry->selector == selector)
		return true_;

#if defined(SUPPORT_NEW_METHODS_) && defined(SYMBOL_DISPATCH_)
	// Next, try the "newMethods" dictionaries for this and all superclasses, and
	// the dispatch tables of the superclasses too.
	struct ClassInfo* classInfo = object->class_;
	for (;;) {
		if (classInfo->newMethods) {
			UsingMethod_(at_co_)
			obj_ method_ptr = Call_(at_co_, classInfo->newMethods, selectorIn);
			if (method_ptr)
				return true_;
			}
		if (classInfo->superclass == nil)
			break;
		classInfo = classInfo->superclass->class_;
		entry = &dispatchTable_[selector + classInfo->classNum];
		if (entry->selector == selector)
			return true_;
		}
#endif

	return nil;
}


#ifdef SUPPORT_NEW_METHODS_
fn_ptr_* MethodLocation_(obj_ object, dispatch_selector_ selectorIn)
{
#ifdef NIL_OBJECT_
	if (object == nil)
		object = &nil__Standard;
#endif
#if defined(NIL_OBJECT_) && defined(TAGGED_INTS_)
	else
#endif
#ifdef TAGGED_INTS_
	if (IsTaggedInt_(object))
		object = &SmallInt__CImplementation__Standard;
#endif

#ifdef SYMBOL_DISPATCH_
	selector_ selector =
		((struct Standard__Symbol__internal*) selectorIn)->selector;
#else
	selector_ selector = selectorIn;
#endif

	struct RDTableEntry_* entry =
		&dispatchTable_[selector + ClassNumFor_(object)];

	if (entry->selector == selector)
		return &entry->method;

	return nil;
}
#endif


static obj_ SendMessageNotUnderstood_(obj_ object, ...)
{
#ifdef SYMBOL_DISPATCH_

	UsingMethod_(characters) UsingMethod_(iterator)
	UsingMethod_(is_done) UsingMethod_(current_item) UsingMethod_(go_forward)
	UsingMethod_(message_not_understood_co_arguments_co_);
	int num_args = 0, which_arg;
	char c;
	va_list arg_list;
	obj_ args_tuple;

	// How many arguments are there?
	// We can find out by counting the number of colons in the selector.
	obj_ characters = Call_(characters, unhandledMessage);
	ForStart_(1, characters, char_obj)
		c = IntValue_(char_obj);
		if (c == ':')
			num_args += 1;
		ForEnd_(1)
	
	// Gather the arguments into a tuple.
	args_tuple = NewTuple_(num_args);
	va_start(arg_list, object);
	for (which_arg = 0; which_arg < num_args; ++which_arg) {
		obj_ arg = va_arg(arg_list, obj_);
		TuplePut_(args_tuple, which_arg, arg);
		}
	va_end(arg_list);

	// Call 'message-not-understood:arguments:'.
	return
		Call_(
			message_not_understood_co_arguments_co_,
			object, unhandledMessage, args_tuple);

#else 	// !SYMBOL_DISPATCH_

	// If 'symbol-dispatch' isn't on, we don't have a good way of knowing what
	// message was sent.
	UsingMethod_(message_not_understood);
	return Call_(message_not_understood, object);

#endif
}


obj_ AllocObjFromClassInfo_(struct ClassInfo* classInfo)
{
	obj_ object =
		(obj_) GC_MALLOC(
			sizeof(classref_) + classInfo->numSlots * sizeof(obj_));
	object->class_ = classInfo;
	return object;
}


static ExceptionCatcher_* currentExceptionCatcher = NULL;
obj_ currentException_ = NULL;

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

	currentException_ = object;
	longjmp(currentExceptionCatcher->jumpBuf, 1);
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



#ifdef TAGGED_INTS_
int IntValue_(obj_ obj)
{
	if (((ptrdiff_t) obj & 0x01) != 0)
		return (ptrdiff_t) obj >> 1;
	return (((struct Standard__Int__internal*) obj)->value);
}
#endif


obj_ BuildInt_(int value)
{
#ifdef TAGGED_INTS_
	if (value <= PTRDIFF_MAX >> 1 && value >= PTRDIFF_MIN >> 1)
		return SmallInt_(value);
#endif

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


obj_ NewTuple_(int numItems)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	return new_co___Tuple__Standard(Proto_(Tuple__Standard), BuildInt_(numItems));
}


obj_ TupleAt_(obj_ tuple, int index)
{
	return tuple->fields[index + 1];
}


void TuplePut_(obj_ tuple, int index, obj_ value)
{
	tuple->fields[index + 1] = value;
}


obj_ CloneObj_(obj_ object)
{
	return AllocObjFromClassInfo_(object->class_);
}


obj_ CloneObjExtra_(obj_ object, int numExtraFields)
{
	size_t size =
		sizeof(classref_) +
		(object->class_->numSlots + numExtraFields) * sizeof(obj_);
	obj_ newObject = (obj_) GC_MALLOC(size);
	newObject->class_ = object->class_;
	return newObject;
}


int SymToEnum_(
	obj_ symbol, const EnumDictEntry_* dict, int dictSize, int notFoundValue)
{
	/* The dictionary is sorted by symbol name, and the symbol objects are sorted
	   in memory, so we can use a binary search. */
	unsigned int low = 0;
	unsigned int high = dictSize - 1;
	while (low <= high) {
		unsigned int mid = (low + high) / 2;
		const EnumDictEntry_* entry = &dict[mid];
		if (entry->symbol > symbol)
			high = mid - 1;
		else if (entry->symbol < symbol)
			low = mid + 1;
		else
			return entry->value;
		}

	/* Not found. */
	return notFoundValue;
}


int BitFlagsFromSyms_(obj_ symbols, const EnumDictEntry_* dict, int dictSize)
{
	int flags = 0;
	if (symbols) {
		ForStart_(1, symbols, symbol)
			flags |= SymToEnum_(symbol, dict, dictSize, 0);
			ForEnd_(1)
		}
	return flags;
}


obj_ EnumToSym_(int value, const EnumDictEntry_* dict, int dictSize)
{
	/* Linear search. */
	const EnumDictEntry_* entry = dict;
	const EnumDictEntry_* stopper = &dict[dictSize];
	for (; entry < stopper; ++entry) {
		if (entry->value == value)
			return entry->symbol;
		}
	return nil;
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
	if (result == nil)
		return 0;
#ifdef TAGGED_INTS_
	else if (IsTaggedInt_(result))
		return IntValue_(result);
#endif
	else if (result->class_ == StdClassRef_(Int))
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

