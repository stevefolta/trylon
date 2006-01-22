/* Trylon_.h */

#ifndef _Trylon__h_
#define _Trylon__h_

#include "settings_.h"


#if defined(__cplusplus) && !defined(NOT_EXTERN_C)
	#define _StartExternC_	extern "C" {
	#define _FinishExternC_	}
#else
	#define _StartExternC_
	#define _FinishExternC_
#endif

typedef struct Standard__Class__internal class_spec_;
typedef struct object* obj_;

#ifdef CLASSES_BY_NUM_

typedef int classref_;
#define ClassNumFor_(obj) 	(obj->class_)
#define StdClassRef_(className) 	(Standard__##className##__classNum_)
#define ObjClassIs_(obj, className) 	(obj->class_ == className.class_number)

#else 	// !CLASSES_BY_NUM_

typedef class_spec_* classref_;
#define ClassNumFor_(obj) 	(obj->class_->class_number)
#define StdClassRef_(className) 	(&Standard__##className)
#define ObjClassIs_(obj, className)	 (obj->class_ == &className)

#endif 	// !CLASSES_BY_NUM_


struct object {
	classref_	class_;
	obj_     	fields[1];
};


#ifdef __cplusplus
	typedef obj_ (*fn_ptr_)(...);
#else
	typedef obj_ (*fn_ptr_)();
	typedef int bool;
#endif
typedef char* byte_ptr_;

#define NULL	(0L)


#ifdef ROW_DISPLACEMENT_DISPATCH_

typedef int selector_;

struct RDTableEntry_ {
	fn_ptr_  	method;
	selector_	selector;
};

extern struct RDTableEntry_ dispatchTable_[];

#ifndef UNSAFE_DISPATCH_
_StartExternC_
extern fn_ptr_ Dispatch_(selector_ selector, obj_ object);
_FinishExternC_
#endif

#ifdef UNSAFE_DISPATCH_
#define Dispatch_(selector, object) 	\
	(dispatchTable_[selector + 	\
		((struct Standard__Class__internal*) object->class_)->class_number].method)
#endif

#ifndef CONSTANT_SELECTORS
#define UsingMethod_(methodName) 	\
	extern selector_ methodName##__selector_;
#define DefineSelector_(methodName, value) 	\
	selector_ methodName##__selector_ = value;
#endif

#ifdef CONSTANT_SELECTORS
#define UsingMethod_(methodName)
#endif


