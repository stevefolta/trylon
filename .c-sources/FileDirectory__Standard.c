#include "Trylon_.h"

UsingClass_(Iterator__FileDirectory__Standard) 
static obj_ tu0_[];
UsingSym_(FileDirectory)UsingClass_(Standard)
UsingClass_(FileDirectoryEntry__Standard)
UsingClass_(FileDirectory__Standard)
struct ClassInfo FileDirectory__Standard__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 52, 1, Proto_(FileDirectory__Standard), Proto_(Standard), Proto_(FileDirectoryEntry__Standard), nil, Sym_(FileDirectory), nil, ((obj_) tu0_) };
struct object FileDirectory__Standard = 
	{ &FileDirectory__Standard__classInfo_, {nil} };

	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(Iterator__FileDirectory__Standard) };


#define path__fld_	(0)


#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

UsingMethod_(_pl_)
DefineString_(slash, "/");
obj_ Iterator__FileDirectory__Standard__accessor_(obj_ this_)
{
	UsingClass_(Iterator__FileDirectory__Standard)
	return Proto_(Iterator__FileDirectory__Standard);
}


obj_ at_co___FileDirectory__Standard(obj_ this_, obj_ name)
{
	extern obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path);
	extern obj_ new_co___File__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	DefineString_(0, "")
	DefineString_(1, "/")
	DefineString_(2, "/")
	UsingMethod_(_pl_) UsingMethod_(_eq__eq_) UsingMethod_(entry_is_directory_co_) UsingMethod_(path)
	UsingClass_(FileDirectory__Standard)
	UsingClass_(File__Standard)

		{
		obj_ entry_path;
		entry_path = Str_(0);
		t0_ = Call_(path, this_);
		t1_ = Call_(_eq__eq_, t0_, Str_(1));
		if (t1_)
			{
			t0_ = Call_(path, this_);
			t1_ = Call_(_pl_, t0_, name);
			entry_path = t1_;
			}
		else
			{
			t0_ = Call_(path, this_);
			t1_ = Call_(_pl_, t0_, Str_(2));
			t2_ = Call_(_pl_, t1_, name);
			entry_path = t2_;
			}
		t0_ = Call_(entry_is_directory_co_, this_, name);
		if (t0_)
			{
			t0_ = new_co___FileDirectory__Standard(Proto_(FileDirectory__Standard), entry_path);
			return t0_;
			}
		else
			{
			t1_ = new_co___File__Standard(Proto_(File__Standard), entry_path);
			return t1_;
			}
		}
	return nil;
}


obj_ contains_co___FileDirectory__Standard(obj_ this_, obj_ name)
{
#ifndef MAC_OSX
/* Build the path string. */
obj_ entryPath = Call_(_pl_, Call_(_pl_, Field_(path), Str_(slash)), name);
char* entryPathStr = CString_(entryPath);

/* Does the entry exist? */
struct stat statBuf;
int result = stat(entryPathStr, &statBuf);
return Bool_(result != -1);

#else 	/* MAC_OSX */
/* The stupid Mac OSX filesystem is case-insensitive, so simply doing 
* a stat() won't tell us if a file with that (case-sensitive) name 
* really exists.  stat() doesn't give us the filename, so we need to 
* look through the whole directory. */

/* Open up the directory. */
char* nameStr;
char* dirPathStr = CString_(Field_(path));
DIR* directory = opendir(dirPathStr);
if (directory == nil)
return nil;

/* Search. */
nameStr = CString_(name);
int found = 0;
while (1) {
struct dirent* entry = readdir(directory);
if (entry == nil)
break;
if (strcmp(nameStr, entry->d_name) == 0) {
found = 1;
break;
}
}

closedir(directory);
return Bool_(found);

#endif 	/* MAC_OSX */
}


obj_ count__FileDirectory__Standard(obj_ this_)
{
/* There must be a better way to do this... */
char* pathStr = CString_(Field_(path));
DIR* directory = opendir(pathStr);

int numEntries = 0;
while (1) {
if (readdir(directory) == nil)
break;
numEntries += 1;
}

closedir(directory);
return BuildInt_(numEntries);
}


