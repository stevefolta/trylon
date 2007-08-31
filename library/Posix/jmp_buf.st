{ include: Objects.st }
{ include "jmp_buf.h" }


jmp_buf : Object ()

jmp_buf _sizeof
{
	/* The Id compiler complains about redefining this, but it does work. */
	return (oop) sizeof(trylon_jmp_buf);
}


jmp_buf savedExceptionCatcher
{
	return (oop) ((trylon_jmp_buf*) self)->savedExceptionCatcher;
}

jmp_buf savedExceptionCatcher: catcher
{
	((trylon_jmp_buf*) self)->savedExceptionCatcher = v_catcher;
}


JmpBufChain := [ nil ]


jmp_buf save
[
	self savedExceptionCatcher: JmpBufChain.
]

jmp_buf push
[
	self savedExceptionCatcher: JmpBufChain.
	JmpBufChain := self.
]

jmp_buf restore
[
	JmpBufChain := self savedExceptionCatcher.
]



jmp_buf currentCatcher
[
	"We can see JmpBufChain in the Pepsi namespace, but it isn't correct."
	^JmpBufChain.
]


