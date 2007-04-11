{ include: Objects.st }
{ include <sys/types.h> }
{ include <sys/stat.h> }
{ include <unistd.h> }

struct_stat : Object ()

struct_stat new
[
	| _size |
	{ v__size = (oop) sizeof(struct stat); }.
	(self _vtable) _alloc: _size
]

struct_stat stat_: _path into: buf
{
	return (oop) stat((const char*) v__path, (struct stat*) v_buf);
}


struct_stat _st_dev
{
	return (oop) (long) ((struct stat*) self)->st_dev;
}
struct_stat st_dev 	[ ^SmallInteger value_: (self _st_dev) ]


struct_stat _st_ino
{
	return (oop) (long) ((struct stat*) self)->st_ino;
}
struct_stat st_ino 	[ ^SmallInteger value_: (self _st_ino) ]


struct_stat _st_mode
{
	return (oop) (long) ((struct stat*) self)->st_mode;
}
struct_stat st_mode 	[ ^SmallInteger value_: (self _st_mode) ]


struct_stat _st_nlink
{
	return (oop) (long) ((struct stat*) self)->st_nlink;
}
struct_stat st_nlink 	[ ^SmallInteger value_: (self _st_nlink) ]


struct_stat _st_uid
{
	return (oop) (long) ((struct stat*) self)->st_uid;
}
struct_stat st_uid 	[ ^SmallInteger value_: (self _st_uid) ]


struct_stat _st_gid
{
	return (oop) (long) ((struct stat*) self)->st_gid;
}
struct_stat st_gid 	[ ^SmallInteger value_: (self _st_gid) ]


struct_stat _st_rdev
{
	return (oop) (long) ((struct stat*) self)->st_rdev;
}
struct_stat st_rdev 	[ ^SmallInteger value_: (self _st_rdev) ]


struct_stat _st_size
{
	return (oop) (long) ((struct stat*) self)->st_size;
}
struct_stat st_size 	[ ^SmallInteger value_: (self _st_size) ]


struct_stat _st_blksize
{
	return (oop) (long) ((struct stat*) self)->st_blksize;
}
struct_stat st_blksize 	[ ^SmallInteger value_: (self _st_blksize) ]


struct_stat _st_blocks
{
	return (oop) (long) ((struct stat*) self)->st_blocks;
}
struct_stat st_blocks 	[ ^SmallInteger value_: (self _st_blocks) ]


struct_stat _st_atime
{
	return (oop) (long) ((struct stat*) self)->st_atime;
}
struct_stat st_atime 	[ ^SmallInteger value_: (self _st_atime) ]


struct_stat _st_mtime
{
	return (oop) (long) ((struct stat*) self)->st_mtime;
}
struct_stat st_mtime 	[ ^SmallInteger value_: (self _st_mtime) ]


struct_stat _st_ctime
{
	return (oop) (long) ((struct stat*) self)->st_ctime;
}
struct_stat st_ctime 	[ ^SmallInteger value_: (self _st_ctime) ]


