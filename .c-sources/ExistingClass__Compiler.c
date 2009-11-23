#include "Trylon_.h"

UsingSym_(ExistingClass)UsingClass_(Compiler)
UsingClass_(Class__Compiler)
UsingClass_(ExistingClass__Compiler)
struct ClassInfo ExistingClass__Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 93, 6, Proto_(ExistingClass__Compiler), Proto_(Compiler), Proto_(Class__Compiler), nil, Sym_(ExistingClass), nil, nil };
struct object ExistingClass__Compiler = 
	{ &ExistingClass__Compiler__classInfo_, {nil, nil, nil, nil, nil, nil} };



#define compile_info__fld_	(0)

#define name__fld_	(1)
#define proto__fld_	(2)
#define new_functions__fld_	(3)
#define is_main__fld_	(4)
#define directories__fld_	(5)


obj_ add_directory_co___ExistingClass__Compiler(obj_ this_, obj_ directory)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(directories)

		{
		t0_ = Call_(directories, this_);
		t1_ = Call_(append_co_, t0_, directory);
		}
	return nil;
}


obj_ add_field_co___ExistingClass__Compiler(obj_ this_, obj_ field)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, ":")
	DefineString_(1, "You can't add fields to pre-existing objects.")
	UsingMethod_(_pl_) UsingMethod_(lookup_instance_function_co_) UsingMethod_(name)
	UsingClass_(MessageException__Standard)

		{
		/*  Fields can't be added to pre-existing protos.  But we may be re-loading the */
		/*  proto to update its methods, so check if we're merely trying to add a field */
		/*  that's already there. */
		/*  This is not a perfect check; we merely check to see if there's a getter and */
		/*  a setter, not if there's truly a field. */
		t0_ = Call_(name, field);
		t1_ = Call_(lookup_instance_function_co_, this_, t0_);
		if (t1_)
			{
			t0_ = Call_(name, field);
			t1_ = Call_(_pl_, t0_, Str_(0));
			t2_ = Call_(lookup_instance_function_co_, this_, t1_);
			if (t2_)
				{
				return nil;
				}
			}
		
		t0_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), Str_(1));
		Throw_(t0_);
		}
	return nil;
}


obj_ add_function_co___ExistingClass__Compiler(obj_ this_, obj_ function)
{
	extern obj_ new_co_on_proto_co___NewFunction__Compiler(obj_ this_, obj_ creator, obj_ on_proto);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "create")
	DefineString_(1, "create:")
	DefineString_(2, "create-")
	UsingMethod_(_eq__eq_) UsingMethod_(at_co_put_co_) UsingMethod_(is_a_co_) UsingMethod_(name) UsingMethod_(new_functions) UsingMethod_(starts_with_co_)
	UsingClass_(CompiledFunction__Compiler)
	UsingClass_(NewFunction__Compiler)

		{
		obj_ function_name;
		t0_ = Call_(name, function);
		function_name = t0_;
		
		t0_ = Call_(new_functions, this_);
		t1_ = Call_(at_co_put_co_, t0_, function_name, function);
		
		/*  "create" functions automatically add a corresponding "new:" function. */
		t0_ = Call_(is_a_co_, function, Proto_(CompiledFunction__Compiler));
		if (t0_) {
			t1_ = Call_(_eq__eq_, function_name, Str_(0));
			if ((t1_) == nil) {
				t2_ = Call_(starts_with_co_, function_name, Str_(1));
				t1_ = t2_;
				}
			if ((t1_) == nil) {
				t3_ = Call_(starts_with_co_, function_name, Str_(2));
				t1_ = t3_;
				}
			t0_ = t1_;
			}
		if (t0_)
			{
			obj_ new_function;
			/*  Add the corresponding "new" function. */
			t0_ = new_co_on_proto_co___NewFunction__Compiler(Proto_(NewFunction__Compiler), function, this_);
			new_function = t0_;
			t0_ = Call_(new_functions, this_);
			t1_ = Call_(name, new_function);
			t2_ = Call_(at_co_put_co_, t0_, t1_, new_function);
			}
		}
	return nil;
}


