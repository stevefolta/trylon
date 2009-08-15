#include "Trylon_.h"

UsingSym_(Object)UsingClass_(Standard)
UsingClass_(Object__Standard)
struct ClassInfo Object__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 215, 0, Proto_(Object__Standard), Proto_(Standard), nil, nil, Sym_(Object), nil, nil };
struct object Object__Standard = 
	{ &Object__Standard__classInfo_, {} };



#include <stdio.h>
#include <stdlib.h>
obj_ _nt__eq___Object__Standard(obj_ this_, obj_ other)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_)

		{
		t0_ = Call_(_eq__eq_, this_, other);
		t1_ = Not_(t0_);
		return t1_;
		}
	return nil;
}


obj_ _dt_added_fields__Object__Standard(obj_ this_)
{
return this_->class_->addedFields;
}


obj_ _dt_class__Object__Standard(obj_ this_)
{
return (obj_) this_->class_;
}


obj_ _dt_object_size__Object__Standard(obj_ this_)
{
return BuildInt_(sizeof(classref_) + this_->class_->numSlots * sizeof(obj_));
}


obj_ _dt_parent_context__Object__Standard(obj_ this_)
{
return this_->class_->parentContext;
}


obj_ _dt_proto__Object__Standard(obj_ this_)
{
return this_->class_->proto;
}


obj_ _dt_proto_name__Object__Standard(obj_ this_)
{
return this_->class_->name;
}


obj_ _dt_subprotos__Object__Standard(obj_ this_)
{
return this_->class_->subprotos;
}


obj_ _dt_superclass__Object__Standard(obj_ this_)
{
return this_->class_->superclass;
}


obj_ _dt_used_contexts__Object__Standard(obj_ this_)
{
return this_->class_->usedContexts;
}


obj_ _eq__eq___Object__Standard(obj_ this_, obj_ other)
{
	obj_ t0_;
	UsingMethod_(same_as_co_)

		{
		t0_ = Call_(same_as_co_, this_, other);
		return t0_;
		}
	return nil;
}


obj_ debug_string__Object__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(string)

		{
		t0_ = Call_(string, this_);
		return t0_;
		}
	return nil;
}


obj_ debug_write__Object__Standard(obj_ this_)
{
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	extern obj_ print_line_co___Standard(obj_ this_, obj_ line);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	UsingInt_(4)
	UsingInt_(0)
	UsingInt_(4)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, "  nil")
	DefineString_(1, "  (")
	DefineString_(2, ") ")
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_dt_object_size) UsingMethod_(_dt_proto_name) UsingMethod_(_dv_) UsingMethod_(_lt_) UsingMethod_(debug_string) UsingMethod_(object_at_co_) UsingMethod_(object_ptr) UsingMethod_(string)
	UsingClass_(Standard)

		{
		obj_ field_names, max_field_name_length, num_fields, ptr, which_field;
		t0_ = Call_(_dt_proto_name, this_);
		t1_ = print_line_co___Standard(Proto_(Standard), t0_);
		t0_ = Call_(_dt_object_size, this_);
		t1_ = Call_(_dv_, t0_, SmallInt_(4));
		num_fields = t1_;
		t0_ = Call_(object_ptr, this_);
		ptr = t0_;
		field_names = nil;
		max_field_name_length = SmallInt_(0);
			{
			/*  Skip the classref. */
			t0_ = Call_(_pl_, ptr, SmallInt_(4));
			ptr = t0_;
			t0_ = Call_(_, num_fields, SmallInt_(1));
			num_fields = t0_;
			/*  Gather the field names. */
			}
		which_field = SmallInt_(0);
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_lt_, which_field, num_fields);
			if (!(t0_))
				Break_(0)
			{
			obj_ field;
			/*  Field name. */
				{
				}
			/*  Value. */
			t0_ = Call_(object_at_co_, ptr, which_field);
			field = t0_;
			t0_ = Not_(field);
			if (t0_)
				{
				t0_ = print_line_co___Standard(Proto_(Standard), Str_(0));
				}
			else
				{
				t0_ = Call_(object_ptr, field);
				t1_ = Call_(string, t0_);
				t2_ = Call_(_pl_, Str_(1), t1_);
				t3_ = Call_(_pl_, t2_, Str_(2));
				t4_ = Call_(debug_string, field);
				t5_ = Call_(_pl_, t3_, t4_);
				t6_ = print_line_co___Standard(Proto_(Standard), t5_);
				}
			t0_ = Call_(_pl_, which_field, SmallInt_(1));
			which_field = t0_;
			}
			}
		}
	return nil;
}