obj_ create_subdirectory_co___FileDirectory__Standard(obj_ this_, obj_ name)
{
/* Build the path string. */
obj_ entryPath = Call_(_pl_, Call_(_pl_, Field_(path), Str_(slash)), name);
char* entryPathStr = CString_(entryPath);

/* Make the directory. */
mkdir(entryPathStr, 0777);
}


obj_ create_co___FileDirectory__Standard(obj_ this_, obj_ path)
{
	obj_ t0_;
	UsingMethod_(path_co_)

		{
		t0_ = Call_(path_co_, this_, path);
		}
	return nil;
}


obj_ entry_is_directory_co___FileDirectory__Standard(obj_ this_, obj_ name)
{
/* Build the path string. */
obj_ entryPath = Call_(_pl_, Call_(_pl_, Field_(path), Str_(slash)), name);
char* entryPathStr = CString_(entryPath);

/* Does the entry exist? */
struct stat statBuf;
int result = stat(entryPathStr, &statBuf);

#ifndef MAC_OSX

return Bool_(result != -1 && S_ISDIR(statBuf.st_mode));

#else 	/* MAC_OSX */

if (result == -1 || !S_ISDIR(statBuf.st_mode))
return nil;

/* The stupid Mac OSX filesystem is case-insensitive, so simply doing a
* stat() won't tell us if a directory with that (case-sensitive) name
* really exists.  At this point we know that the entry is a file, but
* not if it really has that (case-sensitive) name.  stat() doesn't give
* us the filename, so we need to look through the whole directory. */

{
/* Open up the directory. */
char* nameStr;
char* dirPathStr = CString_(Field_(path));
DIR* directory = opendir(dirPathStr);
if (directory == nil)
return nil;

/* Search. */
nameStr = CString_(name);
int found = 0;
while (1) {
struct dirent* entry = readdir(directory);
if (entry == nil)
break;
if (strcmp(nameStr, entry->d_name) == 0) {
found = 1;
break;
}
}

closedir(directory);
return Bool_(found);
}

#endif 	/* MAC_OSX */
}


obj_ iterator__FileDirectory__Standard(obj_ this_)
{
	extern obj_ new_co___Iterator__FileDirectory__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(path)
	UsingClass_(Iterator__FileDirectory__Standard)

		{
		/*  Currently returns the names, not the entries themselves.  This may be  */
		/*  changed in the future, so use "names" instead. */
		t0_ = Call_(path, this_);
		t1_ = new_co___Iterator__FileDirectory__Standard(Proto_(Iterator__FileDirectory__Standard), t0_);
		return t1_;
		}
	return nil;
}


obj_ names__FileDirectory__Standard(obj_ this_)
{
	extern obj_ new_co___Iterator__FileDirectory__Standard(obj_ this_, obj_ path);
	obj_ t0_;
	obj_ t1_;
	UsingMethod_(path)
	UsingClass_(Iterator__FileDirectory__Standard)

		{
		t0_ = Call_(path, this_);
		t1_ = new_co___Iterator__FileDirectory__Standard(Proto_(Iterator__FileDirectory__Standard), t0_);
		return t1_;
		}
	return nil;
}


obj_ new_subdirectory_co___FileDirectory__Standard(obj_ this_, obj_ name)
{
	UsingClass_(FileDirectory__Standard)
	obj_ obj = AllocObj_(FileDirectory__Standard);
	create_subdirectory_co___FileDirectory__Standard(obj, name);
	return obj;
}


obj_ new_co___FileDirectory__Standard(obj_ this_, obj_ path)
{
	UsingClass_(FileDirectory__Standard)
	obj_ obj = AllocObj_(FileDirectory__Standard);
	create_co___FileDirectory__Standard(obj, path);
	return obj;
}


obj_ num_items__FileDirectory__Standard(obj_ this_)
{
	obj_ t0_;
	UsingMethod_(count)

		{
		t0_ = Call_(count, this_);
		}
	return nil;
}


