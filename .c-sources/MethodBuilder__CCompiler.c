#include "Trylon_.h"

UsingSym_(MethodBuilder)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(MethodBuilder__CCompiler)
struct ClassInfo MethodBuilder__CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 205, 16, Proto_(MethodBuilder__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(MethodBuilder), nil, nil };
struct object MethodBuilder__CCompiler = 
	{ &MethodBuilder__CCompiler__classInfo_, {nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil} };


#define function__fld_	(0)
#define code__fld_	(1)
#define temporaries__fld_	(2)
#define loops__fld_	(3)
#define int_literals__fld_	(4)
#define string_literals__fld_	(5)
#define float_literals__fld_	(6)
#define dict_literals__fld_	(7)
#define tuple_literals__fld_	(8)
#define extern_declarations__fld_	(9)
#define used_classes__fld_	(10)
#define used_selectors__fld_	(11)
#define used_shared_fields__fld_	(12)
#define next_temporary_num__fld_	(13)
#define indent_level__fld_	(14)
#define loop_stack__fld_	(15)


obj_ add_blank_line__MethodBuilder__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "\n")
	UsingMethod_(_pl_) UsingMethod_(code) UsingMethod_(code_co_)

		{
		t0_ = Call_(code, this_);
		t1_ = Call_(_pl_, t0_, Str_(0));
		t2_ = Call_(code_co_, this_, t1_);
		}
	return nil;
}


obj_ add_extern_declaration_co___MethodBuilder__CCompiler(obj_ this_, obj_ declaration)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(extern_declarations)

		{
		t0_ = Call_(extern_declarations, this_);
		t1_ = Call_(append_co_, t0_, declaration);
		}
	return nil;
}


obj_ add_line_co___MethodBuilder__CCompiler(obj_ this_, obj_ line)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(20)
	UsingInt_(20)
	UsingInt_(0)
	DefineString_(0, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t")
	DefineString_(1, "\n")
	UsingMethod_(_pl_) UsingMethod_(_gt_) UsingMethod_(code) UsingMethod_(code_co_) UsingMethod_(indent_level) UsingMethod_(substr_co_length_co_)

		{
		obj_ adjusted_indent_level;
		/*  Add the indent. */
		t0_ = Call_(indent_level, this_);
		adjusted_indent_level = t0_;
		t0_ = Call_(_gt_, adjusted_indent_level, SmallInt_(20));
		if (t0_)
			{
			adjusted_indent_level = SmallInt_(20);
			}
		t0_ = Call_(code, this_);
		t1_ = Call_(substr_co_length_co_, Str_(0), SmallInt_(0), adjusted_indent_level);
		t2_ = Call_(_pl_, t0_, t1_);
		t3_ = Call_(code_co_, this_, t2_);
		
		t0_ = Call_(code, this_);
		t1_ = Call_(_pl_, t0_, line);
		t2_ = Call_(code_co_, this_, t1_);
		t0_ = Call_(code, this_);
		t1_ = Call_(_pl_, t0_, Str_(1));
		t2_ = Call_(code_co_, this_, t1_);
		}
	return nil;
}


obj_ calling_method_co___MethodBuilder__CCompiler(obj_ this_, obj_ name)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_put_co_) UsingMethod_(used_selectors)

		{
		t0_ = Call_(used_selectors, this_);
		t1_ = Call_(at_co_put_co_, t0_, name, name);
		}
	return nil;
}


