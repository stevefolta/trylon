/* Trylon_.h */

#ifndef _Trylon__h_
#define _Trylon__h_


#if defined(__cplusplus) && !defined(NOT_EXTERN_C)
	#define _StartExternC_	extern "C" {
	#define _FinishExternC_	}
#else
	#define _StartExternC_
	#define _FinishExternC_
#endif

struct object {
	struct object*	class_;
	struct object*	fields[1];
};

typedef struct object* obj_;

#ifdef __cplusplus
	typedef obj_ (*fn_ptr_)(...);
#else
	typedef obj_ (*fn_ptr_)();
	typedef int bool;
#endif
typedef char* byte_ptr_;

#define NULL	(0L)


typedef struct MethodSpec_ {
	obj_    	class_;
	fn_ptr_ 	method;
} MethodSpec_;

typedef struct MethodSpec_* MethodSpecPtr_;


_StartExternC_
extern fn_ptr_ Dispatch_(MethodSpecPtr_ methods, obj_ object);
_FinishExternC_


#define Call_(fnName, object, args...) \
	((*Dispatch_(fnName##__methods, (obj_) (object))) \
	 ((obj_) object, ##args))



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

#define _Try_	\
	{	\
	ExceptionCatcher_ __catcher;	\
	obj_ __caught_object; 	\
	PushException_(&__catcher); 	\
	__caught_object = (obj_) setjmp(__catcher.jumpBuf); 	\
	if (__caught_object == NULL)	{ 	\

#define _Catch_(class)	\
		PopException_();	\
		}	\
	else if (_Test_(Call_(is_a_co_, __caught_object, &class))) {	\
		PopException_();

#define _AlsoCatch_(class)	\
		}	\
	else if (_Test_(Call_(is_a_co_, __caught_object, &class))) {	\
		PopException_();

#define _EndCatch_	\
		}	\
	else {	\
		PopException_();	\
		Throw_(__caught_object);	\
		}	\
	}

_StartExternC_
extern void RegisterFinalizer_(obj_ object);
extern int _Test_(obj_ object);

extern obj_ false__Standard;
extern obj_ true__Standard;

_FinishExternC_

#define _Not_(object)	(_Test_(object) ? false__Standard : true__Standard)


// everybody needs these:
/***
#include "Standard__Object.h"
#include "Standard__Class.h"
***/


_StartExternC_

struct Standard__Class__internal {
	obj_	class_;
	obj_	name;
	obj_	superclass;
	int 	instance_size;
};

struct Standard__Int__internal {
	obj_	class_;
	int 	value;
};

struct Standard__Bool__internal {
	obj_	class_;
	int 	value;
};

struct Standard__BytePtr__internal {
	obj_ 	class_;
	char*	value;
};

struct Standard__String__internal {
	obj_	class_;
	obj_	start;
	obj_	stopper;
};

typedef struct Standard__Class__internal class_spec_;

extern class_spec_ Standard__Class;
extern class_spec_ Standard__Int;
extern class_spec_ Standard__Char;
extern class_spec_ Standard__Bool;
extern class_spec_ Standard__BytePtr;
extern class_spec_ Standard__String;
extern class_spec_ Standard__Symbol;

extern obj_ BuildInt_(int value);
extern obj_ BuildChar_(int value);
extern obj_ BuildBytePtr_(byte_ptr_ value);
extern obj_ BuildString_(const char* cString); 	// Will copy the string.

_FinishExternC_


#define DefineClassObj_(cName, name, nameLen, superclass, numFields) 	\
	DefineString_(classname, name, nameLen) 	\
	struct Standard__Class__internal cName = 	\
		{ (obj_) &Standard__Class, Str_(classname), superclass, numFields };

#define DefineInt_(index, value) \
	static struct object i##index##_ = { (obj_) &Standard__Int, (obj_) (value) };

#define Int_(index)	(&i##index##_)

#define DefineBytePtr_(name, value) \
	static struct object name = { (obj_) &Standard__BytePtr, (obj_) (value) };

#define DefineString_(index, value, length) 	\
	static const char s##index##__str_[] = value; 	\
	DefineBytePtr_(s##index##__start_, s##index##__str_) 	\
	DefineBytePtr_(s##index##__stopper_, s##index##__str_ + length) 	\
	static struct Standard__String__internal s##index##_ =  	\
		{ (obj_) &Standard__String, &s##index##__start_, &s##index##__stopper_ };

#define DefineSymbol_(name, value, length) 	\
	static const char name##__symstr_[] = value; 	\
	DefineBytePtr_(name##__symstart_, name##__symstr_) 	\
	DefineBytePtr_(name##__symstopper_, name##__symstr_ + length) 	\
	struct Standard__String__internal name##__sym_ = 	\
		{ (obj_) &Standard__Symbol, &name##__symstart_, &name##__symstopper_ };

#define Str_(index)	((obj_) &s##index##_)

#define UsingSym_(name) 	extern struct Standard__String__internal name##__sym_;
#define Sym_(name) 	((obj_) &name##__sym_)


// Helpers for primitives

#define IntValue_(obj) 	(((struct Standard__Int__internal*) obj)->value)
#define BytePtrValue_(obj) 	(((struct Standard__BytePtr__internal*) obj)->value)



#endif	// Trylon_.h