obj_ add_function_co_function_co___ExistingClass__Compiler(obj_ this_, obj_ name, obj_ function)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_put_co_) UsingMethod_(new_functions)

		{
		t0_ = Call_(new_functions, this_);
		t1_ = Call_(at_co_put_co_, t0_, name, function);
		}
	return nil;
}


obj_ add_proto_co___ExistingClass__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	UsingMethod_(add_proto_co_directory_co_)

		{
		t0_ = Call_(add_proto_co_directory_co_, this_, name, nil);
		return t0_;
		}
	return nil;
}


obj_ add_proto_co_directory_co___ExistingClass__Compiler(obj_ this_, obj_ name, obj_ directory)
{
	extern obj_ new_co___MessageException__Standard(obj_ this_, obj_ message);
	extern obj_ new_co_parent_co___CompiledClass__Compiler(obj_ this_, obj_ name, obj_ parent);
	extern obj_ new_co___ProtoFunction__Compiler(obj_ this_, obj_ proto);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	obj_ t5_;
	DefineString_(0, "Adding \"")
	DefineString_(1, "\" as a proto, when it's already a non-proto.")
	DefineString_(2, "Loading ")
	DefineString_(3, " into ")
	DefineString_(4, "...")
	UsingMethod_(_pl_) UsingMethod_(add_directory_co_) UsingMethod_(adding_class_co_) UsingMethod_(at_co_put_co_) UsingMethod_(indent) UsingMethod_(is_a_co_) UsingMethod_(lookup_instance_function_co_) UsingMethod_(name) UsingMethod_(new_functions) UsingMethod_(proto) UsingMethod_(report_co_) UsingMethod_(status_reporter) UsingMethod_(unindent)
	UsingSharedField_(compiler, Main) 
	UsingClass_(CompiledClass__Compiler)
	UsingClass_(MessageException__Standard)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ existing_function, new_proto, proto_function, status_reporter;
		/*  If it already exists, return it. */
		t0_ = Call_(lookup_instance_function_co_, this_, name);
		existing_function = t0_;
		if (existing_function)
			{
			t0_ = Call_(is_a_co_, existing_function, Proto_(ProtoFunction__Compiler));
			t1_ = Not_(t0_);
			if (t1_)
				{
				t0_ = Call_(_pl_, Str_(0), name);
				t1_ = Call_(_pl_, t0_, Str_(1));
				t2_ = new_co___MessageException__Standard(Proto_(MessageException__Standard), t1_);
				Throw_(t2_);
				}
			t3_ = Call_(proto, existing_function);
			return t3_;
			}
		
		/*  Add the new one. */
		t4_ = Call_(status_reporter, SharedField_(compiler, Main));
		status_reporter = t4_;
		t0_ = Call_(_pl_, Str_(2), name);
		t1_ = Call_(_pl_, t0_, Str_(3));
		t2_ = Call_(name, this_);
		t3_ = Call_(_pl_, t1_, t2_);
		t4_ = Call_(_pl_, t3_, Str_(4));
		t5_ = Call_(report_co_, status_reporter, t4_);
		t0_ = Call_(indent, status_reporter);
		t0_ = new_co_parent_co___CompiledClass__Compiler(Proto_(CompiledClass__Compiler), name, this_);
		new_proto = t0_;
		if (directory)
			{
			t0_ = Call_(add_directory_co_, new_proto, directory);
			}
		t0_ = new_co___ProtoFunction__Compiler(Proto_(ProtoFunction__Compiler), new_proto);
		proto_function = t0_;
		t0_ = Call_(new_functions, this_);
		t1_ = Call_(at_co_put_co_, t0_, name, proto_function);
		t0_ = Call_(adding_class_co_, SharedField_(compiler, Main), new_proto);
		t0_ = Call_(unindent, status_reporter);
		return new_proto;
		}
	return nil;
}


