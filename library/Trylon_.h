/* Trylon_.h */

#include "settings_.h"

/* Objects */

typedef struct object* obj_;
typedef struct ClassInfo* classref_;

struct ClassInfo {
#ifdef CLASS_OBJECTS_
	classref_	class_;
#endif
	int 	classNum;
	int 	numSlots;
	obj_	proto, parentContext, superclass;
	obj_	usedContexts;
	obj_	name;
	obj_	addedFields; 	/* Only if "debugger" is on. */
	obj_	subprotos;
#ifdef SUPPORT_NEW_METHODS_
	obj_	newMethods;
#endif
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
#ifdef SYMBOL_DISPATCH_
	typedef obj_ dispatch_selector_;
#else
	typedef selector_ dispatch_selector_;
#endif

struct RDTableEntry_ {
	fn_ptr_  	method;
	selector_	selector;
};

extern struct RDTableEntry_ dispatchTable_[];

extern fn_ptr_ Dispatch_(dispatch_selector_ symbol, obj_ object);
extern obj_ RespondsTo_(obj_ object, dispatch_selector_ symbol);
#ifdef SUPPORT_NEW_METHODS_
	extern fn_ptr_* MethodLocation_(obj_ object, dispatch_selector_ symbol);
#endif

#ifdef SUPPORT_PERFORM_
	#define UsingMethod_(methodName)	UsingSym_(methodName)
	#define Selector_(methodName)   	(y##methodName##__sym_.selector)
#else
	#define UsingMethod_(methodName) 	\
		extern selector_ methodName##__selector_;
	#define DefineSelector_(methodName, value) 	\
		selector_ methodName##__selector_ = value;
	#define Selector_(fnName)	fnName##__selector_
#endif

#ifdef SYMBOL_DISPATCH_
	#define Call_(fnName, object, args...) \
		((*Dispatch_(Sym_(fnName), (obj_) (object))) \
	 	((obj_) object, ##args))
#else
	#define Call_(fnName, object, args...) \
		((*Dispatch_(Selector_(fnName), (obj_) (object))) \
	 	((obj_) object, ##args))
#endif

#define Field_(name)        	this_->fields[name##__fld_]
#define FieldOf_(obj, name) 	obj->fields[name##__fld_]

#define SharedField_(name, className)	(name##__##className##__storage_)
#define SetSharedField_(name, className, value) 	\
	(name##__##className##__storage_ = value)
#define DeclareSharedField_(name, className, value) 	\
	obj_ name##__##className##__storage_ = value;
#define UsingSharedField_(name, className) 	\
	extern obj_ name##__##className##__storage_;

#define DefineFieldAccessors_(index) 	\
	obj_ FieldGetter##index##_(obj_ this_) 	\
	{ 	\
		return this_->fields[index]; 	\
	} 	\
	\
	obj_ FieldSetter##index##_(obj_ this_, obj_ value) 	\
	{ 	\
		this_->fields[index] = value; 	\
		return value; 	\
	}
#define DeclareFieldAccessors_(index) 	\
	extern obj_ FieldGetter##index##_(obj_ this_); 	\
	extern obj_ FieldSetter##index##_(obj_ this_, obj_ value);

#define UsingClass_(className) 	\
	extern struct ClassInfo className##__classInfo_;	 \
	extern struct object className;

#define Proto_(className) 	(&className)

extern obj_ AllocObjFromClassInfo_(struct ClassInfo* classInfo);
#define AllocObj_(className) 	\
	(AllocObjFromClassInfo_(&className##__classInfo_))

extern void RegisterFinalizer_(obj_ object);


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
#ifdef SUPPORT_PERFORM_
	int      	selector;
#endif
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
UsingClass_(True__Standard)
#ifdef NIL_OBJECT_
UsingClass_(nil__Standard)
#endif
#ifdef TAGGED_INTS_
UsingClass_(SmallInt__CImplementation__Standard);
#endif
#ifdef CLASS_OBJECTS_
UsingClass_(Class__CImplementation__Standard)
#endif



/* Literals */

#ifdef SHARED_INTS_
	#define UsingInt_(value) 	\
		extern struct object i##value##_;
	#define DefineInt_(name, value) \
		struct object i##name##_ = { StdClassRef_(Int), (obj_) (value) };
#else
	#define DefineInt_(index, value) \
		static struct object i##index##_ = { StdClassRef_(Int), (obj_) (value) };
#endif
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

#define DefineSymbolData_(name, value) 	\
	static const char y##name##__str_[] = value; 	\
	DefineBytePtr_(y##name##__start_, y##name##__str_) 	\
	DefineBytePtr_(y##name##__stopper_, 	\
	               y##name##__str_ + sizeof(y##name##__str_) - 1)
#ifdef SUPPORT_PERFORM_
	#define DefineSymbolObject_(name, index) 	\
		struct Standard__Symbol__internal y##name##__sym_ = 	\
			{ StdClassRef_(Symbol), &y##name##__start_, &y##name##__stopper_, index };
#else
	#define DefineSymbolObject_(name, index) 	\
		struct Standard__Symbol__internal y##name##__sym_ = 	\
			{ StdClassRef_(Symbol), &y##name##__start_, &y##name##__stopper_ };
#endif

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
		{ StdClassRef_(Node__Dictionary), key, value, left, right, 	\
			&d##dictIndex##_##nodeIndex##__level_ };
#define Dict_(index)	((obj_) &d##index##_)
#define DictNode_(dictIndex, nodeIndex)	(&d##dictIndex##_##nodeIndex##_)


/* Expressions */

#define true_	(&True__Standard)
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
extern obj_ currentException_;

#define Try_	\
	{	\
	ExceptionCatcher_ __catcher;	\
	PushException_(&__catcher); 	\
	if (setjmp(__catcher.jumpBuf) == 0)	{ 	\

#define TryElse_ 	\
		PopException_(); 	\
		} 	\
	else { 	\
		obj_ exception = currentException_; 	\
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

#ifdef TAGGED_INTS_
	extern int IntValue_(obj_ obj);
	#define SmallInt_(value)	((obj_) ((value << 1) | 0x01))
	#define IsTaggedInt_(obj)	(((ptrdiff_t) obj) & 0x01 != 0)
#else
	#define IntValue_(obj) 	(((struct Standard__Int__internal*) obj)->value)
#endif
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
extern obj_ NewTuple_(int numItems);
extern obj_ TupleAt_(obj_ tuple, int index);
extern void TuplePut_(obj_ tuple, int index, obj_ value);

extern obj_ CloneObj_(obj_ object);
extern obj_ CloneObjExtra_(obj_ object, int numExtraFields);

/* EnumDicts must be stored in alphabetical order. */
typedef struct EnumDictEntry_ {
	obj_	symbol;
	int 	value;
} EnumDictEntry_;
extern int SymToEnum_(
	obj_ symbol, const EnumDictEntry_* dict, int dictSize, int notFoundValue);
extern obj_ EnumToSym_(int value, const EnumDictEntry_* dict, int dictSize);



/*
	Copyright 2005 - 2007 Steve Folta.
	See the License file.
*/

