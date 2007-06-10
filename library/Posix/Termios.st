{ include: Objects.st }
{ include <termios.h> }
{ include <unistd.h> }


Termios : Object ()

Termios new
[
	| _size |
	{ v__size = (oop) sizeof(struct termios); }.
	^(self _vtable) _alloc: _size
]


Termios get_: _fd
{
	tcgetattr((int) v__fd, (struct termios*) self);
}
Termios get: fd	[ Termios get_: fd _integerValue]


Termios set_: _fd
{
	tcsetattr((int) v__fd, TCSANOW, (struct termios*) self);
}
Termios set: fd	[ Termios set_: fd _integerValue]


Termios cfmakeraw
{
	cfmakeraw((struct termios*) self);
}


Termios _iflag 	{ return (oop) ((struct termios*) self)->c_iflag; }
Termios iflag 	[ ^SmallInteger value_: self _iflag. ]

Termios _oflag 	{ return (oop) ((struct termios*) self)->c_oflag; }
Termios oflag 	[ ^SmallInteger value_: self _oflag. ]

Termios _cflag 	{ return (oop) ((struct termios*) self)->c_cflag; }
Termios cflag 	[ ^SmallInteger value_: self _cflag. ]

Termios _lflag 	{ return (oop) ((struct termios*) self)->c_lflag; }
Termios lflag 	[ ^SmallInteger value_: self _lflag. ]