obj_ create_co___MethodBuilder__CCompiler(obj_ this_, obj_ function)
{
	extern obj_ new__StringBuilder__Standard(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__IndexedResources__CCompiler(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new__ObjectMap__Standard(obj_ this_);
	extern obj_ new__Dictionary__Standard(obj_ this_);
	extern obj_ new__ObjectMap__Standard(obj_ this_);
	extern obj_ new__List__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingInt_(0)
	UsingInt_(1)
	UsingMethod_(code_co_) UsingMethod_(dict_literals_co_) UsingMethod_(extern_declarations_co_) UsingMethod_(float_literals_co_) UsingMethod_(function_co_) UsingMethod_(indent_level_co_) UsingMethod_(int_literals_co_) UsingMethod_(loop_stack_co_) UsingMethod_(loops_co_) UsingMethod_(next_temporary_num_co_) UsingMethod_(string_literals_co_) UsingMethod_(temporaries_co_) UsingMethod_(tuple_literals_co_) UsingMethod_(used_classes_co_) UsingMethod_(used_selectors_co_) UsingMethod_(used_shared_fields_co_)
	UsingClass_(Dictionary__Standard)
	UsingClass_(IndexedResources__CCompiler)
	UsingClass_(List__Standard)
	UsingClass_(ObjectMap__Standard)
	UsingClass_(StringBuilder__Standard)

		{
		t0_ = Call_(function_co_, this_, function);
		t0_ = new__StringBuilder__Standard(Proto_(StringBuilder__Standard));
		t1_ = Call_(code_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(temporaries_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(loops_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(int_literals_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(string_literals_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(float_literals_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(dict_literals_co_, this_, t0_);
		t0_ = new__IndexedResources__CCompiler(Proto_(IndexedResources__CCompiler));
		t1_ = Call_(tuple_literals_co_, this_, t0_);
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(extern_declarations_co_, this_, t0_);
		t0_ = new__ObjectMap__Standard(Proto_(ObjectMap__Standard));
		t1_ = Call_(used_classes_co_, this_, t0_);
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		t1_ = Call_(used_selectors_co_, this_, t0_);
		t0_ = new__ObjectMap__Standard(Proto_(ObjectMap__Standard));
		t1_ = Call_(used_shared_fields_co_, this_, t0_);
		t0_ = Call_(next_temporary_num_co_, this_, SmallInt_(0));
		t0_ = Call_(indent_level_co_, this_, SmallInt_(1));
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(loop_stack_co_, this_, t0_);
		}
	return nil;
}


obj_ cur_loop_index__MethodBuilder__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(head) UsingMethod_(loop_stack)

		{
		t0_ = Call_(loop_stack, this_);
		t1_ = Call_(head, t0_);
		return t1_;
		}
	return nil;
}


obj_ emit_co___MethodBuilder__CCompiler(obj_ this_, obj_ stream)
{
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ mangle_name_co___CCompiler(obj_ this_, obj_ name);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	extern obj_ mangle_name_co___CCompiler(obj_ this_, obj_ name);
	extern obj_ new__Dictionary__Standard(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(3)
	UsingInt_(5)
	DefineString_(0, "{")
	DefineString_(1, "\t")
	DefineString_(2, "\t")
	DefineString_(3, " ")
	DefineString_(4, "UsingMethod_(")
	DefineString_(5, ")")
	DefineString_(6, "\tUsingSharedField_(")
	DefineString_(7, ", ")
	DefineString_(8, ") ")
	DefineString_(9, "\tUsingClass_(")
	DefineString_(10, ")")
	DefineString_(11, "\treturn nil;")
	DefineString_(12, "}")
	UsingMethod_(at_co_) UsingMethod_(at_co_put_co_) UsingMethod_(c_name) UsingMethod_(code) UsingMethod_(current_item) UsingMethod_(dict_literals) UsingMethod_(emit_declarations_on_co_) UsingMethod_(extern_declarations) UsingMethod_(float_literals) UsingMethod_(go_forward) UsingMethod_(int_literals) UsingMethod_(is_done) UsingMethod_(is_empty) UsingMethod_(iterator) UsingMethod_(keys) UsingMethod_(name) UsingMethod_(string) UsingMethod_(string_literals) UsingMethod_(temporaries) UsingMethod_(tuple_literals) UsingMethod_(used_classes) UsingMethod_(used_selectors) UsingMethod_(used_shared_fields) UsingMethod_(values) UsingMethod_(write_all_co_) UsingMethod_(write_line) UsingMethod_(write_line_co_) UsingMethod_(write_co_)
	UsingClass_(CCompiler)
	UsingClass_(Dictionary__Standard)

		{
		obj_ used_class_names;
		t0_ = Call_(write_line_co_, stream, Str_(0));
		
		/*  External declarations. */
		/*  Includes symbol declarations, so declare these before Tuples/Dicts. */
		t0_ = Call_(extern_declarations, this_);
		t1_ = Call_(is_empty, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = Call_(extern_declarations, this_);
			ForStart_(0, t0_, declaration)
				{
				t0_ = Call_(write_co_, stream, Str_(1));
				t0_ = Call_(write_line_co_, stream, declaration);
				}
			ForEnd_(0)
			}
		
		/*  Declarations. */
		t0_ = Call_(temporaries, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		/*  loops emit-declarations-on: stream 	# Not needed. */
		t0_ = Call_(int_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		t0_ = Call_(string_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		t0_ = Call_(float_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		t0_ = Call_(tuple_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		t0_ = Call_(dict_literals, this_);
		t1_ = Call_(emit_declarations_on_co_, t0_, stream);
		
		/*  Declare selectors. */
		t0_ = Call_(used_selectors, this_);
		t1_ = Call_(is_empty, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			obj_ done_one;
			t0_ = Call_(write_co_, stream, Str_(2));
			done_one = nil;
			t0_ = Call_(used_selectors, this_);
			t1_ = Call_(keys, t0_);
			ForStart_(1, t1_, name)
				{
				if (done_one)
					{
					t0_ = Call_(write_co_, stream, Str_(3));
					}
				else
					{
					done_one = true_;
					}
				t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(3));
				t0_->fields[1] = Str_(4);
				t1_ = mangle_name_co___CCompiler(Proto_(CCompiler), name);
				t0_->fields[2] = t1_;
				t0_->fields[3] = Str_(5);
				t2_ = Call_(write_all_co_, stream, t0_);
				}
			ForEnd_(1)
			t0_ = Call_(write_line, stream);
			}
		
		/*  Shared field declarations. */
		t0_ = Call_(used_shared_fields, this_);
		t1_ = Call_(is_empty, t0_);
		t2_ = Not_(t1_);
		if (t2_)
			{
			t0_ = Call_(used_shared_fields, this_);
			t1_ = Call_(keys, t0_);
			ForStart_(2, t1_, field)
				{
				obj_ on_proto;
				t0_ = Call_(used_shared_fields, this_);
				t1_ = Call_(at_co_, t0_, field);
				on_proto = t1_;
				t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(5));
				t0_->fields[1] = Str_(6);
				t1_ = Call_(name, field);
				t2_ = mangle_name_co___CCompiler(Proto_(CCompiler), t1_);
				t0_->fields[2] = t2_;
				t0_->fields[3] = Str_(7);
				t3_ = Call_(c_name, on_proto);
				t0_->fields[4] = t3_;
				t0_->fields[5] = Str_(8);
				t4_ = Call_(write_all_co_, stream, t0_);
				}
			ForEnd_(2)
			t0_ = Call_(write_line, stream);
			}
		
		/*  Used classes. */
		/*  Sort by C name, to avoid unnecessary recompilations of the C file. */
		/*  "used-classes" is an ObjectMap, so the sort key is the address of the class */
		/*  in memory.  That can be different on different runs. */
		t0_ = new__Dictionary__Standard(Proto_(Dictionary__Standard));
		used_class_names = t0_;
		t0_ = Call_(used_classes, this_);
		t1_ = Call_(values, t0_);
		ForStart_(3, t1_, used_class)
			{
			obj_ c_name;
			t0_ = Call_(c_name, used_class);
			c_name = t0_;
			t0_ = Call_(at_co_put_co_, used_class_names, c_name, c_name);
			}
		ForEnd_(3)
		t0_ = Call_(keys, used_class_names);
		ForStart_(4, t0_, class_name)
			{
			t0_ = Call_(write_co_, stream, Str_(9));
			t0_ = Call_(write_co_, stream, class_name);
			t0_ = Call_(write_line_co_, stream, Str_(10));
			}
		ForEnd_(4)
		
		/*  ... */
		
		t0_ = Call_(write_line, stream);
		
		/*  Emit the body of the code. */
		t0_ = Call_(code, this_);
		t1_ = Call_(string, t0_);
		t2_ = Call_(write_co_, stream, t1_);
		
		t0_ = Call_(write_line_co_, stream, Str_(11));
		t0_ = Call_(write_line_co_, stream, Str_(12));
		}
	return nil;
}


obj_ end_loop__MethodBuilder__CCompiler(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(pop_loop)

		{
		t0_ = Call_(pop_loop, this_);
		}
	return nil;
}


obj_ get_temporary__MethodBuilder__CCompiler(obj_ this_)
{
	extern obj_ new_co___Temporary__CCompiler(obj_ this_, obj_ index);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(1)
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(_) UsingMethod_(_gt_) UsingMethod_(add_co_) UsingMethod_(next_index) UsingMethod_(next_temporary_num) UsingMethod_(next_temporary_num_co_) UsingMethod_(temporaries)
	UsingClass_(Temporary__CCompiler)

		{
		obj_ temp_num, temporary;
		t0_ = Call_(next_temporary_num, this_);
		temp_num = t0_;
		t0_ = Call_(next_temporary_num, this_);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(next_temporary_num_co_, this_, t1_);
		t0_ = new_co___Temporary__CCompiler(Proto_(Temporary__CCompiler), temp_num);
		temporary = t0_;
		t0_ = Call_(temporaries, this_);
		t1_ = Call_(next_index, t0_);
		t2_ = Call_(_, t1_, SmallInt_(1));
		t3_ = Call_(_gt_, temp_num, t2_);
		if (t3_)
			{
			t0_ = Call_(temporaries, this_);
			t1_ = Call_(add_co_, t0_, temporary);
			}
		return temporary;
		/*  Really want: */
		/*  temp-num = next-temporary-num */
		/*  next-temporary-num += 1 */
		/*  if temp-num < temporaries next-index */
		/*  	return temporaries at: temp-num */
		/*  temporary = Temporary new: temp-num */
		/*  temporaries add: temporary */
		/*  return temporary */
		}
	return nil;
}


obj_ indent__MethodBuilder__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_pl_) UsingMethod_(indent_level) UsingMethod_(indent_level_co_)

		{
		t0_ = Call_(indent_level, this_);
		t1_ = Call_(_pl_, t0_, SmallInt_(1));
		t2_ = Call_(indent_level_co_, this_, t1_);
		}
	return nil;
}


obj_ new_co___MethodBuilder__CCompiler(obj_ this_, obj_ function)
{
	UsingClass_(MethodBuilder__CCompiler)
	obj_ obj = AllocObj_(MethodBuilder__CCompiler);
	create_co___MethodBuilder__CCompiler(obj, function);
	return obj;
}


obj_ pop_loop__MethodBuilder__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(loop_stack) UsingMethod_(pop_front)

		{
		t0_ = Call_(loop_stack, this_);
		t1_ = Call_(pop_front, t0_);
		}
	return nil;
}


obj_ push_loop_co___MethodBuilder__CCompiler(obj_ this_, obj_ loop)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingMethod_(index) UsingMethod_(loop_stack) UsingMethod_(prepend_co_)

		{
		t0_ = Call_(loop_stack, this_);
		t1_ = Call_(index, loop);
		t2_ = Call_(prepend_co_, t0_, t1_);
		}
	return nil;
}


obj_ reset_temporaries__MethodBuilder__CCompiler(obj_ this_)
{
	obj_ t0_;
	UsingInt_(0)
	UsingMethod_(next_temporary_num_co_)

		{
		t0_ = Call_(next_temporary_num_co_, this_, SmallInt_(0));
		}
	return nil;
}


obj_ start_loop_co___MethodBuilder__CCompiler(obj_ this_, obj_ loop)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_co_) UsingMethod_(loops) UsingMethod_(push_loop_co_)

		{
		t0_ = Call_(loops, this_);
		t1_ = Call_(add_co_, t0_, loop);
		t0_ = Call_(push_loop_co_, this_, loop);
		}
	return nil;
}


obj_ supports_only_literals__MethodBuilder__CCompiler(obj_ this_)
{

		{
		return nil;
		}
	return nil;
}


obj_ unindent__MethodBuilder__CCompiler(obj_ this_)
{
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	UsingInt_(1)
	UsingMethod_(_) UsingMethod_(indent_level) UsingMethod_(indent_level_co_)

		{
		t0_ = Call_(indent_level, this_);
		t1_ = Call_(_, t0_, SmallInt_(1));
		t2_ = Call_(indent_level_co_, this_, t1_);
		}
	return nil;
}


obj_ using_class_co___MethodBuilder__CCompiler(obj_ this_, obj_ the_class)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_put_co_) UsingMethod_(used_classes)

		{
		t0_ = Call_(used_classes, this_);
		t1_ = Call_(at_co_put_co_, t0_, the_class, the_class);
		}
	return nil;
}


obj_ using_proto_co___MethodBuilder__CCompiler(obj_ this_, obj_ proto)
{
	obj_ t0_;
	UsingMethod_(using_class_co_)

		{
		t0_ = Call_(using_class_co_, this_, proto);
		}
	return nil;
}


obj_ using_shared_field_co_on_proto_co___MethodBuilder__CCompiler(obj_ this_, obj_ field, obj_ on_proto)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(at_co_put_co_) UsingMethod_(used_shared_fields)

		{
		/*  This is a little tricky.  We count on the fact that we'll be given  */
		/*  the same "field" object anytime that the field in "on-proto" is  */
		/*  referenced.  So we can use an ObjectMap to keep track of them. */
		t0_ = Call_(used_shared_fields, this_);
		t1_ = Call_(at_co_put_co_, t0_, field, on_proto);
		}
	return nil;
}


