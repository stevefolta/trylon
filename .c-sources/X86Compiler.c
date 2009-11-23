#include "Trylon_.h"

UsingClass_(ArgumentResult__X86Compiler) UsingClass_(CallResult__X86Compiler) UsingClass_(ClassBuilder__X86Compiler) UsingClass_(CompiledClassBuilder__X86Compiler) UsingClass_(ExistingClassBuilder__X86Compiler) UsingClass_(LiteralExpression__X86Compiler) UsingClass_(LiteralResult__X86Compiler) UsingClass_(LocalResult__X86Compiler) UsingClass_(MethodBuilder__X86Compiler) UsingClass_(NewSharedField__X86Compiler) UsingClass_(Result__X86Compiler) 
static obj_ tu0_[];
UsingSym_(X86Compiler)UsingClass_(Main)
UsingClass_(Object__Standard)
UsingClass_(X86Compiler)
struct ClassInfo X86Compiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 64, 2, Proto_(X86Compiler), Proto_(Main), Proto_(Object__Standard), nil, Sym_(X86Compiler), nil, ((obj_) tu0_) };
struct object X86Compiler = 
	{ &X86Compiler__classInfo_, {nil, nil} };

	UsingInt_(11)
	UsingInt_(4)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(11), Proto_(ArgumentResult__X86Compiler), Proto_(CallResult__X86Compiler), Proto_(ClassBuilder__X86Compiler), Proto_(CompiledClassBuilder__X86Compiler), Proto_(ExistingClassBuilder__X86Compiler), Proto_(LiteralExpression__X86Compiler), Proto_(LiteralResult__X86Compiler), Proto_(LocalResult__X86Compiler), Proto_(MethodBuilder__X86Compiler), Proto_(NewSharedField__X86Compiler), Proto_(Result__X86Compiler) };

#define class_queue__fld_	(0)
#define _dt_build_settings__fld_	(1)

DeclareSharedField_(word_size, X86Compiler, SmallInt_(4))

obj_ ArgumentResult__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(ArgumentResult__X86Compiler)
	return Proto_(ArgumentResult__X86Compiler);
}


obj_ CallResult__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(CallResult__X86Compiler)
	return Proto_(CallResult__X86Compiler);
}


obj_ ClassBuilder__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(ClassBuilder__X86Compiler)
	return Proto_(ClassBuilder__X86Compiler);
}


obj_ CompiledClassBuilder__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(CompiledClassBuilder__X86Compiler)
	return Proto_(CompiledClassBuilder__X86Compiler);
}


obj_ ExistingClassBuilder__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(ExistingClassBuilder__X86Compiler)
	return Proto_(ExistingClassBuilder__X86Compiler);
}


obj_ LiteralExpression__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(LiteralExpression__X86Compiler)
	return Proto_(LiteralExpression__X86Compiler);
}


obj_ LiteralResult__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(LiteralResult__X86Compiler)
	return Proto_(LiteralResult__X86Compiler);
}


obj_ LocalResult__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(LocalResult__X86Compiler)
	return Proto_(LocalResult__X86Compiler);
}


obj_ MethodBuilder__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(MethodBuilder__X86Compiler)
	return Proto_(MethodBuilder__X86Compiler);
}


obj_ NewSharedField__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(NewSharedField__X86Compiler)
	return Proto_(NewSharedField__X86Compiler);
}


obj_ Result__X86Compiler__accessor_(obj_ this_)
{
	UsingClass_(Result__X86Compiler)
	return Proto_(Result__X86Compiler);
}


obj_ adding_class_co___X86Compiler(obj_ this_, obj_ class_)
{
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(append_co_) UsingMethod_(class_queue)

		{
		t0_ = Call_(class_queue, this_);
		t1_ = Call_(append_co_, t0_, class_);
		}
	return nil;
}


obj_ build_settings__X86Compiler(obj_ this_)
{
	extern obj_ new__BuildSettings__Compiler(obj_ this_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_dt_build_settings) UsingMethod_(_dt_build_settings_co_)
	UsingClass_(BuildSettings__Compiler)

		{
		t0_ = Call_(_dt_build_settings, this_);
		t1_ = Not_(t0_);
		if (t1_)
			{
			t0_ = new__BuildSettings__Compiler(Proto_(BuildSettings__Compiler));
			t1_ = Call_(_dt_build_settings_co_, this_, t0_);
			}
		t0_ = Call_(_dt_build_settings, this_);
		return t0_;
		}
	return nil;
}