obj_ add_shared_field_co___ExistingClass__Compiler(obj_ this_, obj_ field)
{
	extern obj_ new_co_on_proto_co___SharedFieldGetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	extern obj_ new_co_on_proto_co___SharedFieldSetter__Compiler(obj_ this_, obj_ field, obj_ on_proto);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	DefineString_(0, ":")
	UsingMethod_(_pl_) UsingMethod_(at_co_put_co_) UsingMethod_(name) UsingMethod_(new_functions)
	UsingClass_(SharedFieldGetter__Compiler)
	UsingClass_(SharedFieldSetter__Compiler)

		{
		t0_ = Call_(new_functions, this_);
		t1_ = Call_(name, field);
		t2_ = new_co_on_proto_co___SharedFieldGetter__Compiler(Proto_(SharedFieldGetter__Compiler), field, this_);
		t3_ = Call_(at_co_put_co_, t0_, t1_, t2_);
		t0_ = Call_(new_functions, this_);
		t1_ = Call_(name, field);
		t2_ = Call_(_pl_, t1_, Str_(0));
		t3_ = new_co_on_proto_co___SharedFieldSetter__Compiler(Proto_(SharedFieldSetter__Compiler), field, this_);
		t4_ = Call_(at_co_put_co_, t0_, t2_, t3_);
		}
	return nil;
}


obj_ add_used_namespace_co___ExistingClass__Compiler(obj_ this_, obj_ namespace_)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	UsingSym_(Adding__new__classes__as___34_used_34___classes__of__existing__classes___40_)
	UsingSym_(_41___is__not__supported_dt_)
	extern obj_ with_co___Tuple__Standard(obj_ this_, obj_ item);
	extern obj_ new_co___Tuple__Standard(obj_ this_, obj_ num_items);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(5)
	UsingInt_(1)
	UsingInt_(0)
	UsingInt_(1)
	DefineString_(0, " to ")
	UsingMethod_(_pl_) UsingMethod_(_dt_class) UsingMethod_(at_co_put_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_a_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(name) UsingMethod_(num_items) UsingMethod_(proto) UsingMethod_(same_as_co_) UsingMethod_(used_contexts) UsingMethod_(used_contexts_co_)
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(Standard)
	UsingClass_(Tuple__Standard)

		{
		obj_ class_, new_used_proto;
		t0_ = Call_(is_a_co_, namespace_, Proto_(ExistingClass__Compiler));
		t1_ = Not_(t0_);
		if (t1_)
			{
			/*  Not yet supported, we'd need to defer the attempt until after the new */
			/*  class/namespace has been installed. */
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
			t0_->fields[1] = Sym_(Adding__new__classes__as___34_used_34___classes__of__existing__classes___40_);
			t1_ = Call_(name, namespace_);
			t0_->fields[2] = t1_;
			t0_->fields[3] = Str_(0);
			t2_ = Call_(name, this_);
			t0_->fields[4] = t2_;
			t0_->fields[5] = Sym_(_41___is__not__supported_dt_);
			t3_ = error_co___Standard(Proto_(Standard), t0_);
			}
		
		t0_ = Call_(proto, this_);
		t1_ = Call_(_dt_class, t0_);
		class_ = t1_;
		t0_ = Call_(proto, namespace_);
		new_used_proto = t0_;
		t0_ = Call_(used_contexts, class_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = with_co___Tuple__Standard(Proto_(Tuple__Standard), new_used_proto);
			t1_ = Call_(used_contexts_co_, class_, t0_);
			}
		else
			{
			obj_ index, new_used_contexts;
			/*  Is it already there? */
			/*  Use "same-as:" to check. */
			t0_ = Call_(used_contexts, class_);
			ForStart_(0, t0_, proto)
				{
				t0_ = Call_(same_as_co_, new_used_proto, proto);
				if (t0_)
					{
					return nil;
					}
				}
			ForEnd_(0)
			
			/*  Build a new 'used-contexts', adding the new one. */
			t0_ = Call_(used_contexts, class_);
			t1_ = Call_(num_items, t0_);
			t2_ = Call_(_pl_, t1_, SmallInt_(1));
			t3_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), t2_);
			new_used_contexts = t3_;
			index = SmallInt_(0);
			t0_ = Call_(used_contexts, class_);
			ForStart_(1, t0_, proto)
				{
				t0_ = Call_(at_co_put_co_, new_used_contexts, index, proto);
				t0_ = Call_(_pl_, index, SmallInt_(1));
				index = t0_;
				}
			ForEnd_(1)
			t0_ = Call_(at_co_put_co_, new_used_contexts, index, new_used_proto);
			t0_ = Call_(used_contexts_co_, class_, new_used_contexts);
			}
		}
	return nil;
}


