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


static obj_ token(obj_ symbol)
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


static obj_ possiblyEqualsToken(CLexer* self, obj_ without, obj_ with)
{
	if (curChar(self) == '=') {
		self->p += 1;
		return token(with);
		}
	else
		return token(without);
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
	obj_ type;
	UsingSym_(indent) UsingSym_(unindent)
	UsingSym_(name) UsingSym_(keyword)
	UsingSym_(eol) UsingSym_(eof)
	UsingSym_(_) UsingSym(__eq_)
	UsingSym_(int_literal) UsingSym_(float_literal)
	UsingSym_(string_literal) UsingSym(symbol_literal)
	UsingSym_(character_literal)
	UsingSym_(comment)
	UsingSym_(_40_) UsingSym_(_41_) UsingSym_(_123_) UsingSym_(_125_)
	UsingSym_(_91_) UsingSym_(_93_) UsingSym_(_46_) UsingSym_(_44_)
	UsingSym_(_59_) UsingSym_(_tw_)
	UsingSym_(_pl_) UsingSym_(_pl__eq_)
	UsingSym_(_eq_) UsingSym_(_eq__eq_)
	UsingSym_(_st_) UsingSym_(_st__eq_)
	UsingSym_(_dv_) UsingSym_(_dv__eq_)
	UsingSym_(_pc_) UsingSym_(_pc__eq_)
	UsingSym_(_xr_) UsingSym_(_xr__eq_)
	UsingSym_(_nt_) UsingSym_(_nt__eq_)
	UsingSym_(_co_) UsingSym_(_co__eq_)
	UsingSym_(_lt_) UsingSym_(_lt__eq_) UsingSym_(_lt__lt_) UsingSym(_lt__lt__eq_)
	UsingSym_(_gt_) UsingSym_(_gt__eq_) UsingSym_(_gt__gt_) UsingSym(_gt__gt__eq_)
	UsingSym_(_or_) UsingSym_(_or__eq_) UsingSym_(_or__or_)
	UsingSym_(_an_) UsingSym_(_an__eq_) UsingSym_(_an__an_)
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
							type = (isFloat ? Sym_(float_literal) : Sym_(int_literal));
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
			case '.':
				return token(Sym_(_46_));
			case ',':
				return token(Sym_(_44_));
			case ';':
				return token(Sym_(_59_));
			case '~':
				return token(Sym_(_tw_));

			/* Could be followed by =. */
			case '+':
				return possiblyEqualsToken(self, Sym_(_pl_), Sym_(_pl__eq_));
			case '=':
				return possiblyEqualsToken(self, Sym(_eq_), Sym_(_eq__eq_));
			case '*':
				return possiblyEqualsToken(self, Sym_(_st_), Sym_(_st__eq_));
			case '/':
				return possiblyEqualsToken(self, Sym_(_dv_), Sym_(_dv__eq_));
			case '%':
				return possiblyEqualsToken(self, Sym_(_pc_), Sym_(_pc__eq_));
			case '^':
				return possiblyEqualsToken(self, Sym_(_xr_), Sym_(_xr__eq_));
			case '!':
				return possiblyEqualsToken(self, Sym_(_nt_), Sym_(_nt__eq_));
			case ':':
				return possiblyEqualsToken(self, Sym_(_co_), Sym_(_co__eq_));

			/* Could be doubled, then followed by =. */
			case '<':
				type = Sym_(_lt_);
				nextChar = curChar(self);
				if (nextChar == c) {
					/* Doubled. */
					self->p += 1;
					if (curChar(self) == '=') {
						self->p += 1;
						type = Sym_(_lt__lt__eq_);
						}
					else
						type = Sym_(_lt__lt_);
					}
				else if (nextChar == '=') {
					self->p += 1;
					type = Sym_(_lt__eq_);
					}
				return token(type);
				break;

			case '>':
				type = Sym_(_gt_);
				nextChar = curChar(self);
				if (nextChar == c) {
					/* Doubled. */
					self->p += 1;
					if (curChar(self) == '=') {
						self->p += 1;
						type = Sym_(_gt__gt__eq_);
						}
					else
						type = Sym_(_gt__gt_);
					}
				else if (nextChar == '=') {
					self->p += 1;
					type = Sym_(_gt__eq_);
					}
				return token(type);
				break;

			/* Could be doubled, or followed by '='. */
			case '&':
				type = Sym_(_an_);
				nextChar = curChar(self);
				if (nextChar == '&') {
					self->p += 1;
					type = Sym_(_an_an_);
					}
				else if (nextChar == '=') {
					self->p += 1;
					type = Sym_(_an__eq_);
					}
				return token(type);
				break;

			case '|':
				type = Sym_(_or_);
				nextChar = curChar(self);
				if (nextChar == '|') {
					self->p += 1;
					type = Sym_(_or__or_);
					}
				else if (nextChar == '=') {
					self->p += 1;
					type = Sym_(_or__eq_);
					}
				return token(type);
				break;

			/* Name. */
			case /***/
			}
		}
}

