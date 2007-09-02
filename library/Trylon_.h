/* Trylon_.h */

#include "settings_.h"

/* Objects */

typedef struct object* obj_;
typedef struct ClassInfo* classref_;

struct ClassInfo {
	int        	classNum;
	int        	size;
	obj_       	proto, parentContext, superclass;
	const char*	name;
	obj_       	addedFields; 	/* Only if "debugger" is on. */
};

struct object {
	classref_	class_;
	obj_     	fields[];
};

#define ClassNumFor_(obj) 	(obj->class_->classNum)
#define StdClassRef_(className) 	(&className##__Standard__classInfo_)

typedef obj_ (*fn_ptr_)();
typedef char* byte_ptr_;

#define nil	(0)

typedef int selector_;

struct RDTableEntry_ {
	fn_ptr_  	method;
	selector_	selector;
};

extern struct RDTableEntry_ dispatchTable_[];

extern fn_ptr_ Dispatch_(selector_ selector, obj_ object);

#define UsingMethod_(methodName) 	\
	extern selector_ methodName##__selector_;
#define DefineSelector_(methodName, value) 	\
	selector_ methodName##__selector_ = value;

#define Call_(fnName, object, args...) \
	((*Dispatch_(fnName##__selector_, (obj_) (object))) \
	 ((obj_) object, ##args))

#define Field_(name)        	this_->fields[name##__fld_]
#define FieldOf_(obj, name) 	obj->fields[name##__fld_]

#define SharedField_(name, className)	(name##__##className##__storage_)
#define SetSharedField_(name, className, value) 	\
	(name##__##className##__storage_ = value)
#define DeclareSharedField_(name, className, value) 	\
	obj_ name##__##className##__storage_ = value;
#define UsingSharedField_(name, className) 	\
	extern obj_ name##__##className##__storage_;

#define UsingClass_(className) 	\
	extern struct ClassInfo className##__classInfo_;	 \
	extern struct object className;

#define Proto_(className) 	(&className)

extern obj_ AllocObjFromClassInfo_(struct ClassInfo* classInfo);
#define AllocObj_(className) 	\
	(AllocObjFromClassInfo_(&className##__classInfo_))


/* Standard objects */

struct Standard__Int__internal {
	classref_	class_;
	int      	value;
};

struct Standard__Float__internal {
	classref_	class_;
	double   	value;
};

struct Standard__BytePtr__internal {
	classref_	class_;
	char*    	value;
};

struct Standard__String__internal {
	classref_	class_;
	obj_     	start;
	obj_     	stopper;
};

struct Standard__Symbol__internal {
	classref_	class_;
	obj_     	start;
	obj_     	stopper;
};

struct Standard__DictNode__internal_ {
	classref_                            	class_;
	obj_                                 	key;
	obj_                                 	value;
	struct Standard__DictNode__internal_*	left;
	struct Standard__DictNode__internal_*	right;
	obj_                                 	level;
};
struct Standard__Dict__internal_ {
	classref_                            	class_;
	struct Standard__DictNode__internal_*	root;
	obj_                                 	count;
};


UsingClass_(Object__Standard)
UsingClass_(Int__Standard)
UsingClass_(Float__Standard)
UsingClass_(BytePtr__Standard)
UsingClass_(String__Standard)
UsingClass_(Symbol__Standard)
UsingClass_(Tuple__Standard)
UsingClass_(Dictionary__Standard)
UsingClass_(Node__Dictionary__Standard)



/* Literals */

#define DefineInt_(index, value) \
	static struct object i##index##_ = { StdClassRef_(Int), (obj_) (value) };
#define Int_(index)	(&i##index##_)

#define DefineFloat_(index, value) 	\
	static struct Standard__Float__internal f##index##_ = 	\
		{ StdClassRef_(Float), value };
#define Float_(index)	((obj_) &f##index##_)

#define DefineBytePtr_(name, value) \
	static struct object name = { StdClassRef_(BytePtr), (obj_) (value) };

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
	struct Standard__Symbol__internal y##name##__sym_ = 	\
		{ StdClassRef_(Symbol), &y##name##__start_, &y##name##__stopper_ };
#define DefineSymbolData_(name, value) 	\
	static const char y##name##__str_[] = value; 	\
	DefineBytePtr_(y##name##__start_, y##name##__str_) 	\
	DefineBytePtr_(y##name##__stopper_, 	\
	               y##name##__str_ + sizeof(y##name##__str_) - 1)
#define DefineSymbolObject_(name) 	\
	struct Standard__Symbol__internal y##name##__sym_ = 	\
		{ StdClassRef_(Symbol), &y##name##__start_, &y##name##__stopper_ };

#define Str_(index)	((obj_) &s##index##_)

#define UsingSym_(name) 	\
	extern struct Standard__Symbol__internal y##name##__sym_;
#define Sym_(name) 	((obj_) &y##name##__sym_)

#define DefineDict_(index, root, count) 	\
	static struct object d##index##__count_ = 	\
		{ StdClassRef_(Int), (obj_) (count) }; 	\
	static struct Standard__Dict__internal_ d##index##_ = 	\
		{ StdClassRef_(Dictionary), root, (obj_) &d##index##__count_ };
#define DefineDictNode_(dictIndex, nodeIndex, key, value, left, right, level) 	\
	static struct object d##dictIndex##_##nodeIndex##__level_ = 	\
		{ StdClassRef_(Int), (obj_) (level) }; 	\
	static struct Standard__DictNode__internal_ d##dictIndex##_##nodeIndex##_ = 	\
		{ StdClassRef_(Dictionary__Node), key, value, left, right, 	\
			&d##dictIndex##_##nodeIndex##__level_ };
#define Dict_(index)	((obj_) &d##index##_)
#define DictNode_(dictIndex, nodeIndex)	(&d##dictIndex##_##nodeIndex##_)


/* Expressions */

#define true_	(&Object__Standard)
#define Not_(object)	(object ? nil : true_)
#define Bool_(value)	(value ? true_ : nil)



/* Statements */

#define ContinuePoint_(loopIndex) 	\
	continue_##loopIndex##_:
#define Continue_(loopIndex) 	\
	goto continue_##loopIndex##_;
#define Break_(loopIndex) 	\
	break;

#define ForStart_(loopIndex, collection, localName) 	\
		{ 	\
		obj_ iterator_ = Call_(iterator, collection); 	\
		while (1) { 	\
			obj_ is_done_ = Call_(is_done, iterator_); 	\
			if (is_done_) 	\
				Break_(loopIndex) 	\
			{ 	\
				obj_ localName = Call_(current_item, iterator_);

#define ForEnd_(loopIndex) 	\
			} 	\
			ContinuePoint_(loopIndex) 	\
			Call_(go_forward, iterator_); 	\
			} 	\
		}


#include <setjmp.h>

typedef struct ExceptionCatcher_ {
	jmp_buf                  	jumpBuf;
	struct ExceptionCatcher_*	nextCatcher;
} ExceptionCatcher_;

extern void PushException_(ExceptionCatcher_* catcher);
extern void Throw_(obj_ object);
extern void PopException_();

#define Try_	\
	{	\
	ExceptionCatcher_ __catcher;	\
	obj_ exception; 	\
	PushException_(&__catcher); 	\
	exception = (obj_) setjmp(__catcher.jumpBuf); 	\
	if (exception == nil)	{ 	\

#define TryElse_ 	\
		PopException_(); 	\
		} 	\
	else { 	\
		PopException_();

#define EndTry_ 	\
		} 	\
	}


#define Switch_(value) 	\
	{ 	\
		UsingMethod_(_eq__eq_) 	\
		obj_ value_ = value;

#define SwitchMatches_(value) 	\
		(Call_(_eq__eq_, value_, value))

#define EndSwitch_ 	\
	}


/* Helpers for primitives. */

#define IntValue_(obj) 	(((struct Standard__Int__internal*) obj)->value)
#define FloatValue_(obj) 	(((struct Standard__Float__internal*) obj)->value)
#define BytePtrValue_(obj) 	(((struct Standard__BytePtr__internal*) obj)->value)
#define StringStart_(obj) 	\
	(BytePtrValue_(((struct Standard__String__internal*) obj)->start))
#define StringStopper_(obj) 	\
	(BytePtrValue_(((struct Standard__String__internal*) obj)->stopper))

extern obj_ BuildInt_(int value);
extern obj_ BuildFloat_(double value);
extern obj_ BuildBytePtr_(void* value);
extern obj_ BuildString_(const char* cString); 	// Will copy the string.
extern obj_ BuildStringOfLength_(const char* cString, unsigned int length);
	// Will copy the string.
extern obj_ BuildStringStartStopper_(const char* start, const char* stopper);
	// Will not copy the string.
extern char* CString_(obj_ str);
extern void* Allocate_(int numBytes);
extern void* AllocNonPtr_(int numBytes);

extern obj_ CloneObj_(obj_ object);
extern obj_ CloneObjExtra_(obj_ object, int numExtraFields);



/*
	Copyright 2005 - 2007 Steve Folta.
	See the License file.
*/