obj_ calling_selector_co___X86Compiler(obj_ this_, obj_ selector)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


obj_ compile_co___X86Compiler(obj_ this_, obj_ function)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	extern obj_ new_co___Tuple__Standard(obj_, obj_);
	UsingSym_(_34_)
	UsingSym_(_34_)
	extern obj_ new_co_code_co___MethodBuilder__X86Compiler(obj_ this_, obj_ function, obj_ code_tree);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	obj_ t4_;
	UsingInt_(6)
	DefineString_(0, " ")
	DefineString_(1, " is primitive, and can't be compiled to x86.")
	UsingMethod_(body) UsingMethod_(emit_method) UsingMethod_(is_primitive) UsingMethod_(name) UsingMethod_(on_proto) UsingMethod_(resolve)
	UsingSharedField_(compiler, Main) 
	UsingClass_(MethodBuilder__X86Compiler)
	UsingClass_(Standard)

		{
		obj_ method_builder, old_compiler, parse_tree, result;
		t0_ = Call_(is_primitive, function);
		if (t0_)
			{
			t0_ = new_co___Tuple__Standard(Proto_(Tuple__Standard), SmallInt_(6));
			t0_->fields[1] = Sym_(_34_);
			t1_ = Call_(on_proto, function);
			t2_ = Call_(name, t1_);
			t0_->fields[2] = t2_;
			t0_->fields[3] = Str_(0);
			t3_ = Call_(name, function);
			t0_->fields[4] = t3_;
			t0_->fields[5] = Sym_(_34_);
			t0_->fields[6] = Str_(1);
			t4_ = error_co___Standard(Proto_(Standard), t0_);
			}
		
		/*  Function resolution. */
		old_compiler = SharedField_(compiler, Main);
		SetSharedField_(compiler, Main, this_);
		t0_ = Call_(body, function);
		parse_tree = t0_;
		t0_ = Call_(resolve, parse_tree);
		
		/*  Codegen. */
		t0_ = new_co_code_co___MethodBuilder__X86Compiler(Proto_(MethodBuilder__X86Compiler), function, parse_tree);
		method_builder = t0_;
		t0_ = Call_(emit_method, method_builder);
		result = t0_;
		
		SetSharedField_(compiler, Main, old_compiler);
		return result;
		}
	return nil;
}


obj_ declaring_selector_co___X86Compiler(obj_ this_, obj_ selector)
{

		{
		/*  Nothing to do. */
		}
	return nil;
}


obj_ load_co_into_co_as_co___X86Compiler(obj_ this_, obj_ file_path, obj_ proto, obj_ name)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___ExistingClass__Compiler(obj_ this_, obj_ proto);
	extern obj_ read_co___LinesLexer__Trylon(obj_ this_, obj_ text);
	extern obj_ contents_of_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ parse_class_contents_co_into_co___ClassParser__Compiler(obj_ this_, obj_ block, obj_ class_);
	extern obj_ build_co___ClassBuilder__X86Compiler(obj_ this_, obj_ class_context);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(add_proto_co_) UsingMethod_(adding_class_co_) UsingMethod_(class_queue) UsingMethod_(class_queue_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(is_done) UsingMethod_(iterator)
	UsingSharedField_(compiler, Main) 
	UsingClass_(ClassBuilder__X86Compiler)
	UsingClass_(ClassParser__Compiler)
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(File__Standard)
	UsingClass_(LinesLexer__Trylon)
	UsingClass_(List__Standard)

		{
		obj_ caught_exception, old_compiler;
		/*  Set up. */
		old_compiler = SharedField_(compiler, Main);
		SetSharedField_(compiler, Main, this_);
		caught_exception = nil;
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(class_queue_co_, this_, t0_);
		
		/*  Load the file as a new class. */
		Try_
			{
			obj_ compiled_class, lines, parent_class;
			t0_ = new_co___ExistingClass__Compiler(Proto_(ExistingClass__Compiler), proto);
			parent_class = t0_;
			t0_ = Call_(adding_class_co_, this_, parent_class);
			t0_ = Call_(add_proto_co_, parent_class, name);
			compiled_class = t0_;
			t0_ = contents_of_co___File__Standard(Proto_(File__Standard), file_path);
			t1_ = read_co___LinesLexer__Trylon(Proto_(LinesLexer__Trylon), t0_);
			lines = t1_;
			t0_ = parse_class_contents_co_into_co___ClassParser__Compiler(Proto_(ClassParser__Compiler), lines, compiled_class);
			t0_ = Call_(class_queue, this_);
			ForStart_(0, t0_, class_spec)
				{
				t0_ = build_co___ClassBuilder__X86Compiler(Proto_(ClassBuilder__X86Compiler), class_spec);
				}
			ForEnd_(0)
			}
		TryElse_
			{
			caught_exception = exception;
			}
		EndTry_
		
		/*  Clean up. */
		t0_ = Call_(class_queue_co_, this_, nil);
		SetSharedField_(compiler, Main, old_compiler);
		if (caught_exception)
			{
			Throw_(caught_exception);
			}
		}
	return nil;
}


