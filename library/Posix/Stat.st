{ include: Objects.st }
{ include <sys/types.h> }
{ include <sys/stat.h> }
{ include <unistd.h> }

Stat : Object ()

Stat new
[
	| _size |
	{ v__size = (oop) sizeof(struct stat); }.
	^(self _vtable) _alloc: _size
]

Stat stat_: _path into: buf
{
	return (oop) stat((const char*) v__path, (struct stat*) v_buf);
}

Stat stat_: _path
[
	| buf _result |
	buf := Stat new.
	_result := Stat stat_: _path into: buf.
	^(_result isNil) ifTrue: [buf] ifFalse: [nil]
]

Stat stat: path 	[ ^Stat stat_: path _stringValue ]


Stat _st_dev
{
	return (oop) (long) ((struct stat*) self)->st_dev;
}
Stat st_dev 	[ ^SmallInteger value_: (self _st_dev) ]


Stat _st_ino
{
	return (oop) (long) ((struct stat*) self)->st_ino;
}
Stat st_ino 	[ ^SmallInteger value_: (self _st_ino) ]


Stat _st_mode
{
	return (oop) (long) ((struct stat*) self)->st_mode;
}
Stat st_mode 	[ ^SmallInteger value_: (self _st_mode) ]


Stat _st_nlink
{
	return (oop) (long) ((struct stat*) self)->st_nlink;
}
Stat st_nlink 	[ ^SmallInteger value_: (self _st_nlink) ]


Stat _st_uid
{
	return (oop) (long) ((struct stat*) self)->st_uid;
}
Stat st_uid 	[ ^SmallInteger value_: (self _st_uid) ]


Stat _st_gid
{
	return (oop) (long) ((struct stat*) self)->st_gid;
}
Stat st_gid 	[ ^SmallInteger value_: (self _st_gid) ]


Stat _st_rdev
{
	return (oop) (long) ((struct stat*) self)->st_rdev;
}
Stat st_rdev 	[ ^SmallInteger value_: (self _st_rdev) ]


Stat _st_size
{
	return (oop) (long) ((struct stat*) self)->st_size;
}
Stat st_size 	[ ^SmallInteger value_: (self _st_size) ]


Stat _st_blksize
{
	return (oop) (long) ((struct stat*) self)->st_blksize;
}
Stat st_blksize 	[ ^SmallInteger value_: (self _st_blksize) ]


Stat _st_blocks
{
	return (oop) (long) ((struct stat*) self)->st_blocks;
}
Stat st_blocks 	[ ^SmallInteger value_: (self _st_blocks) ]


Stat _st_atime
{
	return (oop) (long) ((struct stat*) self)->st_atime;
}
Stat st_atime 	[ ^SmallInteger value_: (self _st_atime) ]


Stat _st_mtime
{
	return (oop) (long) ((struct stat*) self)->st_mtime;
}
Stat st_mtime 	[ ^SmallInteger value_: (self _st_mtime) ]


Stat _st_ctime
{
	return (oop) (long) ((struct stat*) self)->st_ctime;
}
Stat st_ctime 	[ ^SmallInteger value_: (self _st_ctime) ]


[ true. false. ]

Stat isDir
{
	mode_t mode = ((struct stat*) self)->st_mode;
	return (S_ISDIR(mode) ? v_true : v_false);
}


