/* BasicRuntimeTest.c */

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


#define GetField_(object, fieldName) 	(object->fields[fieldName##__index])
#define SetField_(object, fieldName, value)	\
	(object->fields[fieldName##__index] = (value))

typedef struct MethodSpec_ {
	struct Standard__Class*	class_;
	fn_ptr_                	method;
} MethodSpec_;


_StartExternC_
extern fn_ptr_ Dispatch_(MethodSpec_* methods, obj_ object);
_FinishExternC_


#define Call_(fnName, object, args...) \
	((*Dispatch_(fnName##__methods, object)) (object, ##args))


#define DefineBytePtr_(name, value) \
	static struct object name = { &Standard__BytePtr, (obj_) value };


struct String_internal_ {
	obj_	class_;
	obj_	start;
	obj_	stopper;
};


#define DefineString_(index, value, length) 	\
	static const char s##index##__str_[] = value; 	\
	DefineBytePtr_(s##index##__start_, s##index##__str_) 	\
	DefineBytePtr_(s##index##__stopper_, s##index##__str_ + length) 	\
	static struct String_internal_ s##index_ =  	\
		{ &Standard__String, &s##index##__start_, &s##index##__stopper_ };

#define Str_(index)	((obj_) &s##index_)

/***
#define DefineString_(name, value, length) 	\
	static const char name##__str[] = value; 	\
	DefineBytePtr_(name##__start, name##__str) 	\
	DefineBytePtr_(name##__stopper, name##__str + length) 	\
	static struct String_internal_ name =  	\
		{ &Standard__String, &name##__start, &name##__stopper };

#define DefineSymbol_(name, value, length) 	\
	static const char* name##_str = value; 	\
	DefineBytePtr_(name##__start, name##__str) 	\
	DefineBytePtr(name##__stopper, name##__str + length) 	\
	struct object String_internal_ =  	\
		{ &Standard__Symbol, &name##__start, &name##__stopper };
***/


extern struct object Standard__String;
extern struct object Standard__BytePtr;


int main(int argc, char* argv[])
{
	DefineBytePtr_(someBytePtr, 0xDEADBEEF)
	DefineString_(0, "Test string.", 12)
	Str_(0);

	return 0;
}