obj_ create_co___ExistingClass__Compiler(obj_ this_, obj_ proto)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_dt_proto_name) UsingMethod_(create_co_proto_co_)

		{
		t0_ = Call_(_dt_proto_name, proto);
		t1_ = Call_(create_co_proto_co_, this_, t0_, proto);
		}
	return nil;
}


obj_ create_co_proto_co___ExistingClass__Compiler(obj_ this_, obj_ name, obj_ proto)
{
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_eq__eq_) UsingMethod_(directories_co_) UsingMethod_(is_main) UsingMethod_(is_main_co_) UsingMethod_(name_co_) UsingMethod_(new_functions_co_) UsingMethod_(proto_co_) UsingMethod_(setup_main)
	UsingClass_(Dictionary__Standard)
	UsingClass_(List__Standard)
	UsingClass_(Main)

		{
		t0_ = Call_(name_co_, this_, name);
		t0_ = Call_(proto_co_, this_, proto);
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(new_functions_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(directories_co_, this_, t0_);
		t0_ = Call_(_eq__eq_, proto, Proto_(Main));
		t1_ = Call_(is_main_co_, this_, t0_);
		t0_ = Call_(is_main, this_);
		if (t0_)
			{
			t0_ = Call_(setup_main, this_);
			}
		}
	return nil;
}


obj_ find_subproto_co___ExistingClass__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_dt_proto_name) UsingMethod_(_dt_subprotos) UsingMethod_(_eq__eq_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(proto)

		{
		/*  'support-subprotos' must be on! */
		t0_ = Call_(proto, this_);
		t1_ = Call_(_dt_subprotos, t0_);
		if (t1_)
			{
			t0_ = Call_(proto, this_);
			t1_ = Call_(_dt_subprotos, t0_);
			ForStart_(0, t1_, subproto)
				{
				t0_ = Call_(_dt_proto_name, subproto);
				t1_ = Call_(_eq__eq_, t0_, name);
				if (t1_)
					{
					return subproto;
					}
				}
			ForEnd_(0)
			}
		
		return nil;
		}
	return nil;
}


obj_ function_for_co_in_co___ExistingClass__Compiler(obj_ this_, obj_ selector, obj_ proto)
{
	extern obj_ new_co_proto_co___ExistingClass__Compiler(obj_ this_, obj_ name, obj_ proto);
	extern obj_ new_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(58)
	UsingMethod_(_nt__eq_) UsingMethod_(_dt_proto_name) UsingMethod_(index_of_co_) UsingMethod_(load_subproto_co_) UsingMethod_(responds_to_co_) UsingMethod_(string)
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(PrimitiveFunction__Compiler)

		{
		obj_ existing_proto, function_name;
		/*  Is it a ProtoFunction? */
		t0_ = Call_(string, selector);
		function_name = t0_;
		t0_ = Call_(index_of_co_, function_name, Int_(58));
		t1_ = Not_(t0_);
		if (t1_)
			{
			obj_ found_subproto_fn;
			t0_ = Call_(load_subproto_co_, this_, function_name);
			found_subproto_fn = t0_;
			if (found_subproto_fn)
				{
				return found_subproto_fn;
				}
			}
		
		t0_ = Call_(responds_to_co_, proto, selector);
		t1_ = Not_(t0_);
		if (t1_)
			{
			return nil;
			}
		
		existing_proto = this_;
		t0_ = Call_(_nt__eq_, proto, this_);
		if (t0_)
			{
			t0_ = Call_(_dt_proto_name, proto);
			t1_ = new_co_proto_co___ExistingClass__Compiler(Proto_(ExistingClass__Compiler), t0_, proto);
			existing_proto = t1_;
			}
		t0_ = new_co_on_proto_co___PrimitiveFunction__Compiler(Proto_(PrimitiveFunction__Compiler), function_name, existing_proto);
		return t0_;
		}
	return nil;
}


