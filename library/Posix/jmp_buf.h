#ifndef __jmp_buf_h__
#define __jmp_buf_h__

#include <setjmp.h>

/* Because it'll often need to save and restore an exception chain, we include
   a field for that always. */

typedef struct trylid_jmp_buf {
	jmp_buf	jmpBuf;
	oop    	savedExceptionCatcher;
} trylid_jmp_buf;


#endif 	/* !__jmp_buf_h__ */

/* Copyright 2007 Steve Folta.  See the License file. */
