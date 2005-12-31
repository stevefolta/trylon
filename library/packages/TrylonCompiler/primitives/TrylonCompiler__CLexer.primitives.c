#include "Trylon_.h"

typedef struct IntStackCell_ {
	int                  	value;
	struct IntStackCell_*	next;
} IntStackCell_;

typedef struct {
	obj_ 	class_;
	char*	p;
	char*	stopper;
	int 	atLineStart;
	int 	unindentsPending;
	int 	unindentTo;
	IntStackCell_*	stackTop;
} CLexer;


static void push(CLexer* self, int value)
{
	IntStackCell_* cell = Allocate_(sizeof(IntStackCell_));
	cell->value = value;
	cell->next = self->stackTop;
	self->stackTop = cell;
}


static char curChar(CLexer* self)
{
	if (self->p >= self->stopper)
		return 0;
	else
		return *self->p;
}


static void token(obj_ symbol)
{
  extern obj_ allocate_object_co___Standard__Implementation(obj_);
  extern obj_ create_co___TrylonCompiler__Token(obj_, obj_);

	obj_ token =
		allocate_object_co___Standard__Implementation(
			(obj_) &TrylonCompiler__Token);
	create_co___TrylonCompiler__Token(token, symbol);
	return token;
}


static void textToken(obj_ symbol, char* start, char* stopper)
{
	obj_ token;
  extern obj_ allocate_object_co___Standard__Implementation(obj_);
  extern obj_ create_co_text_co___TrylonCompiler__Token(obj_, obj_, obj_);

	// Build the string object.
	struct Standard__String__Internal* strObj =
		(struct Standard__String__internal*)
			Allocate_(sizeof(struct Standard__String__internal));
	strObj->class_ = StdClassRef_(String);
#ifndef SEMI_PRIMITIVE_STRINGS_
	strObj->start = BuildBytePtr_((byte_ptr_) start);
	strObj->stopper = BuildBytePtr_((byte_ptr_) stopper);
#else 	// SEMI_PRIMITIVE_STRINGS_
	strObj->start = (byte_ptr_) start;
	strObj->stopper = (byte_ptr_) stopper;
#endif 	// SEMI_PRIMITIVE_STRINGS_

	/* Build the token. */
	token =
		allocate_object_co___Standard__Implementation(
			(obj_) &TrylonCompiler__Token);
	create_co_text_co___TrylonCompiler__Token(token, symbol, (obj_) strObj);
	return token;
}


static void throwError(obj_ message)
{
	extern obj_ create_co___Standard__MessageException(obj_, obj_);

	obj_ exception = 
		allocate_object_co___Standard__Implementation(
			(obj_) &Standard__MessageException);
	create_co___Standard__MessageException(exception, message);
	Throw_(exception);
}


obj_ create_co___TrylonCompiler__Lexer(obj_ this_, obj_ text)
{
	CLexer* self = (CLexer*) this_;
	UsingMethod_(start)  UsingMethod_(stopper)
  extern obj_ allocate_object_co___Standard__Implementation(obj_);
	extern obj_ create__TrylonCompiler__IntStack(obj_);
	extern class_spec_ TrylonCompiler__IntStack;

	self->p = BytePtrValue_(Call_(start, text));
	self->stopper = BytePtrValue_(Call_(stopper, text));
	self->atLineStart = true;
	self->unindentsPending = false;
	self->stackTop = Allocate_(sizeof(IntStackCell_));
	self->stackTop->value = 0;
	self->stackTop->next = NULL;
}


