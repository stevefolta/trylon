{ include: Objects.st }
{ include <sys/types.h> }
{ include <dirent.h> }

Dirent : Object (_dirent)

Dirent new_: _value
[
	self := super new.
	_dirent := _value.
]


Dirent _ino
{
	return (oop) (long) ((struct dirent*) self->v__dirent)->d_ino;
}
Dirent ino 	[ ^SmallInteger value_: (self _ino) ]


Dirent _off
{
	return (oop) (long) ((struct dirent*) self->v__dirent)->d_off;
}
Dirent off 	[ ^SmallInteger value_: (self _off) ]


Dirent _reclen
{
	return (oop) (long) ((struct dirent*) self->v__dirent)->d_reclen;
}
Dirent reclen 	[ ^SmallInteger value_: (self _reclen) ]


Dirent _type
{
	return (oop) (long) ((struct dirent*) self->v__dirent)->d_type;
}
Dirent type 	[ ^SmallInteger value_: (self _type) ]


Dirent _name
{
	return (oop) ((struct dirent*) self->v__dirent)->d_name;
}
Dirent name 	[ ^String value_: (self _name) ]


