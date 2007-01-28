" Copy this into your ~/.vim/syntax/ directory, or, better yet, symlink to it.

" For version 5.x: Clear all syntax items
" For version 6.x: Quit when a syntax file was already loaded
if version < 600
  syntax clear
elseif exists("b:current_syntax")
  finish
endif

set iskeyword+=-

" Keywords
syn keyword Keyword	trylon class superclass field fields
syn keyword Keyword fn class-fn primitive-fn
syn keyword Conditional	if else switch iff
syn keyword Repeat	while for in loop
syn keyword Statement	return break continue
syn keyword Exception	try catch throw
syn keyword Constant	true false nil
syn keyword Constant	this super
" syn match Operator	/:=/
" syn match Operator	/=/
syn match Special	"[A-Za-z][A-Za-z-]*:" 
syn keyword PreProc --

" syn region declarationLine matchGroup=Function start="^\([\l_][\w\-]*\)\s*\((|:\)" end="$"
" syn match Function "^[A-Za-z_][A-Za-z0-9_-]* *\((\|:\)"he=e-1
" syn match Function /^[A-Za-z_][A-Za-z0-9_-]*(/he=e-1

syn region	Comment	start="#" end="$" keepend
" syn region	cCommentL	start="//" skip="\\$" end="$" keepend contains=@cCommentGroup,cSpaceError
" syn region	cComment	matchgroup=cCommentStart start="/\*" end="\*/" contains=@cCommentGroup,cCommentStartError,cSpaceError

" Strings and Symbols
syn match	cSpecial	display contained "\\\(x\x\+\|\o\{1,3}\|.\|$\)"
if !exists("c_no_utf")
  syn match	cSpecial	display contained "\\\(u\x\{4}\|U\x\{8}\)"
endif
syn region	String		start=:L\=": skip=:\\\\\|\\": end=:": end=:$: contains=cSpecial
syn region	Constant	start=+L\='+ skip=+\\\\\|\\'+ end=+'+ contains=cSpecial

" Character constants
" syn match	Character	"L\=`[^\\]`"
syn match	Character	"`[^`]*`"

" Errors
syn match Error ";"


hi def link cSpecial		SpecialChar

let b:current_syntax = "trylon"