#define Call_(fnName, object, args...) \
	((*Dispatch_(fnName##__selector_, (obj_) (object))) \
	 ((obj_) object, ##args))

#endif 	// ROW_DISPLACEMENT_DISPATCH_


#ifdef SLOW_DISPATCH_

typedef struct MethodSpec_ {
	obj_    	class_;
	fn_ptr_ 	method;
} MethodSpec_;

typedef struct MethodSpec_* MethodSpecPtr_;

_StartExternC_
extern fn_ptr_ Dispatch_(MethodSpecPtr_ methods, obj_ object);
_FinishExternC_

#define UsingMethod_(methodName)	extern MethodSpec_ methodName##__methods[];

#define Call_(fnName, object, args...) \
	((*Dispatch_(fnName##__methods, (obj_) (object))) \
	 ((obj_) object, ##args))

#endif 	// SLOW_DISPATCH_



#define _StartContinueCatcher_	\
	{		             	\
	do {

#define _EndContinueCatcher_ \
		_broken_ = 0;	\
	} while (0);   	\
	if (_broken_) {    	\
		_broken_ = 0;	\
		break;           	\
		}                	\
	}

#define _Continue_	\
	{	                 	\
		_broken_ = 0;	\
		break;           	\
	}

#define _Break_	\
	{	                	\
		_broken_ = 1;	\
		break;          	\
	}


#include <setjmp.h>

typedef struct ExceptionCatcher_ {
	jmp_buf                  	jumpBuf;
	struct ExceptionCatcher_*	nextCatcher;
} ExceptionCatcher_;

_StartExternC_
extern void PushException_(ExceptionCatcher_* catcher);
extern void Throw_(obj_ object);
extern void PopException_();
_FinishExternC_

#define Try_	\
	{	\
	ExceptionCatcher_ __catcher;	\
	obj_ __caught_object; 	\
	PushException_(&__catcher); 	\
	__caught_object = (obj_) setjmp(__catcher.jumpBuf); 	\
	if (__caught_object == NULL)	{ 	\

#define Catch_(class)	\
		PopException_();	\
		}	\
	else if (Test_(Call_(is_a_co_, __caught_object, &class))) {	\
		PopException_();

#define AlsoCatch_(class)	\
		}	\
	else if (Test_(Call_(is_a_co_, __caught_object, &class))) {	\
		PopException_();

#define EndCatch_	\
		}	\
	else {	\
		PopException_();	\
		Throw_(__caught_object);	\
		}	\
	}


#define ForStart_(collection, localName) 	\
		{ 	\
		obj_ iterator_ = Call_(iterator, collection); 	\
		while (1) { 	\
			_StartContinueCatcher_ 	\
			obj_ is_done_ = Call_(is_done, iterator_); 	\
			if (Test_(is_done_)) 	\
				_Break_ 	\
			{ 	\
				obj_ localName = Call_(current_item, iterator_);

#define ForEnd_ 	\
			} 	\
			_EndContinueCatcher_ 	\
			Call_(go_forward, iterator_); 	\
			} 	\
		}


#define Field_(name)        	this_->fields[name##__fld_]
#define FieldOf_(obj, name) 	obj->fields[name##__fld_]


_StartExternC_
extern void RegisterFinalizer_(obj_ object);
//*** extern int Test_(obj_ object);

extern obj_ false__Standard;
extern obj_ true__Standard;

extern struct object false__Standard__obj;
extern struct object true__Standard__obj;

_FinishExternC_

#define Test_(object)	(object != NULL && object != false__Standard)
#define Not_(object)	(Test_(object) ? false__Standard : true__Standard)


// everybody needs these:
/***
#include "Standard__Object.h"
#include "Standard__Class.h"
***/


_StartExternC_

struct Standard__Class__internal {
	classref_	class_;
	obj_     	name;
	obj_     	superclass;
	int      	instance_size;
	int      	class_number;
};

struct Standard__Int__internal {
	classref_	class_;
	int      	value;
};

struct Standard__Float__internal {
	classref_	class_;
	double   	value;
};

struct Standard__Bool__internal {
	classref_	class_;
	int      	value;
};

struct Standard__BytePtr__internal {
	classref_	class_;
	char*    	value;
};


#ifndef SEMI_PRIMITIVE_STRINGS_
struct Standard__String__internal {
	classref_	class_;
	obj_     	start;
	obj_	stopper;
};
#else 	// SEMI_PRIMITIVE_STRINGS_
struct Standard__String__internal {
	classref_	class_;
	byte_ptr_	start;
	byte_ptr_	stopper;
};
#endif 	// SEMI_PRIMITIVE_STRINGS_


extern class_spec_ Standard__Class;
extern class_spec_ Standard__Int;
extern class_spec_ Standard__Float;
extern class_spec_ Standard__Char;
extern class_spec_ Standard__Bool;
extern class_spec_ Standard__BytePtr;
extern class_spec_ Standard__String;
extern class_spec_ Standard__Symbol;

extern obj_ BuildInt_(int value);
extern obj_ BuildFloat_(double value);
extern obj_ BuildChar_(int value);
extern obj_ BuildBytePtr_(byte_ptr_ value);
extern obj_ BuildString_(const char* cString); 	// Will copy the string.
extern char* MakeCString_(obj_ str);
extern void* Allocate_(int numBytes);

_FinishExternC_


#define DefineClassObj_(cName, name, superclass, numFields, classNum) \
	DefineString_(classname, name) 	\
	struct Standard__Class__internal cName = 	\
		{ StdClassRef_(Class), Str_(classname), superclass, 	\
		  numFields, classNum };

#define DefineInt_(index, value) \
	static struct object i##index##_ = { StdClassRef_(Int), (obj_) (value) };

#define Int_(index)	(&i##index##_)

#define DefineFloat_(index, value) 	\
	static struct Standard__Float__internal f##index##_ = 	\
		{ StdClassRef_(Float), value };

#define Float_(index)	((obj_) &f##index##_)

#define DefineBytePtr_(name, value) \
	static struct object name = { StdClassRef_(BytePtr), (obj_) (value) };


#ifndef SEMI_PRIMITIVE_STRINGS_

#define DefineString_(index, value) 	\
	static const char s##index##__str_[] = value; 	\
	DefineBytePtr_(s##index##__start_, s##index##__str_) 	\
	DefineBytePtr_(s##index##__stopper_, 	\
	               s##index##__str_ + sizeof(s##index##__str_) - 1) 	\
	static struct Standard__String__internal s##index##_ =  	\
		{ StdClassRef_(String), &s##index##__start_, &s##index##__stopper_ };

#define DefineSymbol_(name, value) 	\
	static const char y##name##__str_[] = value; 	\
	DefineBytePtr_(y##name##__start_, y##name##__str_) 	\
	DefineBytePtr_(y##name##__stopper_, 	\
	               y##name##__str_ + sizeof(y##name##__str_) - 1) 	\
	struct Standard__String__internal y##name##__sym_ = 	\
		{ StdClassRef_(Symbol), &y##name##__start_, &y##name##__stopper_ };

#else 	// SEMI_PRIMITIVE_STRINGS_

#define DefineString_(index, value) 	\
	static const char s##index##__str_[] = value; 	\
	static struct Standard__String__internal s##index##_ =  	\
		{ StdClassRef_(String), (byte_ptr_) s##index##__str_, 	\
		  (byte_ptr_) s##index##__str_ + sizeof(s##index##__str_) - 1 };

#define DefineSymbol_(name, value) 	\
	static const char y##name##__str_[] = value; 	\
	struct Standard__String__internal y##name##__sym_ = 	\
		{ StdClassRef_(Symbol), (byte_ptr_) y##name##__str_, 	\
		  (byte_ptr_) y##name##__str_ + sizeof(y##name##__str_) - 1 };

#endif 	// SEMI_PRIMITIVE_STRINGS_

#define Str_(index)	((obj_) &s##index##_)

#define UsingSym_(name) 	\
	extern struct Standard__String__internal y##name##__sym_;
#define Sym_(name) 	((obj_) &y##name##__sym_)

#define DefineChar_(name, value) 	\
	struct object c##name##_ = { StdClassRef_(Char), (obj_) (value) };
#define UsingChar_(name) 	extern struct object c##name##_;
#define Char_(name) 	((obj_) &c##name##_)


// Helpers for primitives

#define IntValue_(obj) 	(((struct Standard__Int__internal*) obj)->value)
#define FloatValue_(obj) 	(((struct Standard__Float__internal*) obj)->value)
#define BytePtrValue_(obj) 	(((struct Standard__BytePtr__internal*) obj)->value)

#define BoolFor_(value)	(value ? true__Standard : false__Standard)

#ifndef SEMI_PRIMITIVE_STRINGS_

#define StringStart_(obj) 	\
	(BytePtrValue_(((struct Standard__String__internal*) obj)->start))
#define StringStopper_(obj) 	\
	(BytePtrValue_(((struct Standard__String__internal*) obj)->stopper))

#else 	// SEMI_PRIMITIVE_STRINGS_

#define StringStart_(obj) 	\
	(((struct Standard__String__internal*) obj)->start)
#define StringStopper_(obj) 	\
	(((struct Standard__String__internal*) obj)->stopper)

#endif 	// SEMI_PRIMITIVE_STRINGS_


// Selectors.

#ifdef CONSTANT_SELECTORS
#include "selectors_.h"
#endif

// Class numbers of standard classes.

#ifdef CLASSES_BY_NUM_
#include "classnums_.h"
#endif


#endif	// Trylon_.h