obj_ get_proto_co___ExistingClass__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_) UsingMethod_(is_a_co_) UsingMethod_(lookup_function_co_) UsingMethod_(new_functions) UsingMethod_(proto)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ function;
		t0_ = Call_(new_functions, this_);
		t1_ = Call_(at_co_, t0_, name);
		function = t1_;
		t0_ = Not_(function);
		if (t0_)
			{
			t0_ = Call_(lookup_function_co_, this_, name);
			function = t0_;
			}
		t0_ = function;
		if (t0_) {
			t1_ = Call_(is_a_co_, function, Proto_(ProtoFunction__Compiler));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(proto, function);
			return t0_;
			}
		return nil;
		}
	return nil;
}


obj_ get_subproto_co___ExistingClass__Compiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(is_a_co_) UsingMethod_(lookup_instance_function_co_) UsingMethod_(proto)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ function;
		/*  Has it been loaded already? */
		t0_ = Call_(lookup_instance_function_co_, this_, name);
		function = t0_;
		t0_ = function;
		if (t0_) {
			t1_ = Call_(is_a_co_, function, Proto_(ProtoFunction__Compiler));
			t0_ = t1_;
			}
		if (t0_)
			{
			t0_ = Call_(proto, function);
			return t0_;
			}
		
		return nil;
		}
	return nil;
}


obj_ load_subproto_co___ExistingClass__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new_co_proto_co___ExistingClass__Compiler(obj_ this_, obj_ name, obj_ proto);
	extern obj_ in_co_for_co_parent_co___CompiledClass__Compiler(obj_ this_, obj_ directory, obj_ name, obj_ parent);
	extern obj_ new_co___ProtoFunction__Compiler(obj_ this_, obj_ proto);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_directory_co_) UsingMethod_(at_co_) UsingMethod_(current_item) UsingMethod_(directories) UsingMethod_(entry_is_directory_co_) UsingMethod_(find_subproto_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator)
	UsingClass_(CompiledClass__Compiler)
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(ProtoFunction__Compiler)

		{
		obj_ found_subproto, subproto;
		subproto = nil;
		
		/*  Do we already have it? */
		t0_ = Call_(find_subproto_co_, this_, name);
		found_subproto = t0_;
		if (found_subproto)
			{
			t0_ = new_co_proto_co___ExistingClass__Compiler(Proto_(ExistingClass__Compiler), name, found_subproto);
			subproto = t0_;
			t0_ = Call_(directories, this_);
			ForStart_(0, t0_, directory)
				{
				t0_ = Call_(entry_is_directory_co_, directory, name);
				if (t0_)
					{
					t0_ = Call_(at_co_, directory, name);
					t1_ = Call_(add_directory_co_, subproto, t0_);
					}
				}
			ForEnd_(0)
			}
		else
			{
			t0_ = Call_(directories, this_);
			ForStart_(1, t0_, directory)
				{
				t0_ = in_co_for_co_parent_co___CompiledClass__Compiler(Proto_(CompiledClass__Compiler), directory, name, this_);
				subproto = t0_;
				}
			ForEnd_(1)
			}
		
		/*  If not, look for it in our directories. */
		
		t0_ = Not_(subproto);
		if (t0_)
			{
			return nil;
			}
		t0_ = new_co___ProtoFunction__Compiler(Proto_(ProtoFunction__Compiler), subproto);
		return t0_;
		}
	return nil;
}