obj_ is_a_co___Object__Standard(obj_ this_, obj_ proto)
{
	obj_ t0_;
	UsingMethod_(_dt_proto) UsingMethod_(_dt_superclass) UsingMethod_(same_as_co_)

		{
		obj_ cur_proto;
		t0_ = Call_(_dt_proto, this_);
		cur_proto = t0_;
		while (1) {
			ContinuePoint_(0)
			if (!(cur_proto))
				Break_(0)
			{
			/*  Test carefully!  Use same-as: rt ==, and order matters. */
			t0_ = Call_(same_as_co_, proto, cur_proto);
			if (t0_)
				{
				return true_;
				}
			t0_ = Call_(_dt_superclass, cur_proto);
			cur_proto = t0_;
			}
			}
		return nil;
		}
	return nil;
}


obj_ iterator__Object__Standard(obj_ this_)
{
	extern obj_ new_co___SingleObjectIterator__Standard(obj_ this_, obj_ object);
	obj_ t0_;
	UsingClass_(SingleObjectIterator__Standard)

		{
		/*  Default: use a SingleObjectIterator.  Collections will  */
		/*  override this. */
		t0_ = new_co___SingleObjectIterator__Standard(Proto_(SingleObjectIterator__Standard), this_);
		return t0_;
		}
	return nil;
}


obj_ message_not_understood__Object__Standard(obj_ this_)
{
fprintf(stderr, "Message not understood.\n");
exit(1);
}


obj_ message_not_understood_co_arguments_co___Object__Standard(obj_ this_, obj_ symbol, obj_ args)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	obj_ t6_;
	DefineString_(0, "Message not understood: '")
	DefineString_(1, "' by ")
	DefineString_(2, ".")
	UsingMethod_(_pl_) UsingMethod_(string)
	UsingClass_(Standard)

		{
		t0_ = Call_(string, symbol);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = Call_(string, this_);
		t4_ = Call_(_pl_, t2_, t3_);
		t5_ = Call_(_pl_, t4_, Str_(2));
		t6_ = error_co___Standard(Proto_(Standard), t5_);
		}
	return nil;
}


obj_ object_ptr__Object__Standard(obj_ this_)
{
return BuildBytePtr_((byte_ptr_) this_);
}


obj_ perform_co___Object__Standard(obj_ this_, obj_ selector)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_);
}


obj_ perform_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1);
}


obj_ perform_co_with_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1, obj_ arg_2)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1, arg_2);
}


obj_ perform_co_with_co_with_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1, obj_ arg_2, obj_ arg_3)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1, arg_2, arg_3);
}


obj_ perform_co_with_co_with_co_with_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1, obj_ arg_2, obj_ arg_3, obj_ arg_4)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1, arg_2, arg_3, arg_4);
}


obj_ perform_co_with_co_with_co_with_co_with_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1, obj_ arg_2, obj_ arg_3, obj_ arg_4, obj_ arg_5)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1, arg_2, arg_3, arg_4, arg_5);
}


obj_ perform_co_with_co_with_co_with_co_with_co_with_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1, obj_ arg_2, obj_ arg_3, obj_ arg_4, obj_ arg_5, obj_ arg_6)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6);
}


obj_ perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1, obj_ arg_2, obj_ arg_3, obj_ arg_4, obj_ arg_5, obj_ arg_6, obj_ arg_7)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7);
}


obj_ perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1, obj_ arg_2, obj_ arg_3, obj_ arg_4, obj_ arg_5, obj_ arg_6, obj_ arg_7, obj_ arg_8)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8);
}


obj_ perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1, obj_ arg_2, obj_ arg_3, obj_ arg_4, obj_ arg_5, obj_ arg_6, obj_ arg_7, obj_ arg_8, obj_ arg_9)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6,
arg_7, arg_8, arg_9);
}


obj_ perform_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co_with_co___Object__Standard(obj_ this_, obj_ selector, obj_ arg_1, obj_ arg_2, obj_ arg_3, obj_ arg_4, obj_ arg_5, obj_ arg_6, obj_ arg_7, obj_ arg_8, obj_ arg_9, obj_ arg_10)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
return
#ifdef SYMBOL_DISPATCH_
(*Dispatch_(selector, this_))
#else
(*Dispatch_(symbol->selector, this_))
#endif
(this_, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6,
arg_7, arg_8, arg_9, arg_10);
}


obj_ print_string__Object__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(string)

		{
		t0_ = Call_(string, this_);
		return t0_;
		}
	return nil;
}


obj_ raw_new__Object__Standard(obj_ this_)
{
return CloneObj_(this_);
}


obj_ responds_to_co___Object__Standard(obj_ this_, obj_ selector)
{
struct Standard__Symbol__internal* symbol =
(struct Standard__Symbol__internal*) selector;
#ifdef SYMBOL_DISPATCH_
return RespondsTo_(this_, selector);
#else
return RespondsTo_(this_, symbol->selector);
#endif
}


obj_ same_as_co___Object__Standard(obj_ this_, obj_ other)
{
return Bool_(this_ == other);
}


obj_ string__Object__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(_dt_proto_name)

		{
		t0_ = Call_(_dt_proto_name, this_);
		return t0_;
		}
	return nil;
}


