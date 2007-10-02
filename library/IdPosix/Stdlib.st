{ include: Objects.st }
{ include <stdlib.h> }

Stdlib : Object ()


Stdlib atexit_: function
{
	atexit((void (*)(void)) v_function);
}