obj_ lookup_function_co___ExistingClass__Compiler(obj_ this_, obj_ name)
{
	UsingSym_(_dt_used_contexts)
	UsingSym_(_dt_parent_context)
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_dt_parent_context) UsingMethod_(_dt_used_contexts) UsingMethod_(at_co_) UsingMethod_(current_item) UsingMethod_(function_for_co_in_co_) UsingMethod_(go_forward) UsingMethod_(intern) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(new_functions) UsingMethod_(proto) UsingMethod_(responds_to_co_)

		{
		obj_ cur_proto, function, name_selector;
		t0_ = Call_(intern, name);
		name_selector = t0_;
		
		/*  Are we adding it? */
		t0_ = Call_(new_functions, this_);
		t1_ = Call_(at_co_, t0_, name);
		function = t1_;
		if (function)
			{
			return function;
			}
		
		/*  Check the context, starting here. */
		t0_ = Call_(proto, this_);
		cur_proto = t0_;
		while (1) {
			ContinuePoint_(0)
			{
			/*  Is it directly visible? */
			t0_ = Call_(function_for_co_in_co_, this_, name_selector, cur_proto);
			function = t0_;
			if (function)
				{
				return function;
				}
			
			/*  Is it visible due to being in a "used" context? */
			t0_ = Call_(responds_to_co_, cur_proto, Sym_(_dt_used_contexts));
			if (t0_)
				{
				t0_ = Call_(_dt_used_contexts, cur_proto);
				ForStart_(1, t0_, context)
					{
					t0_ = Call_(function_for_co_in_co_, this_, name_selector, context);
					function = t0_;
					if (function)
						{
						return function;
						}
					}
				ForEnd_(1)
				}
			
			/*  Go up a level. */
			t0_ = Call_(responds_to_co_, cur_proto, Sym_(_dt_parent_context));
			t1_ = Not_(t0_);
			if (t1_)
				{
				Break_(0)
				}
			t0_ = Call_(_dt_parent_context, cur_proto);
			cur_proto = t0_;
			t0_ = Not_(cur_proto);
			if (t0_)
				{
				Break_(0)
				}
			}
		}
		
		return nil;
		}
	return nil;
}


obj_ lookup_function_co_visited_protos_co___ExistingClass__Compiler(obj_ this_, obj_ name, obj_ visited_protos)
{
	obj_ t0_;
	UsingMethod_(lookup_function_co_)

		{
		t0_ = Call_(lookup_function_co_, this_, name);
		return t0_;
		}
	return nil;
}


obj_ lookup_instance_function_co___ExistingClass__Compiler(obj_ this_, obj_ name)
{
	extern obj_ new_co_on_proto_co___PrimitiveFunction__Compiler(obj_ this_, obj_ name, obj_ on_proto);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingMethod_(at_co_) UsingMethod_(intern) UsingMethod_(load_subproto_co_) UsingMethod_(new_functions) UsingMethod_(proto) UsingMethod_(responds_to_co_)
	UsingClass_(PrimitiveFunction__Compiler)

		{
		obj_ found_subproto_fn, function;
		t0_ = Call_(load_subproto_co_, this_, name);
		found_subproto_fn = t0_;
		if (found_subproto_fn)
			{
			return found_subproto_fn;
			}
		
		t0_ = Call_(proto, this_);
		t1_ = Call_(intern, name);
		t2_ = Call_(responds_to_co_, t0_, t1_);
		if (t2_)
			{
			t0_ = Call_(proto, this_);
			t1_ = new_co_on_proto_co___PrimitiveFunction__Compiler(Proto_(PrimitiveFunction__Compiler), name, t0_);
			return t1_;
			}
		
		t2_ = Call_(new_functions, this_);
		t3_ = Call_(at_co_, t2_, name);
		function = t3_;
		if (function)
			{
			return function;
			}
		
		return nil;
		}
	return nil;
}