obj_ method_replacement_error_co___X86Compiler(obj_ this_, obj_ symbol)
{
	extern obj_ error_co___Standard(obj_ this_, obj_ message);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	DefineString_(0, "Unable to replace method '")
	DefineString_(1, "'.")
	UsingMethod_(_pl_) UsingMethod_(string)
	UsingClass_(Standard)

		{
		t0_ = Call_(string, symbol);
		t1_ = Call_(_pl_, Str_(0), t0_);
		t2_ = Call_(_pl_, t1_, Str_(1));
		t3_ = error_co___Standard(Proto_(Standard), t2_);
		}
	return nil;
}


obj_ reload_co_from_co___X86Compiler(obj_ this_, obj_ proto, obj_ file_path)
{
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ contents_of_co___File__Standard(obj_ this_, obj_ path);
	extern obj_ read_co___LinesLexer__Trylon(obj_ this_, obj_ text);
	extern obj_ new_co___ExistingClass__Compiler(obj_ this_, obj_ proto);
	extern obj_ parse_class_contents_co_into_co___ClassParser__Compiler(obj_ this_, obj_ block, obj_ class_);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(build_co_) UsingMethod_(class_queue_co_)
	UsingSharedField_(compiler, Main) 
	UsingClass_(ClassParser__Compiler)
	UsingClass_(ExistingClassBuilder__X86Compiler)
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(File__Standard)
	UsingClass_(LinesLexer__Trylon)
	UsingClass_(List__Standard)

		{
		obj_ caught_exception, old_compiler;
		/*  Set up. */
		old_compiler = SharedField_(compiler, Main);
		SetSharedField_(compiler, Main, this_);
		caught_exception = nil;
		t0_ = new__List__Standard(Proto_(List__Standard));
		t1_ = Call_(class_queue_co_, this_, t0_);
		
		Try_
			{
			obj_ existing_proto, lines, source;
			/*  Read into an ExistingClass. */
			t0_ = contents_of_co___File__Standard(Proto_(File__Standard), file_path);
			source = t0_;
			t0_ = read_co___LinesLexer__Trylon(Proto_(LinesLexer__Trylon), source);
			lines = t0_;
			t0_ = new_co___ExistingClass__Compiler(Proto_(ExistingClass__Compiler), proto);
			existing_proto = t0_;
			t0_ = parse_class_contents_co_into_co___ClassParser__Compiler(Proto_(ClassParser__Compiler), lines, existing_proto);
			
			/*  Build the ExistingClass into the in-process class. */
			t0_ = Call_(build_co_, Proto_(ExistingClassBuilder__X86Compiler), existing_proto);
			}
		TryElse_
			{
			caught_exception = exception;
			}
		EndTry_
		
		/*  Clean up. */
		t0_ = Call_(class_queue_co_, this_, nil);
		SetSharedField_(compiler, Main, old_compiler);
		if (caught_exception)
			{
			Throw_(caught_exception);
			}
		}
	return nil;
}


obj_ replace_method_co_on_co_with_ptr_co___X86Compiler(obj_ this_, obj_ symbol, obj_ object, obj_ fn_ptr)
{
#ifdef SUPPORT_NEW_METHODS_
#ifdef SYMBOL_DISPATCH_
fn_ptr_* method_ptr = MethodLocation_(object, symbol);
#else
struct Standard__Symbol__internal* sym =
(struct Standard__Symbol__internal*) symbol;
fn_ptr_* method_ptr = MethodLocation_(object, sym->selector);
#endif
#else
fn_ptr_* method_ptr = nil;
#endif
if (method_ptr == nil) {
UsingMethod_(method_replacement_error_co_)
Call_(method_replacement_error_co_, this_, symbol);
}
*method_ptr = (fn_ptr_) BytePtrValue_(fn_ptr);
return nil;
return nil;
}