obj_ next_token__TrylonCompiler__Lexer(obj_ this_)
{ 
	int indentation;
	char c, nextChar;
	char* tokenStart, tokenEnd;
	UsingSym_(indent) UsingSym_(unindent)
	UsingSym_(name) UsingSym_(keyword)
	UsingSym_(eol) UsingSym_(eof)
	UsingSym_(_) UsingSym(__eq_)
	UsingSym_(int_literal) UsingSym_(float_literal)
	UsingSym_(string_literal) UsingSym(symbol_literal)
	UsingSym_(character_literal)
	UsingSym_(comment)
	DefineString_(0, "Indentation error!", 18)
	DefineString_(1, "Unterminated string constant.", 29)
	DefineString_(2, "Unterminated symbol.", 20)
	DefineString_(3, "Unterminated character constant.", 32)
	DefineString_(4, "Unknown character: \"", 20)
	DefineString_(5, "\"", 1)

	if (self->unindentsPending) {
		if (stackTop == NULL)
			throwError(Str_(0));
		if (unindentTo == self->stackTop->value) {
			/* We're done unindenting. */
			self->unindentsPending = false;
			}
		else {
			/* Unindent one more level. */
			self->stackTop = self->stackTop->next;
			return token(Sym_(unindent));
			}
		}

	while (1) {
		/* If at line start, figure out the indentation. */
		if (self->atLineStart) {
			self->atLineStart = false;

			/* Get the indentation */
			indentation = 0;
			while (1) {
				c = curChar(self);
				if (c == '\t' || c == ' ')
					indentation += 1;
				else
					break;
				self->p += 1;
				}

			/* If it's just an empty line, emit an EOL. */
			if (c == '\n' || c == '\r') {
				self->p += 1;
				self->atLineStart = true;
				return token(Sym_(eol));
				}

			/* Figure out the indentation change. */
			if (indentation > self->stackTop->value) {
				push(indentation);
				return token(Sym_(indent));
				}
			else if (indentation < self->stackTop->value) {
				self->unindentsPending = false;
				self->unindentTo = indentation;
				self->stackTop = self->stackTop->next;
				return token(Sym_(unindent));
				}
			}

		/* Get the next character. */
		tokenStart = self->p;
		c = curChar(self);
		self->p += 1;

		switch (c) {
			case 0:
				return token(Sym_(eof));
				break;

			case '\n':
			case '\r':
				self->atLineStart = true;
				return token(Sym_(eol));
				break;

			case '-':
				/* -, --, -= */
				nextChar = curChar(self);
				if (nextChar == '-') {
					/* Line continuation. */
					self->p += 1;
					/* Skip to next line. */
					while (1) {
						c = curChar(self);
						self->p += 1;
						if (c == '\n' || c == '\r')
							break;
						}
					/* Skip whitespace. */
					while (1) {
						c = curChar(self);
						if (c == ' ' || c == '\t' || c == 0)
							break;
						self->p += 1;
						}
					}

				else if (nextChar == '=') {
					self->p += 1;
					return token(Sym_(__eq_));
					}

				else if (nextChar >= '0' && nextChar <= '9') {
					/* Number. */
					bool isFloat = false;
					self->p += 1;
					while (1) {
						c = curChar(self);
						if (c >= '0' && c <= '9')
							self->p += 1;
						else if (c == '.') {
							isFloat = true;
							self->p += 1;
							}
						else {
							obj_ type = (isFloat ? Sym_(float_literal) : Sym_(int_literal));
							return textToken(type, tokenStart, self->p);
							}
						}
					}

				else
					return token(_);
				break;
			
			case '#':
				/* Skip initial whitespace. */
				while (1) {
					c = curChar(self);
					if (c != '\t' && c != ' ')
						break;
					self->p += 1;
					}

				/* Get the comment. */
				tokenStart = self->p;
				while (1) {
					c = curChar(self);
					if (c == '\n' || c == '\r' || c == 0)
						break;
					self->p += 1;
					}
				return textToken(Sym_(comment), tokenStart, self->p);
				break;

			case '"':
				tokenStart = self->p;
				tokenEnd = self->p;
				while (1) {
					c = curChar(self);
					tokenEnd = self->p;
					self->p += 1;
					if (c == 0)
						throwError(Str_(1));
					else if (c == '\\')
						self->p += 1;
					else if (c == '"')
						break;
					}
				return textToken(Sym_(string_literal), tokenStart, tokenEnd);
				break;

			case '\'':
				tokenStart = self->p;
				tokenEnd = self->p;
				while (1) {
					c = curChar(self);
					tokenEnd = self->p;
					self->p += 1;
					if (c == 0)
						throwError(Str_(2));
					else if (c == '\\')
						self->p += 1;
					else if (c == '\'')
						break;
					}
				return token(Sym_(symbol_literal), tokenStart, tokenEnd);
				break;

			case '`':
				tokenStart = self->p;
				tokenEnd = self->p;
				while (1) {
					c = curChar(self);
					tokenEnd = self->p;
					self->p += 1;
					if (c == 0)
						throwError(Str_(3));
					else if (c == '\\')
						self->p += 1;
					else if (c == '`')
						break;
					}
				return textToken(Sym_(character_literal), tokenStart, tokenEnd);
				break;

			/* Single-character tokens. */
			case '(':
				return token(Sym_(_40_));
			case ')':
				return token(Sym_(_41_));
			case '{':
				return token(Sym_(_123_));
			case '}':
				return token(Sym_(_125_));
			case '[':
				return token(Sym_(_91_));
			case ']':
				return token(Sym_(_93_));
			/***/
			}
		}
}