obj_ new_co___ExistingClass__Compiler(obj_ this_, obj_ proto)
{
	UsingClass_(ExistingClass__Compiler)
	obj_ obj = AllocObj_(ExistingClass__Compiler);
	create_co___ExistingClass__Compiler(obj, proto);
	return obj;
}


obj_ new_co_proto_co___ExistingClass__Compiler(obj_ this_, obj_ name, obj_ proto)
{
	UsingClass_(ExistingClass__Compiler)
	obj_ obj = AllocObj_(ExistingClass__Compiler);
	create_co_proto_co___ExistingClass__Compiler(obj, name, proto);
	return obj;
}


obj_ newly_defined_functions__ExistingClass__Compiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(new_functions) UsingMethod_(pairs)

		{
		t0_ = Call_(new_functions, this_);
		t1_ = Call_(pairs, t0_);
		return t1_;
		}
	return nil;
}


obj_ parent__ExistingClass__Compiler(obj_ this_)
{
	UsingSym_(_dt_parent_context)
	extern obj_ new_co___ExistingClass__Compiler(obj_ this_, obj_ proto);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_dt_parent_context) UsingMethod_(proto) UsingMethod_(responds_to_co_)
	UsingClass_(ExistingClass__Compiler)

		{
		t0_ = Call_(proto, this_);
		t1_ = Call_(responds_to_co_, t0_, Sym_(_dt_parent_context));
		if (t1_)
			{
			obj_ existing_proto, parent_context;
			t0_ = Call_(proto, this_);
			t1_ = Call_(_dt_parent_context, t0_);
			parent_context = t1_;
			t0_ = Not_(parent_context);
			if (t0_)
				{
				return nil;
				}
			t0_ = new_co___ExistingClass__Compiler(Proto_(ExistingClass__Compiler), parent_context);
			existing_proto = t0_;
			return existing_proto;
			}
		return nil;
		}
	return nil;
}


obj_ setup_main__ExistingClass__Compiler(obj_ this_)
{
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	extern obj_ find_library_path__Compiler(obj_ this_);
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	extern obj_ build_settings__Main(obj_ this_);
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	DefineString_(0, ".")
	DefineString_(1, "sources")
	DefineString_(2, "sources")
	UsingMethod_(add_directory_co_) UsingMethod_(append_co_) UsingMethod_(at_co_) UsingMethod_(current_item) UsingMethod_(directories) UsingMethod_(entry_is_directory_co_) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(library_dirs)
	UsingClass_(Compiler)
	UsingClass_(FileDirectory__Standard)
	UsingClass_(Main)

		{
		obj_ library_path, main_directory;
		/*  Add current directory (or "./sources"). */
		t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), Str_(0));
		main_directory = t0_;
		t0_ = Call_(entry_is_directory_co_, main_directory, Str_(1));
		if (t0_)
			{
			t0_ = Call_(at_co_, main_directory, Str_(2));
			main_directory = t0_;
			}
		
		/*  Add the system library. */
		t0_ = find_library_path__Compiler(Proto_(Compiler));
		library_path = t0_;
		if (library_path)
			{
			Try_
				{
				obj_ library_directory;
				t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), library_path);
				library_directory = t0_;
				t0_ = Call_(directories, this_);
				t1_ = Call_(append_co_, t0_, library_directory);
				}
			TryElse_
			EndTry_
			}
		
		/*  Add the library-dirs. */
		t0_ = build_settings__Main(Proto_(Main));
		t1_ = Call_(library_dirs, t0_);
		ForStart_(0, t1_, directory)
			{
			t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), directory);
			t1_ = Call_(add_directory_co_, this_, t0_);
			}
		ForEnd_(0)
		}
	return nil;
}


obj_ source_name_co___ExistingClass__Compiler(obj_ this_, obj_ name)
{

		{
		/*  We don't care. */
		}
	return nil;
}