obj_ replace_method_co_on_co_with_co_arg_names_co___X86Compiler(obj_ this_, obj_ symbol, obj_ object, obj_ source, obj_ arg_names)
{
	extern obj_ new_co___ExistingClass__Compiler(obj_ this_, obj_ proto);
	extern obj_ new__List__Standard(obj_ this_);
	extern obj_ new_co___CompiledField__Compiler(obj_ this_, obj_ name);
	extern obj_ new_co_parent_co___MethodContext__Compiler(obj_ this_, obj_ arguments, obj_ parent);
	extern obj_ read_co___LinesLexer__Trylon(obj_ this_, obj_ text);
	extern obj_ new_co_in_co___MethodParser__Compiler(obj_ this_, obj_ lines, obj_ context);
	extern obj_ new_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(obj_ this_, obj_ name, obj_ arguments, obj_ return_type, obj_ on_proto, obj_ body, obj_ is_primitive);
	extern obj_ compile_co___X86Compiler(obj_ this_, obj_ function);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(_dt_class) UsingMethod_(_dt_proto) UsingMethod_(append_co_) UsingMethod_(current_item) UsingMethod_(go_forward) UsingMethod_(install_method_co_machine_code_co_) UsingMethod_(is_done) UsingMethod_(iterator) UsingMethod_(parse) UsingMethod_(string)
	UsingClass_(CompiledField__Compiler)
	UsingClass_(CompiledFunction__Compiler)
	UsingClass_(ExistingClass__Compiler)
	UsingClass_(LinesLexer__Trylon)
	UsingClass_(List__Standard)
	UsingClass_(MethodContext__Compiler)
	UsingClass_(MethodParser__Compiler)
	UsingClass_(X86Compiler)

		{
		obj_ arguments, context, function, lines, machine_code, on_proto, parse_tree, parser;
		t0_ = Call_(_dt_proto, object);
		t1_ = new_co___ExistingClass__Compiler(Proto_(ExistingClass__Compiler), t0_);
		on_proto = t1_;
		t0_ = new__List__Standard(Proto_(List__Standard));
		arguments = t0_;
		ForStart_(0, arg_names, name)
			{
			t0_ = new_co___CompiledField__Compiler(Proto_(CompiledField__Compiler), name);
			t1_ = Call_(append_co_, arguments, t0_);
			}
		ForEnd_(0)
		
		/*  Parse. */
		t0_ = new_co_parent_co___MethodContext__Compiler(Proto_(MethodContext__Compiler), arguments, on_proto);
		context = t0_;
		t0_ = read_co___LinesLexer__Trylon(Proto_(LinesLexer__Trylon), source);
		lines = t0_;
		t0_ = new_co_in_co___MethodParser__Compiler(Proto_(MethodParser__Compiler), lines, context);
		parser = t0_;
		t0_ = Call_(parse, parser);
		parse_tree = t0_;
		
		/*  Compile. */
		t0_ = Call_(string, symbol);
		t1_ = new_co_arguments_co_return_type_co_on_proto_co_body_co_is_primitive_co___CompiledFunction__Compiler(Proto_(CompiledFunction__Compiler), t0_, arguments, nil, on_proto, parse_tree, nil);
		function = t1_;
		t0_ = compile_co___X86Compiler(Proto_(X86Compiler), function);
		machine_code = t0_;
		
		/*  Replace the method. */
		t0_ = Call_(_dt_class, object);
		t1_ = Call_(install_method_co_machine_code_co_, t0_, symbol, machine_code);
		}
	return nil;
}


obj_ status_reporter__X86Compiler(obj_ this_)
{
	UsingClass_(SilentStatusReporter)

		{
		return Proto_(SilentStatusReporter);
		}
	return nil;
}


obj_ word_size__X86Compiler(obj_ this_)
{
	return SharedField_(word_size, X86Compiler);
}


obj_ word_size_co___X86Compiler(obj_ this_, obj_ value)
{
	SetSharedField_(word_size, X86Compiler, value);
	return value;
}


